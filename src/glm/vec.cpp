#include "all.h"

using namespace craft::types;

CRAFT_TYPE_DEFINE(glm::vec2)
{
	_.add<GraphPropertyName>("glm/vec2");
	_.add<GraphPropertyCppName>("glm::vec2");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::vec2> _this) {
		return fmt::format("<{},{}>", _this->x, _this->y);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::vec2> _this) {
		return fmt::format("(glm/vec2 {}f32 {}f32)", _this->x, _this->y);
	});
}

CRAFT_TYPE_DEFINE(glm::uvec2)
{
	_.add<GraphPropertyName>("glm/uvec2");
	_.add<GraphPropertyCppName>("glm::uvec2");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::uvec2> _this) {
		return fmt::format("<{},{}>", _this->x, _this->y);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::uvec2> _this) {
		return fmt::format("(glm/uvec2 {}u32 {}u32)", _this->x, _this->y);
	});
}

CRAFT_TYPE_DEFINE(glm::ivec2)
{
	_.add<GraphPropertyName>("glm/ivec2");
	_.add<GraphPropertyCppName>("glm::ivec2");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::ivec2> _this) {
		return fmt::format("<{},{}>", _this->x, _this->y);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::ivec2> _this) {
		return fmt::format("(glm/ivec2 {}i32 {}i32)", _this->x, _this->y);
	});
}

CRAFT_TYPE_DEFINE(glm::vec3)
{
	_.add<GraphPropertyName>("glm/vec3");
	_.add<GraphPropertyCppName>("glm::vec3");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::vec3> _this) {
		return fmt::format("<{},{},{}>", _this->x, _this->y, _this->z);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::vec3> _this) {
		return fmt::format("(glm/vec3 {}f32 {}f32 {}f32)", _this->x, _this->y, _this->z);
	});
}

CRAFT_TYPE_DEFINE(glm::uvec3)
{
	_.add<GraphPropertyName>("glm/uvec3");
	_.add<GraphPropertyCppName>("glm::uvec3");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::uvec3> _this) {
		return fmt::format("<{},{},{}>", _this->x, _this->y, _this->z);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::uvec3> _this) {
		return fmt::format("(glm/vec3 {}u32 {}u32 {}u32)", _this->x, _this->y, _this->z);
	});
}

CRAFT_TYPE_DEFINE(glm::ivec3)
{
	_.add<GraphPropertyName>("glm/ivec3");
	_.add<GraphPropertyCppName>("glm::ivec3");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::ivec3> _this) {
		return fmt::format("<{},{},{}>", _this->x, _this->y, _this->z);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::ivec3> _this) {
		return fmt::format("(glm/vec3 {}i32 {}i32 {}i32)", _this->x, _this->y, _this->z);
	});
}

CRAFT_TYPE_DEFINE(glm::vec4)
{
	_.add<GraphPropertyName>("glm/vec4");
	_.add<GraphPropertyCppName>("glm::vec4");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::vec4> _this) {
		return fmt::format("<{},{},{},{}>", _this->x, _this->y, _this->z, _this->w);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::vec4> _this) {
		return fmt::format("(glm/vec4 {}f32 {}f32 {}f32 {}f32)", _this->x, _this->y, _this->z, _this->w);
	});
}

CRAFT_TYPE_DEFINE(glm::uvec4)
{
	_.add<GraphPropertyName>("glm/uvec4");
	_.add<GraphPropertyCppName>("glm::uvec4");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::uvec4> _this) {
		return fmt::format("<{},{},{},{}>", _this->x, _this->y, _this->z, _this->w);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::uvec4> _this) {
		return fmt::format("(glm/vec4 {}u32 {}u32 {}u32 {}u32)", _this->x, _this->y, _this->z, _this->w);
	});
}

CRAFT_TYPE_DEFINE(glm::ivec4)
{
	_.add<GraphPropertyName>("glm/ivec4");
	_.add<GraphPropertyCppName>("glm::ivec4");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::ivec4> _this) {
		return fmt::format("<{},{},{},{}>", _this->x, _this->y, _this->z, _this->w);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::ivec4> _this) {
		return fmt::format("(glm/vec4 {}i32 {}i32 {}i32 {}i32)", _this->x, _this->y, _this->z, _this->w);
	});
}


// Methods
#include "lisp/library/system/prelude.h"
#include "lisp/semantics/cult/calling.h"

using namespace craft;
using namespace craft::lisp;
using namespace craft::types;
using namespace cultlang::glm;



#define lMM sem->builtin_implementMultiMethod
#define HtP "glm"

typedef instance<bool> u1;

typedef instance<uint32_t> u32;
typedef instance<int32_t> i32;
typedef instance<float> f32;

typedef instance<glm::uvec2> v2_u32;
typedef instance<glm::ivec2> v2_i32;
typedef instance<glm::vec2> v2_f32;

typedef instance<glm::uvec3> v3_u32;
typedef instance<glm::ivec3> v3_i32;
typedef instance<glm::vec3> v3_f32;

