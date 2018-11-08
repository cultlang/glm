#include "all.h"

using namespace craft::types;

CRAFT_TYPE_DEFINE(glm::quat)
{
	_.add<GraphPropertyName>("glm/quat");
	_.add<GraphPropertyCppName>("glm::quat");
	_.use<PStringer>().singleton<FunctionalStringer>([](::craft::instance<glm::quat> _this) {
		return fmt::format("<{},{},{},{}>", _this->x, _this->y, _this->z, _this->w);
	});
	_.use<PRepr>().singleton<FunctionalRepr>([](::craft::instance<glm::quat> _this) {
		return fmt::format("(glm/quat {}f32 {}f32 {}f32 {}f32)", _this->x, _this->y, _this->z, _this->w);
	});
}
