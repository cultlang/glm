#include "all.h"

using namespace craft::types;

namespace _impl {
    template<typename T, size_t w, size_t h>
    std::string matPtr(T mat, std::string tname) {
        std::ostringstream out;

        for(auto i = 0; i < w; i++)
        {
			out << "|";
			for(auto j = 0; j < h - 1; j++)
			{
				out << (mat[i][j]);
				if(tname.size())
					out << tname << " ";
				else
					out << ", ";
			}
			out << (mat[i][h - 1]);
			if(tname.size())
				out << tname << " ";
			else
				out << "|\n";
		}
        return out.str();
    }
}
CRAFT_TYPE_DEFINE(glm::mat2x2)
{
	_.add<GraphPropertyName>("glm/mat2x2");
	_.add<GraphPropertyCppName>("glm::mat2x2");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat2x2> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat2x2, 2, 2>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat2x2> _this) {
		return fmt::format("(glm/mat2x2 (array Float32 {}))",_impl::matPtr<glm::mat2x2, 2, 2>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat2x3)
{
	_.add<GraphPropertyName>("glm/mat2x3");
	_.add<GraphPropertyCppName>("glm::mat2x3");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat2x3> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat2x3, 2, 3>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat2x3> _this) {
		return fmt::format("(glm/mat2x3 (array Float32 {}))",_impl::matPtr<glm::mat2x3, 2, 3>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat2x4)
{
	_.add<GraphPropertyName>("glm/mat2x4");
	_.add<GraphPropertyCppName>("glm::mat2x4");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat2x4> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat2x4, 2, 4>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat2x4> _this) {
		return fmt::format("(glm/mat2x4 (array Float32 {}))",_impl::matPtr<glm::mat2x4, 2, 4>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat3x2)
{
	_.add<GraphPropertyName>("glm/mat3x2");
	_.add<GraphPropertyCppName>("glm::mat3x2");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat3x2> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat3x2, 3, 2>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat3x2> _this) {
		return fmt::format("(glm/mat3x2 (array Float32 {}))",_impl::matPtr<glm::mat3x2, 3, 2>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat3x3)
{
	_.add<GraphPropertyName>("glm/mat3x3");
	_.add<GraphPropertyCppName>("glm::mat3x3");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat3x3> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat3x3, 3, 3>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat3x3> _this) {
		return fmt::format("(glm/mat3x3 (array Float32 {}))",_impl::matPtr<glm::mat3x3, 3, 3>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat3x4)
{
	_.add<GraphPropertyName>("glm/mat3x4");
	_.add<GraphPropertyCppName>("glm::mat3x4");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat3x4> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat3x4, 3, 4>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat3x4> _this) {
		return fmt::format("(glm/mat3x4 (array Float32 {}))",_impl::matPtr<glm::mat3x4, 3, 4>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat4x2)
{
	_.add<GraphPropertyName>("glm/mat4x2");
	_.add<GraphPropertyCppName>("glm::mat4x2");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat4x2> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat4x2, 4, 2>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat4x2> _this) {
		return fmt::format("(glm/mat4x2 (array Float32 {}))",_impl::matPtr<glm::mat4x2, 4, 2>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat4x3)
{
	_.add<GraphPropertyName>("glm/mat4x3");
	_.add<GraphPropertyCppName>("glm::mat4x3");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat4x3> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat4x3, 4, 3>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat4x3> _this) {
		return fmt::format("(glm/mat4x3 (array Float32 {}))",_impl::matPtr<glm::mat4x3, 4, 3>((*_this), "f32"));
	});
}

CRAFT_TYPE_DEFINE(glm::mat4x4)
{
	_.add<GraphPropertyName>("glm/mat4x4");
	_.add<GraphPropertyCppName>("glm::mat4x4");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::mat4x4> _this) {
		return fmt::format("{}", _impl::matPtr<glm::mat4x4, 4, 4>((*_this), ""));
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::mat4x4> _this) {
		return fmt::format("(glm/mat4x4 (array Float32 {}))",_impl::matPtr<glm::mat4x4, 4, 4>((*_this),"f32"));
	});
}

// Methods
#include "lisp/library/system/prelude.h"
#include "lisp/semantics/cult/calling.h"

using namespace craft;
using namespace craft::lisp;
using namespace craft::types;


#define lMM sem->builtin_implementMultiMethod
#define HtP "glm"

typedef instance<bool> u1;

typedef instance<uint32_t> u32;
typedef instance<int32_t> i32;
typedef instance<float> f32;

typedef instance<glm::mat2x2> m22;
typedef instance<glm::mat2x3> m23;
typedef instance<glm::mat2x4> m24;

typedef instance<glm::mat3x2> m32;
typedef instance<glm::mat3x3> m33;
typedef instance<glm::mat3x4> m34;

typedef instance<glm::mat4x2> m42;
typedef instance<glm::mat4x3> m43;
typedef instance<glm::mat4x4> m44;

typedef instance<craft::lisp::library::Array> arr;
typedef types::VarArgs<instance<>> vargs;

namespace _impl
{

	template<typename T, size_t Cols, size_t Rows>
	instance<T> coerceVarArgs(std::vector<instance<>> args)
	{
		auto res = instance<T>::make();

		if((Cols * Rows) != args.size()) throw stdext::exception("Invalid Number of Arguments, expected: {0}", Cols * Rows);

		float* data = (float*)res.get();
		for(auto i = 0; i < (Cols * Rows); ++i)
		{
			if(!args[i].isType<float>()) throw stdext::exception("Args must be of type float");
			*data = *args[i].asType<float>();
			data++;
		}
		return res;
	}

	template<typename T, size_t Cols, size_t Rows>
	instance<T> coerceArray(arr array)
	{
		auto res = instance<T>::make();

		if(!array->type().isType<float>()) throw stdext::exception("Expected type Array<f32>");
		if((Cols * Rows) != *array->size()) throw stdext::exception("Expected Array of Length: {0}", Cols * Rows);

		memcpy(res.get(), (float*)(*array->dataPtr()), Cols * Rows * sizeof(float));
		return res;
	} 
}

void cultlang::glm::make_mat_ops(instance<CultSemantics>& sem)
{
	lMM(HtP"/mat2x2", [](arr args) {return _impl::coerceArray<::glm::mat2x2, 2, 2>(args);});
	lMM(HtP"/mat2x2", [](vargs args) {return _impl::coerceVarArgs<::glm::mat2x2, 2, 2>(args.args);});
	lMM(HtP"/mat2x3", [](arr args) {return _impl::coerceArray<::glm::mat2x3, 2, 3>(args);});
	lMM(HtP"/mat2x3", [](vargs args) {return _impl::coerceVarArgs<::glm::mat2x3, 2, 3>(args.args);});
	lMM(HtP"/mat2x4", [](arr args) {return _impl::coerceArray<::glm::mat2x4, 2, 4>(args);});
	lMM(HtP"/mat2x4", [](vargs args) {return _impl::coerceVarArgs<::glm::mat2x4, 2, 4>(args.args);});

	lMM(HtP"/mat3x2", [](arr args) {return _impl::coerceArray<::glm::mat3x2, 3, 2>(args);});
	lMM(HtP"/mat3x2", [](vargs args) {return _impl::coerceVarArgs<::glm::mat3x2, 3, 2>(args.args);});
	lMM(HtP"/mat3x3", [](arr args) {return _impl::coerceArray<::glm::mat3x3, 3, 3>(args);});
	lMM(HtP"/mat3x3", [](vargs args) {return _impl::coerceVarArgs<::glm::mat3x3, 3, 3>(args.args);});
	lMM(HtP"/mat3x4", [](arr args) {return _impl::coerceArray<::glm::mat3x4, 3, 4>(args);});
	lMM(HtP"/mat3x4", [](vargs args) {return _impl::coerceVarArgs<::glm::mat3x4, 3, 4>(args.args);});

	lMM(HtP"/mat4x2", [](arr args) {return _impl::coerceArray<::glm::mat4x2, 4, 2>(args);});
	lMM(HtP"/mat4x2", [](vargs args) {return _impl::coerceVarArgs<::glm::mat4x2, 4, 2>(args.args);});
	lMM(HtP"/mat4x3", [](arr args) {return _impl::coerceArray<::glm::mat4x3, 4, 3>(args);});
	lMM(HtP"/mat4x3", [](vargs args) {return _impl::coerceVarArgs<::glm::mat4x3, 4, 3>(args.args);});
	lMM(HtP"/mat4x4", [](arr args) {return _impl::coerceArray<::glm::mat4x4, 4, 4>(args);});
	lMM(HtP"/mat4x4", [](vargs args) {return _impl::coerceVarArgs<::glm::mat4x4, 4, 4>(args.args);});


	lMM(HtP"/determinant", [](m22 mat) {return f32::make(::glm::determinant(*mat));});
	lMM(HtP"/determinant", [](m33 mat) {return f32::make(::glm::determinant(*mat));});
	lMM(HtP"/determinant", [](m44 mat) {return f32::make(::glm::determinant(*mat));});


	lMM(HtP"/inverse", [](m22 mat) {return m22::make(::glm::inverse(*mat));});
	lMM(HtP"/inverse", [](m33 mat) {return m33::make(::glm::inverse(*mat));});
	lMM(HtP"/inverse", [](m44 mat) {return m44::make(::glm::inverse(*mat));});


	lMM("*", [](m22 x, m22 y) {return m22::make(::glm::matrixCompMult(*x, *y));});
	lMM("*", [](m23 x, m23 y) {return m23::make(::glm::matrixCompMult(*x, *y));});
	lMM("*", [](m24 x, m24 y) {return m24::make(::glm::matrixCompMult(*x, *y));});

	lMM("*", [](m32 x, m32 y) {return m32::make(::glm::matrixCompMult(*x, *y));});
	lMM("*", [](m33 x, m33 y) {return m33::make(::glm::matrixCompMult(*x, *y));});
	lMM("*", [](m34 x, m34 y) {return m34::make(::glm::matrixCompMult(*x, *y));});
	
	lMM("*", [](m42 x, m42 y) {return m42::make(::glm::matrixCompMult(*x, *y));});
	lMM("*", [](m43 x, m43 y) {return m43::make(::glm::matrixCompMult(*x, *y));});
	lMM("*", [](m44 x, m44 y) {return m44::make(::glm::matrixCompMult(*x, *y));});


	lMM(HtP"/transpose", [](m22 x) {return m22::make(::glm::transpose(*x));});
	lMM(HtP"/transpose", [](m23 x) {return m32::make(::glm::transpose(*x));});
	lMM(HtP"/transpose", [](m24 x) {return m42::make(::glm::transpose(*x));});

	lMM(HtP"/transpose", [](m32 x) {return m23::make(::glm::transpose(*x));});
	lMM(HtP"/transpose", [](m33 x) {return m33::make(::glm::transpose(*x));});
	lMM(HtP"/transpose", [](m34 x) {return m43::make(::glm::transpose(*x));});
	
	lMM(HtP"/transpose", [](m42 x) {return m24::make(::glm::transpose(*x));});
	lMM(HtP"/transpose", [](m43 x) {return m34::make(::glm::transpose(*x));});
	lMM(HtP"/transpose", [](m44 x) {return m44::make(::glm::transpose(*x));});


	// GLM_EXT_matrix_clip_space
	lMM(HtP"/frustum", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustum(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumLH", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumLH(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumLH_NO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumLH_NO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumLH_ZO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumLH_ZO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumNO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumNO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumRH", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumRH(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumRH_NO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumRH_NO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumRH_ZO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumRH_ZO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/frustumZO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::frustumZO(*l, *r, *b, *t, *n, *f));});

	
	lMM(HtP"/infinitePerspective", [](f32 f0, f32 f1, f32 f2) {return m44::make(::glm::infinitePerspective(*f0, *f1, *f2));});
	lMM(HtP"/infinitePerspectiveLH", [](f32 f0, f32 f1, f32 f2) {return m44::make(::glm::infinitePerspectiveLH(*f0, *f1, *f2));});
	lMM(HtP"/infinitePerspectiveRH", [](f32 f0, f32 f1, f32 f2) {return m44::make(::glm::infinitePerspectiveRH(*f0, *f1, *f2));});

	lMM(HtP"/ortho", [](f32 l, f32 r, f32 b, f32 t) {return m44::make(::glm::ortho(*l, *r, *b, *t));});
	lMM(HtP"/ortho", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::ortho(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoLH", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoLH(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoLH_NO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoLH_NO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoLH_ZO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoLH_ZO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoNO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoNO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoRH", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoRH(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoRH_NO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoRH_NO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoRH_ZO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoRH_ZO(*l, *r, *b, *t, *n, *f));});
	lMM(HtP"/orthoZO", [](f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {return m44::make(::glm::orthoZO(*l, *r, *b, *t, *n, *f));});


	lMM(HtP"/perspective", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspective(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveFov", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFov(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovLH", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovLH(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovLH_NO", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovLH_NO(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovLH_ZO", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovLH_ZO(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovNO", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovNO(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovRH", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovRH(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovRH_NO", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovRH_NO(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovRH_ZO", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovRH_ZO(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveFovZO", [](f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {return m44::make(::glm::perspectiveFovZO(*f0, *f1, *f2, *f3, *f4));});
	lMM(HtP"/perspectiveLH", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveLH(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveLH_NO", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveLH_NO(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveLH_ZO", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveLH_ZO(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveNO", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveNO(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveRH", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveRH(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveRH_NO", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveRH_NO(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveRH_ZO", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveRH_ZO(*f0, *f1, *f2, *f3));});
	lMM(HtP"/perspectiveZO", [](f32 f0, f32 f1, f32 f2, f32 f3) {return m44::make(::glm::perspectiveZO(*f0, *f1, *f2, *f3));});

	lMM(HtP"/tweakedInfinitePerspective", [](f32 f0, f32 f1, f32 f2) {return m44::make(::glm::infinitePerspective(*f0, *f1, *f2));});
	
}