typedef instance<glm::uvec4> v4_u32;
typedef instance<glm::ivec4> v4_i32;
typedef instance<glm::vec4> v4_f32;


void cultlang::glm::make_vec_ops(instance<CultSemantics>& sem)
{
	// Constructors
    lMM(HtP"/vec2", []() { return instance<::glm::vec2>::make(0.0f);});
    lMM(HtP"/vec2", [](f32 x) { return instance<::glm::vec2>::make(*x);});
    lMM(HtP"/vec2", [](f32 x, f32 y) { return instance<::glm::vec2>::make(*x, *y);});

	lMM(HtP"/vec2", [](v2_f32 v) { return instance<::glm::vec2>::make(*v);});
	lMM(HtP"/vec2", [](v2_i32 v) { return instance<::glm::vec2>::make(*v);});
	lMM(HtP"/vec2", [](v2_u32 v) { return instance<::glm::vec2>::make(*v);});


    lMM(HtP"/vec3", []() { return instance<::glm::vec3>::make(0.0f);});
    lMM(HtP"/vec3", [](f32 x) { return instance<::glm::vec3>::make(*x);});
    lMM(HtP"/vec3", [](f32 x, f32 y, f32 z) { return instance<::glm::vec3>::make(*x, *y, *z);});

	lMM(HtP"/vec3", [](v3_f32 v) { return instance<::glm::vec3>::make(*v);});
	lMM(HtP"/vec3", [](v3_i32 v) { return instance<::glm::vec3>::make(*v);});
	lMM(HtP"/vec3", [](v3_u32 v) { return instance<::glm::vec3>::make(*v);});


    lMM(HtP"/vec4", []() { return instance<::glm::vec4>::make(0.0f);});
    lMM(HtP"/vec4", [](f32 x) { return instance<::glm::vec4>::make(*x);});
    lMM(HtP"/vec4", [](f32 x, f32 y, f32 z, f32 w) { return instance<::glm::vec4>::make(*x, *y, *z, *w);});

	lMM(HtP"/vec4", [](v4_f32 v) { return instance<::glm::vec4>::make(*v);});
	lMM(HtP"/vec4", [](v4_i32 v) { return instance<::glm::vec4>::make(*v);});
	lMM(HtP"/vec4", [](v4_u32 v) { return instance<::glm::vec4>::make(*v);});


    lMM(HtP"/uvec2", []() { return instance<::glm::uvec2>::make(0);});
    lMM(HtP"/uvec2", [](u32 x) { return instance<::glm::uvec2>::make(*x);});
    lMM(HtP"/uvec2", [](u32 x, u32 y) { return instance<::glm::uvec2>::make(*x, *y);});

	lMM(HtP"/uvec2", [](v2_f32 v) { return instance<::glm::uvec2>::make(*v);});
	lMM(HtP"/uvec2", [](v2_i32 v) { return instance<::glm::uvec2>::make(*v);});
	lMM(HtP"/uvec2", [](v2_u32 v) { return instance<::glm::uvec2>::make(*v);});
	

    lMM(HtP"/uvec3", []() { return instance<::glm::uvec3>::make(0);});
    lMM(HtP"/uvec3", [](u32 x) { return instance<::glm::uvec3>::make(*x);});
    lMM(HtP"/uvec3", [](u32 x, u32 y, u32 z) { return instance<::glm::uvec3>::make(*x, *y, *z);});

	lMM(HtP"/uvec3", [](v3_f32 v) { return instance<::glm::uvec3>::make(*v);});
	lMM(HtP"/uvec3", [](v3_i32 v) { return instance<::glm::uvec3>::make(*v);});
	lMM(HtP"/uvec3", [](v3_u32 v) { return instance<::glm::uvec3>::make(*v);});


    lMM(HtP"/uvec4", []() { return instance<::glm::uvec4>::make(0);});
    lMM(HtP"/uvec4", [](u32 x) { return instance<::glm::uvec4>::make(*x);});
    lMM(HtP"/uvec4", [](u32 x, u32 y, u32 z, u32 w) { return instance<::glm::uvec4>::make(*x, *y, *z, *w);});

	lMM(HtP"/uvec4", [](v4_f32 v) { return instance<::glm::uvec4>::make(*v);});
	lMM(HtP"/uvec4", [](v4_i32 v) { return instance<::glm::uvec4>::make(*v);});
	lMM(HtP"/uvec4", [](v4_u32 v) { return instance<::glm::uvec4>::make(*v);});


    lMM(HtP"/ivec2", []() { return instance<::glm::ivec2>::make(0);});
    lMM(HtP"/ivec2", [](i32 x) { return instance<::glm::ivec2>::make(*x);});
    lMM(HtP"/ivec2", [](i32 x, i32 y) { return instance<::glm::ivec2>::make(*x, *y);});

	lMM(HtP"/ivec2", [](v2_f32 v) { return instance<::glm::ivec2>::make(*v);});
	lMM(HtP"/ivec2", [](v2_i32 v) { return instance<::glm::ivec2>::make(*v);});
	lMM(HtP"/ivec2", [](v2_u32 v) { return instance<::glm::ivec2>::make(*v);});


    lMM(HtP"/ivec3", []() { return instance<::glm::ivec3>::make(0);});
    lMM(HtP"/ivec3", [](i32 x) { return instance<::glm::ivec3>::make(*x);});
    lMM(HtP"/ivec3", [](i32 x, i32 y, i32 z) { return instance<::glm::ivec3>::make(*x, *y, *z);});

	lMM(HtP"/ivec3", [](v3_f32 v) { return instance<::glm::ivec3>::make(*v);});
	lMM(HtP"/ivec3", [](v3_i32 v) { return instance<::glm::ivec3>::make(*v);});
	lMM(HtP"/ivec3", [](v3_u32 v) { return instance<::glm::ivec3>::make(*v);});


    lMM(HtP"/ivec4", []() { return instance<::glm::ivec4>::make(0);});
    lMM(HtP"/ivec4", [](i32 x) { return instance<::glm::ivec4>::make(*x);});
    lMM(HtP"/ivec4", [](i32 x, i32 y, i32 z, i32 w) { return instance<::glm::ivec4>::make(*x, *y, *z, *w);});

	lMM(HtP"/ivec4", [](v4_f32 v) { return instance<::glm::ivec4>::make(*v);});
	lMM(HtP"/ivec4", [](v4_i32 v) { return instance<::glm::ivec4>::make(*v);});
	lMM(HtP"/ivec4", [](v4_u32 v) { return instance<::glm::ivec4>::make(*v);});

    // Accessors
    lMM(HtP"/vec/x", [](v2_f32 v) { return f32::make(v->x);});
    lMM(HtP"/vec/x", [](v2_u32 v) { return u32::make(v->x);});
    lMM(HtP"/vec/x", [](v2_i32 v) { return i32::make(v->x);});

    lMM(HtP"/vec/x", [](v3_f32 v) { return f32::make(v->x);});
    lMM(HtP"/vec/x", [](v3_u32 v) { return u32::make(v->x);});
    lMM(HtP"/vec/x", [](v3_i32 v) { return i32::make(v->x);});

    lMM(HtP"/vec/x", [](v4_f32 v) { return f32::make(v->x);});
    lMM(HtP"/vec/x", [](v4_u32 v) { return u32::make(v->x);});
    lMM(HtP"/vec/x", [](v4_i32 v) { return i32::make(v->x);});


    lMM(HtP"/vec/y", [](v2_f32 v) { return f32::make(v->y);});
    lMM(HtP"/vec/y", [](v2_u32 v) { return u32::make(v->y);});
    lMM(HtP"/vec/y", [](v2_i32 v) { return i32::make(v->y);});

    lMM(HtP"/vec/y", [](v3_f32 v) { return f32::make(v->y);});
    lMM(HtP"/vec/y", [](v3_u32 v) { return u32::make(v->y);});
    lMM(HtP"/vec/y", [](v3_i32 v) { return i32::make(v->y);});

    lMM(HtP"/vec/y", [](v4_f32 v) { return f32::make(v->y);});
    lMM(HtP"/vec/y", [](v4_u32 v) { return u32::make(v->y);});
    lMM(HtP"/vec/y", [](v4_i32 v) { return i32::make(v->y);});


    lMM(HtP"/vec/z", [](v3_f32 v) { return f32::make(v->z);});
    lMM(HtP"/vec/z", [](v3_u32 v) { return u32::make(v->z);});
    lMM(HtP"/vec/z", [](v3_i32 v) { return i32::make(v->z);});

    lMM(HtP"/vec/z", [](v4_f32 v) { return f32::make(v->z);});
    lMM(HtP"/vec/z", [](v4_u32 v) { return u32::make(v->z);});
    lMM(HtP"/vec/z", [](v4_i32 v) { return i32::make(v->z);});


    lMM(HtP"/vec/w", [](v4_f32 v) { return f32::make(v->w);});
    lMM(HtP"/vec/w", [](v4_u32 v) { return u32::make(v->w);});
    lMM(HtP"/vec/w", [](v4_i32 v) { return i32::make(v->w);});


    // Math Ops TODO UnNamespace these
    lMM("+", [](v2_f32 x, v2_f32 y) { return v2_f32::make(*x + *y);});
    lMM("+", [](v2_u32 x, v2_u32 y) { return v2_u32::make(*x + *y);});
    lMM("+", [](v2_i32 x, v2_i32 y) { return v2_i32::make(*x + *y);});

    lMM("+", [](v3_f32 x, v3_f32 y) { return v3_f32::make(*x + *y);});
    lMM("+", [](v3_u32 x, v3_u32 y) { return v3_u32::make(*x + *y);});
    lMM("+", [](v3_i32 x, v3_i32 y) { return v3_i32::make(*x + *y);});

    lMM("+", [](v4_f32 x, v4_f32 y) { return v4_f32::make(*x + *y);});
    lMM("+", [](v4_u32 x, v4_u32 y) { return v4_u32::make(*x + *y);});
    lMM("+", [](v4_i32 x, v4_i32 y) { return v4_i32::make(*x + *y);});


    lMM("-", [](v2_f32 x, v2_f32 y) { return v2_f32::make(*x - *y);});
    lMM("-", [](v2_u32 x, v2_u32 y) { return v2_u32::make(*x - *y);});
    lMM("-", [](v2_i32 x, v2_i32 y) { return v2_i32::make(*x - *y);});

    lMM("-", [](v3_f32 x, v3_f32 y) { return v3_f32::make(*x - *y);});
    lMM("-", [](v3_u32 x, v3_u32 y) { return v3_u32::make(*x - *y);});
    lMM("-", [](v3_i32 x, v3_i32 y) { return v3_i32::make(*x - *y);});

    lMM("-", [](v4_f32 x, v4_f32 y) { return v4_f32::make(*x - *y);});
    lMM("-", [](v4_u32 x, v4_u32 y) { return v4_u32::make(*x - *y);});
    lMM("-", [](v4_i32 x, v4_i32 y) { return v4_i32::make(*x - *y);});


    lMM("*", [](v2_f32 x, f32 y) { return v2_f32::make(*x * *y);});
    lMM("*", [](v2_u32 x, u32 y) { return v2_u32::make(*x * *y);});
    lMM("*", [](v2_i32 x, i32 y) { return v2_i32::make(*x * *y);});
    lMM("*", [](f32 x, v2_f32 y) { return v2_f32::make(*x * *y);});
    lMM("*", [](u32 x, v2_u32 y) { return v2_u32::make(*x * *y);});
    lMM("*", [](i32 x, v2_i32 y) { return v2_i32::make(*x * *y);});


    lMM("*", [](v3_f32 x, f32 y) { return v3_f32::make(*x * *y);});
    lMM("*", [](v3_u32 x, u32 y) { return v3_u32::make(*x * *y);});
    lMM("*", [](v3_i32 x, i32 y) { return v3_i32::make(*x * *y);});
    lMM("*", [](f32 x, v3_f32 y) { return v3_f32::make(*x * *y);});
    lMM("*", [](u32 x, v3_u32 y) { return v3_u32::make(*x * *y);});
    lMM("*", [](i32 x, v3_i32 y) { return v3_i32::make(*x * *y);});


    lMM("*", [](v3_f32 x, f32 y) { return v3_f32::make(*x * *y);});
    lMM("*", [](v3_u32 x, u32 y) { return v3_u32::make(*x * *y);});
    lMM("*", [](v3_i32 x, i32 y) { return v3_i32::make(*x * *y);});
    lMM("*", [](f32 x, v3_f32 y) { return v3_f32::make(*x * *y);});
    lMM("*", [](u32 x, v3_u32 y) { return v3_u32::make(*x * *y);});
    lMM("*", [](i32 x, v3_i32 y) { return v3_i32::make(*x * *y);});


    lMM("*", [](v4_f32 x, f32 y) { return v4_f32::make(*x * *y);});
    lMM("*", [](v4_u32 x, u32 y) { return v4_u32::make(*x * *y);});
    lMM("*", [](v4_i32 x, i32 y) { return v4_i32::make(*x * *y);});
    lMM("*", [](f32 x, v4_f32 y) { return v4_f32::make(*x * *y);});
    lMM("*", [](u32 x, v4_u32 y) { return v4_u32::make(*x * *y);});
    lMM("*", [](i32 x, v4_i32 y) { return v4_i32::make(*x * *y);});



	// Common Functions
	lMM(HtP"/abs", [](v2_f32 x) { return v2_f32::make(::glm::abs(*x));});
	lMM(HtP"/abs", [](v2_i32 x) { return v2_i32::make(::glm::abs(*x));});

	lMM(HtP"/abs", [](v3_f32 x) { return v3_f32::make(::glm::abs(*x));});
	lMM(HtP"/abs", [](v3_i32 x) { return v3_i32::make(::glm::abs(*x));});

	lMM(HtP"/abs", [](v4_f32 x) { return v4_f32::make(::glm::abs(*x));});
	lMM(HtP"/abs", [](v4_i32 x) { return v4_i32::make(::glm::abs(*x));});


	lMM(HtP"/ceil", [](v2_f32 x) { return v2_f32::make(::glm::ceil(*x));});
	lMM(HtP"/ceil", [](v3_f32 x) { return v3_f32::make(::glm::ceil(*x));});
	lMM(HtP"/ceil", [](v4_f32 x) { return v4_f32::make(::glm::ceil(*x));});


	lMM(HtP"/clamp", [](v2_f32 x, v2_f32 mi, v2_f32 ma) { return v2_f32::make(::glm::clamp(*x, *mi, *ma));});
	lMM(HtP"/clamp", [](v2_u32 x, v2_u32 mi, v2_u32 ma) { return v2_u32::make(::glm::clamp(*x, *mi, *ma));});
	lMM(HtP"/clamp", [](v2_i32 x, v2_i32 mi, v2_i32 ma) { return v2_i32::make(::glm::clamp(*x, *mi, *ma));});

	lMM(HtP"/clamp", [](v3_f32 x, v3_f32 mi, v3_f32 ma) { return v3_f32::make(::glm::clamp(*x, *mi, *ma));});
	lMM(HtP"/clamp", [](v3_u32 x, v3_u32 mi, v3_u32 ma) { return v3_u32::make(::glm::clamp(*x, *mi, *ma));});
	lMM(HtP"/clamp", [](v3_i32 x, v3_i32 mi, v3_i32 ma) { return v3_i32::make(::glm::clamp(*x, *mi, *ma));});

	lMM(HtP"/clamp", [](v4_f32 x, v4_f32 mi, v4_f32 ma) { return v4_f32::make(::glm::clamp(*x, *mi, *ma));});
	lMM(HtP"/clamp", [](v4_u32 x, v4_u32 mi, v4_u32 ma) { return v4_u32::make(::glm::clamp(*x, *mi, *ma));});
	lMM(HtP"/clamp", [](v4_i32 x, v4_i32 mi, v4_i32 ma) { return v4_i32::make(::glm::clamp(*x, *mi, *ma));});


	lMM(HtP"/fma", [](v2_f32 x, v2_f32 mi, v2_f32 ma) { return v2_f32::make(::glm::fma(*x, *mi, *ma));});
	lMM(HtP"/fma", [](v2_u32 x, v2_u32 mi, v2_u32 ma) { return v2_u32::make(::glm::fma(*x, *mi, *ma));});
	lMM(HtP"/fma", [](v2_i32 x, v2_i32 mi, v2_i32 ma) { return v2_i32::make(::glm::fma(*x, *mi, *ma));});

	lMM(HtP"/fma", [](v3_f32 x, v3_f32 mi, v3_f32 ma) { return v3_f32::make(::glm::fma(*x, *mi, *ma));});
	lMM(HtP"/fma", [](v3_u32 x, v3_u32 mi, v3_u32 ma) { return v3_u32::make(::glm::fma(*x, *mi, *ma));});
	lMM(HtP"/fma", [](v3_i32 x, v3_i32 mi, v3_i32 ma) { return v3_i32::make(::glm::fma(*x, *mi, *ma));});

	lMM(HtP"/fma", [](v4_f32 x, v4_f32 mi, v4_f32 ma) { return v4_f32::make(::glm::fma(*x, *mi, *ma));});
	lMM(HtP"/fma", [](v4_u32 x, v4_u32 mi, v4_u32 ma) { return v4_u32::make(::glm::fma(*x, *mi, *ma));});
	lMM(HtP"/fma", [](v4_i32 x, v4_i32 mi, v4_i32 ma) { return v4_i32::make(::glm::fma(*x, *mi, *ma));});


	lMM(HtP"/floor", [](v2_f32 x) { return v2_f32::make(::glm::floor(*x));});
	lMM(HtP"/floor", [](v3_f32 x) { return v3_f32::make(::glm::floor(*x));});
	lMM(HtP"/floor", [](v4_f32 x) { return v4_f32::make(::glm::floor(*x));});
	


	lMM(HtP"/fract", [](v2_f32 x) { return v2_f32::make(::glm::fract(*x));});
	lMM(HtP"/fract", [](v3_f32 x) { return v3_f32::make(::glm::fract(*x));});
	lMM(HtP"/fract", [](v4_f32 x) { return v4_f32::make(::glm::fract(*x));});
	

	lMM(HtP"/isinf", [](v2_f32 x) { return v2_f32::make(::glm::isinf(*x));});
	lMM(HtP"/isinf", [](v3_f32 x) { return v3_f32::make(::glm::isinf(*x));});
	lMM(HtP"/isinf", [](v4_f32 x) { return v4_f32::make(::glm::isinf(*x));});



	lMM(HtP"/isnan", [](v2_f32 x) { return v2_f32::make(::glm::isnan(*x));});
	lMM(HtP"/isnan", [](v3_f32 x) { return v3_f32::make(::glm::isnan(*x));});
	lMM(HtP"/isnan", [](v4_f32 x) { return v4_f32::make(::glm::isnan(*x));});
	


	lMM(HtP"/max", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::max(*x, *y));});
	lMM(HtP"/max", [](v2_u32 x, v2_u32 y) { return v2_u32::make(::glm::max(*x, *y));});
	lMM(HtP"/max", [](v2_i32 x, v2_i32 y) { return v2_i32::make(::glm::max(*x, *y));});

	lMM(HtP"/max", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::max(*x, *y));});
	lMM(HtP"/max", [](v3_u32 x, v3_u32 y) { return v3_u32::make(::glm::max(*x, *y));});
	lMM(HtP"/max", [](v3_i32 x, v3_i32 y) { return v3_i32::make(::glm::max(*x, *y));});

	lMM(HtP"/max", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::max(*x, *y));});
	lMM(HtP"/max", [](v4_u32 x, v4_u32 y) { return v4_u32::make(::glm::max(*x, *y));});
	lMM(HtP"/max", [](v4_i32 x, v4_i32 y) { return v4_i32::make(::glm::max(*x, *y));});


	lMM(HtP"/min", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::min(*x, *y));});
	lMM(HtP"/min", [](v2_u32 x, v2_u32 y) { return v2_u32::make(::glm::min(*x, *y));});
	lMM(HtP"/min", [](v2_i32 x, v2_i32 y) { return v2_i32::make(::glm::min(*x, *y));});

	lMM(HtP"/min", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::min(*x, *y));});
	lMM(HtP"/min", [](v3_u32 x, v3_u32 y) { return v3_u32::make(::glm::min(*x, *y));});
	lMM(HtP"/min", [](v3_i32 x, v3_i32 y) { return v3_i32::make(::glm::min(*x, *y));});

	lMM(HtP"/min", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::min(*x, *y));});
	lMM(HtP"/min", [](v4_u32 x, v4_u32 y) { return v4_u32::make(::glm::min(*x, *y));});
	lMM(HtP"/min", [](v4_i32 x, v4_i32 y) { return v4_i32::make(::glm::min(*x, *y));});


	lMM(HtP"/mix", [](v2_f32 x, v2_f32 y, f32 a) { return v2_f32::make(::glm::mix(*x, *y, *a));});
	lMM(HtP"/mix", [](v2_u32 x, v2_u32 y, f32 a) { return v2_u32::make(::glm::mix(*x, *y, *a));});
	lMM(HtP"/mix", [](v2_i32 x, v2_i32 y, f32 a) { return v2_i32::make(::glm::mix(*x, *y, *a));});

	lMM(HtP"/mix", [](v3_f32 x, v3_f32 y, f32 a) { return v3_f32::make(::glm::mix(*x, *y, *a));});
	lMM(HtP"/mix", [](v3_u32 x, v3_u32 y, f32 a) { return v3_u32::make(::glm::mix(*x, *y, *a));});
	lMM(HtP"/mix", [](v3_i32 x, v3_i32 y, f32 a) { return v3_i32::make(::glm::mix(*x, *y, *a));});

	lMM(HtP"/mix", [](v4_f32 x, v4_f32 y, f32 a) { return v4_f32::make(::glm::mix(*x, *y, *a));});
	lMM(HtP"/mix", [](v4_u32 x, v4_u32 y, f32 a) { return v4_u32::make(::glm::mix(*x, *y, *a));});
	lMM(HtP"/mix", [](v4_i32 x, v4_i32 y, f32 a) { return v4_i32::make(::glm::mix(*x, *y, *a));});


	lMM(HtP"/mod", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::mod(*x, *y));});
	lMM(HtP"/mod", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::mod(*x, *y));});
	lMM(HtP"/mod", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::mod(*x, *y));});


	lMM(HtP"/round", [](v2_f32 x) { return v2_f32::make(::glm::round(*x));});
	lMM(HtP"/round", [](v3_f32 x) { return v3_f32::make(::glm::round(*x));});
	lMM(HtP"/round", [](v4_f32 x) { return v4_f32::make(::glm::round(*x));});
	

	lMM(HtP"/roundEven", [](v2_f32 x) { return v2_f32::make(::glm::roundEven(*x));});
	lMM(HtP"/roundEven", [](v3_f32 x) { return v3_f32::make(::glm::roundEven(*x));});
	lMM(HtP"/roundEven", [](v4_f32 x) { return v4_f32::make(::glm::roundEven(*x));});
	

	lMM(HtP"/sign", [](v2_f32 x) { return v2_f32::make(::glm::sign(*x));});
	lMM(HtP"/sign", [](v2_i32 x) { return v2_i32::make(::glm::sign(*x));});

	lMM(HtP"/sign", [](v3_f32 x) { return v3_f32::make(::glm::sign(*x));});
	lMM(HtP"/sign", [](v3_i32 x) { return v3_i32::make(::glm::sign(*x));});

	lMM(HtP"/sign", [](v4_f32 x) { return v4_f32::make(::glm::sign(*x));});
	lMM(HtP"/sign", [](v4_i32 x) { return v4_i32::make(::glm::sign(*x));});


	lMM(HtP"/step", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::step(*x, *y));});
	lMM(HtP"/step", [](v2_u32 x, v2_u32 y) { return v2_u32::make(::glm::step(*x, *y));});
	lMM(HtP"/step", [](v2_i32 x, v2_i32 y) { return v2_i32::make(::glm::step(*x, *y));});

	lMM(HtP"/step", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::step(*x, *y));});
	lMM(HtP"/step", [](v3_u32 x, v3_u32 y) { return v3_u32::make(::glm::step(*x, *y));});
	lMM(HtP"/step", [](v3_i32 x, v3_i32 y) { return v3_i32::make(::glm::step(*x, *y));});

	lMM(HtP"/step", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::step(*x, *y));});
	lMM(HtP"/step", [](v4_u32 x, v4_u32 y) { return v4_u32::make(::glm::step(*x, *y));});
	lMM(HtP"/step", [](v4_i32 x, v4_i32 y) { return v4_i32::make(::glm::step(*x, *y));});



	// Exp Functions
	lMM(HtP"/exp", [](v2_f32 x) { return v2_f32::make(::glm::exp(*x));});
	lMM(HtP"/exp", [](v3_f32 x) { return v3_f32::make(::glm::exp(*x));});
	lMM(HtP"/exp", [](v4_f32 x) { return v4_f32::make(::glm::exp(*x));});

	lMM(HtP"/exp2", [](v2_f32 x) { return v2_f32::make(::glm::exp2(*x));});
	lMM(HtP"/exp2", [](v3_f32 x) { return v3_f32::make(::glm::exp2(*x));});
	lMM(HtP"/exp2", [](v4_f32 x) { return v4_f32::make(::glm::exp2(*x));});

	lMM(HtP"/inversesqrt", [](v2_f32 x) { return v2_f32::make(::glm::inversesqrt(*x));});
	lMM(HtP"/inversesqrt", [](v3_f32 x) { return v3_f32::make(::glm::inversesqrt(*x));});
	lMM(HtP"/inversesqrt", [](v4_f32 x) { return v4_f32::make(::glm::inversesqrt(*x));});

	lMM(HtP"/log", [](v2_f32 x) { return v2_f32::make(::glm::log(*x));});
	lMM(HtP"/log", [](v3_f32 x) { return v3_f32::make(::glm::log(*x));});
	lMM(HtP"/log", [](v4_f32 x) { return v4_f32::make(::glm::log(*x));});

	lMM(HtP"/sqrt", [](v2_f32 x) { return v2_f32::make(::glm::sqrt(*x));});
	lMM(HtP"/sqrt", [](v3_f32 x) { return v3_f32::make(::glm::sqrt(*x));});
	lMM(HtP"/sqrt", [](v4_f32 x) { return v4_f32::make(::glm::sqrt(*x));});

	lMM(HtP"/pow", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::pow(*x, *y));});
	lMM(HtP"/pow", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::pow(*x, *y));});
	lMM(HtP"/pow", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::pow(*x, *y));});

	lMM(HtP"/sqrt", [](v2_f32 x) { return v2_f32::make(::glm::sqrt(*x));});
	lMM(HtP"/sqrt", [](v3_f32 x) { return v3_f32::make(::glm::sqrt(*x));});
	lMM(HtP"/sqrt", [](v4_f32 x) { return v4_f32::make(::glm::sqrt(*x));});



	// Geometric Functions
	lMM(HtP"/cross", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::cross(*x, *y));});

	lMM(HtP"/distance", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::distance(*x, *y));});
	lMM(HtP"/distance", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::distance(*x, *y));});
	lMM(HtP"/distance", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::distance(*x, *y));});

	lMM(HtP"/dot", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::dot(*x, *y));});
	lMM(HtP"/dot", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::dot(*x, *y));});
	lMM(HtP"/dot", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::dot(*x, *y));});

	lMM(HtP"/faceforward", [](v2_f32 x, v2_f32 y, v2_f32 z) { return v2_f32::make(::glm::faceforward(*x, *y, *z));});
	lMM(HtP"/faceforward", [](v3_f32 x, v3_f32 y, v3_f32 z) { return v3_f32::make(::glm::faceforward(*x, *y, *z));});
	lMM(HtP"/faceforward", [](v4_f32 x, v4_f32 y, v4_f32 z) { return v4_f32::make(::glm::faceforward(*x, *y, *z));});

	lMM(HtP"/reflect", [](v2_f32 x, v2_f32 y) { return v2_f32::make(::glm::reflect(*x, *y));});
	lMM(HtP"/reflect", [](v3_f32 x, v3_f32 y) { return v3_f32::make(::glm::reflect(*x, *y));});
	lMM(HtP"/reflect", [](v4_f32 x, v4_f32 y) { return v4_f32::make(::glm::reflect(*x, *y));});

	lMM(HtP"/refract", [](v2_f32 x, v2_f32 y, f32 eta) { return v2_f32::make(::glm::refract(*x, *y, *eta));});
	lMM(HtP"/refract", [](v3_f32 x, v3_f32 y, f32 eta) { return v3_f32::make(::glm::refract(*x, *y, *eta));});
	lMM(HtP"/refract", [](v4_f32 x, v4_f32 y, f32 eta) { return v4_f32::make(::glm::refract(*x, *y, *eta));});

	
	// Trig Functions
	lMM(HtP"/acos", [](v2_f32 x) { return v2_f32::make(::glm::acos(*x));});
	lMM(HtP"/acos", [](v3_f32 x) { return v3_f32::make(::glm::acos(*x));});
	lMM(HtP"/acos", [](v4_f32 x) { return v4_f32::make(::glm::acos(*x));});

	lMM(HtP"/acosh", [](v2_f32 x) { return v2_f32::make(::glm::acosh(*x));});
	lMM(HtP"/acosh", [](v3_f32 x) { return v3_f32::make(::glm::acosh(*x));});
	lMM(HtP"/acosh", [](v4_f32 x) { return v4_f32::make(::glm::acosh(*x));});


	lMM(HtP"/asin", [](v2_f32 x) { return v2_f32::make(::glm::asin(*x));});
	lMM(HtP"/asin", [](v3_f32 x) { return v3_f32::make(::glm::asin(*x));});
	lMM(HtP"/asin", [](v4_f32 x) { return v4_f32::make(::glm::asin(*x));});

	lMM(HtP"/asinh", [](v2_f32 x) { return v2_f32::make(::glm::asinh(*x));});
	lMM(HtP"/asinh", [](v3_f32 x) { return v3_f32::make(::glm::asinh(*x));});
	lMM(HtP"/asinh", [](v4_f32 x) { return v4_f32::make(::glm::asinh(*x));});


	lMM(HtP"/atan", [](v2_f32 x) { return v2_f32::make(::glm::atan(*x));});
	lMM(HtP"/atan", [](v3_f32 x) { return v3_f32::make(::glm::atan(*x));});
	lMM(HtP"/atan", [](v4_f32 x) { return v4_f32::make(::glm::atan(*x));});

	lMM(HtP"/atanh", [](v2_f32 x) { return v2_f32::make(::glm::atanh(*x));});
	lMM(HtP"/atanh", [](v3_f32 x) { return v3_f32::make(::glm::atanh(*x));});
	lMM(HtP"/atanh", [](v4_f32 x) { return v4_f32::make(::glm::atanh(*x));});


	lMM(HtP"/cos", [](v2_f32 x) { return v2_f32::make(::glm::cos(*x));});
	lMM(HtP"/cos", [](v3_f32 x) { return v3_f32::make(::glm::cos(*x));});
	lMM(HtP"/cos", [](v4_f32 x) { return v4_f32::make(::glm::cos(*x));});

	lMM(HtP"/cosh", [](v2_f32 x) { return v2_f32::make(::glm::cosh(*x));});
	lMM(HtP"/cosh", [](v3_f32 x) { return v3_f32::make(::glm::cosh(*x));});
	lMM(HtP"/cosh", [](v4_f32 x) { return v4_f32::make(::glm::cosh(*x));});

	lMM(HtP"/sin", [](v2_f32 x) { return v2_f32::make(::glm::sin(*x));});
	lMM(HtP"/sin", [](v3_f32 x) { return v3_f32::make(::glm::sin(*x));});
	lMM(HtP"/sin", [](v4_f32 x) { return v4_f32::make(::glm::sin(*x));});


	lMM(HtP"/degrees", [](v2_f32 x) { return v2_f32::make(::glm::degrees(*x));});
	lMM(HtP"/degrees", [](v3_f32 x) { return v3_f32::make(::glm::degrees(*x));});
	lMM(HtP"/degrees", [](v4_f32 x) { return v4_f32::make(::glm::degrees(*x));});


	lMM(HtP"/radians", [](v2_f32 x) { return v2_f32::make(::glm::radians(*x));});
	lMM(HtP"/radians", [](v3_f32 x) { return v3_f32::make(::glm::radians(*x));});
	lMM(HtP"/radians", [](v4_f32 x) { return v4_f32::make(::glm::radians(*x));});


	lMM(HtP"/sinh", [](v2_f32 x) { return v2_f32::make(::glm::sinh(*x));});
	lMM(HtP"/sinh", [](v3_f32 x) { return v3_f32::make(::glm::sinh(*x));});
	lMM(HtP"/sinh", [](v4_f32 x) { return v4_f32::make(::glm::sinh(*x));});


	lMM(HtP"/tan", [](v2_f32 x) { return v2_f32::make(::glm::tan(*x));});
	lMM(HtP"/tan", [](v3_f32 x) { return v3_f32::make(::glm::tan(*x));});
	lMM(HtP"/tan", [](v4_f32 x) { return v4_f32::make(::glm::tan(*x));});

	lMM(HtP"/tanh", [](v2_f32 x) { return v2_f32::make(::glm::tanh(*x));});
	lMM(HtP"/tanh", [](v3_f32 x) { return v3_f32::make(::glm::tanh(*x));});
	lMM(HtP"/tanh", [](v4_f32 x) { return v4_f32::make(::glm::tanh(*x));});

}