
#include "glm/common.h"

#include "all.h"

#include "lisp/library/system/prelude.h"
#include "lisp/semantics/cult/calling.h"

using namespace craft;
using namespace craft::lisp;
using namespace craft::types;
using namespace cultlang::glm;



#define lMM sem->builtin_implementMultiMethod
#define HtP "glm"

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


void cultlang::glm::make_glm_bindings(craft::instance<craft::lisp::Module> mod)
{
    auto sem = instance<CultSemantics>::make(mod);
    mod->builtin_setSemantics(sem);

    make_vec_ops(sem);
    make_mat_ops(sem);
    
    //END
}

BuiltinModuleDescription cultlang::glm::BuiltinGlm("cult/glm", cultlang::glm::make_glm_bindings);


#include "types/dll_entry.inc"
    
