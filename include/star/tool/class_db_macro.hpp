#ifndef STAR_CLASS_DB_MACRO_HPP
#define STAR_CLASS_DB_MACRO_HPP

#include <imgui.h>

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType,              \
                                                    propertyName)              \
    ::YAML::Node propertyName##Node;                                           \
    ::star::ClassDB::structSerialize[#propertyType](                           \
        (void *)&com->propertyName, propertyName##Node);                       \
    node[#propertyName] = propertyName##Node;

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_1(propertyType,            \
                                                      propertyName)            \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_2(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_1(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_3(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_2(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_4(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_3(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_5(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_4(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_6(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_5(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_7(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_6(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_8(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_7(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_9(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_8(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_10(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_9(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_11(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_10(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_12(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_11(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_13(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_12(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_14(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_13(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_15(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_14(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_16(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_15(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_17(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_16(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_18(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_17(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_19(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_18(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_20(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_19(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_21(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_20(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_22(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_21(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_23(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_22(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_24(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_23(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_25(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_24(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_26(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_25(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_27(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_26(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_28(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_27(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_29(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_28(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_30(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_29(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_31(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_30(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_32(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_31(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_33(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_32(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_34(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_33(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_35(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_34(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_36(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_35(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_37(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_36(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_38(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_37(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_39(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_38(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_40(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_39(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_41(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_40(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_42(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_41(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_43(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_42(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_44(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_43(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_45(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_44(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_46(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_45(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_47(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_46(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_48(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_47(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_49(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_48(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_50(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_49(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_51(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_50(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_52(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_51(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_53(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_52(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_54(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_53(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_55(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_54(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_56(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_55(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_57(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_56(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_58(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_57(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_59(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_58(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_60(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_59(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_61(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_60(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_62(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_61(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_63(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_62(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_64(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_63(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_65(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_64(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_66(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_65(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_67(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_66(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_68(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_67(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_69(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_68(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_70(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_69(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_71(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_70(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_72(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_71(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_73(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_72(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_74(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_73(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_75(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_74(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_76(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_75(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_77(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_76(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_78(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_77(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_79(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_78(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_80(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_79(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_81(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_80(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_82(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_81(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_83(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_82(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_84(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_83(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_85(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_84(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_86(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_85(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_87(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_86(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_88(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_87(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_89(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_88(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_90(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_89(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_91(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_90(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_92(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_91(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_93(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_92(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_94(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_93(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_95(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_94(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_96(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_95(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_97(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_96(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_98(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_97(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_99(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_98(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_100(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_99(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_101(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_100(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_102(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_101(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_103(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_102(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_104(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_103(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_105(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_104(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_106(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_105(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_107(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_106(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_108(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_107(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_109(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_108(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_110(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_109(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_111(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_110(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_112(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_111(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_113(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_112(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_114(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_113(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_115(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_114(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_116(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_115(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_117(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_116(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_118(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_117(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_119(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_118(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_120(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_119(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_121(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_120(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_122(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_121(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_123(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_122(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_124(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_123(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_125(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_124(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_126(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_125(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_127(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_126(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_128(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_127(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType,            \
                                                      propertyName)            \
    ::star::ClassDB::structDeserialize[#propertyType](                         \
        (void *)&com.propertyName, node[#propertyName]);

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_1(propertyType,          \
                                                        propertyName)          \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_2(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_1(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_3(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_2(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_4(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_3(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_5(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_4(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_6(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_5(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_7(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_6(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_8(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_7(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_9(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_8(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_10(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_9(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_11(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_10(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_12(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_11(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_13(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_12(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_14(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_13(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_15(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_14(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_16(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_15(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_17(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_16(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_18(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_17(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_19(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_18(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_20(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_19(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_21(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_20(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_22(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_21(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_23(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_22(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_24(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_23(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_25(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_24(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_26(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_25(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_27(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_26(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_28(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_27(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_29(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_28(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_30(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_29(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_31(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_30(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_32(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_31(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_33(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_32(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_34(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_33(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_35(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_34(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_36(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_35(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_37(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_36(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_38(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_37(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_39(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_38(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_40(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_39(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_41(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_40(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_42(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_41(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_43(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_42(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_44(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_43(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_45(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_44(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_46(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_45(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_47(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_46(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_48(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_47(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_49(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_48(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_50(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_49(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_51(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_50(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_52(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_51(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_53(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_52(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_54(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_53(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_55(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_54(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_56(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_55(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_57(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_56(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_58(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_57(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_59(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_58(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_60(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_59(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_61(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_60(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_62(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_61(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_63(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_62(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_64(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_63(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_65(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_64(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_66(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_65(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_67(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_66(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_68(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_67(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_69(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_68(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_70(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_69(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_71(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_70(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_72(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_71(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_73(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_72(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_74(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_73(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_75(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_74(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_76(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_75(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_77(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_76(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_78(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_77(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_79(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_78(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_80(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_79(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_81(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_80(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_82(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_81(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_83(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_82(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_84(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_83(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_85(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_84(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_86(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_85(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_87(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_86(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_88(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_87(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_89(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_88(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_90(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_89(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_91(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_90(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_92(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_91(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_93(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_92(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_94(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_93(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_95(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_94(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_96(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_95(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_97(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_96(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_98(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_97(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_99(propertyType,         \
                                                         propertyName, ...)    \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_98(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_100(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_99(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_101(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_100(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_102(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_101(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_103(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_102(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_104(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_103(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_105(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_104(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_106(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_105(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_107(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_106(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_108(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_107(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_109(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_108(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_110(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_109(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_111(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_110(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_112(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_111(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_113(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_112(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_114(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_113(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_115(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_114(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_116(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_115(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_117(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_116(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_118(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_117(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_119(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_118(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_120(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_119(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_121(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_120(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_122(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_121(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_123(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_122(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_124(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_123(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_125(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_124(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_126(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_125(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_127(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_126(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_128(propertyType,        \
                                                          propertyName, ...)   \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL(propertyType, propertyName)  \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_127(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType,              \
                                                    propertyName)              \
    ::star::ClassDB::structEditorUI[#propertyType](                            \
        #propertyName, (void *)&com->propertyName);

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_1(propertyType,            \
                                                      propertyName)            \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_2(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_1(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_3(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_2(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_4(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_3(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_5(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_4(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_6(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_5(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_7(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_6(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_8(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_7(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_9(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_8(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_10(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_9(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_11(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_10(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_12(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_11(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_13(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_12(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_14(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_13(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_15(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_14(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_16(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_15(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_17(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_16(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_18(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_17(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_19(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_18(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_20(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_19(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_21(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_20(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_22(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_21(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_23(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_22(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_24(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_23(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_25(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_24(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_26(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_25(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_27(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_26(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_28(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_27(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_29(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_28(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_30(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_29(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_31(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_30(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_32(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_31(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_33(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_32(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_34(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_33(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_35(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_34(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_36(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_35(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_37(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_36(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_38(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_37(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_39(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_38(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_40(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_39(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_41(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_40(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_42(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_41(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_43(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_42(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_44(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_43(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_45(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_44(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_46(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_45(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_47(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_46(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_48(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_47(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_49(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_48(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_50(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_49(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_51(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_50(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_52(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_51(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_53(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_52(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_54(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_53(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_55(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_54(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_56(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_55(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_57(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_56(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_58(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_57(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_59(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_58(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_60(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_59(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_61(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_60(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_62(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_61(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_63(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_62(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_64(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_63(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_65(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_64(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_66(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_65(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_67(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_66(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_68(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_67(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_69(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_68(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_70(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_69(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_71(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_70(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_72(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_71(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_73(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_72(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_74(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_73(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_75(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_74(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_76(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_75(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_77(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_76(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_78(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_77(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_79(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_78(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_80(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_79(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_81(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_80(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_82(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_81(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_83(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_82(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_84(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_83(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_85(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_84(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_86(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_85(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_87(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_86(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_88(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_87(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_89(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_88(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_90(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_89(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_91(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_90(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_92(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_91(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_93(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_92(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_94(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_93(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_95(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_94(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_96(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_95(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_97(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_96(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_98(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_97(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_99(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_98(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_100(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_99(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_101(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_100(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_102(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_101(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_103(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_102(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_104(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_103(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_105(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_104(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_106(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_105(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_107(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_106(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_108(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_107(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_109(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_108(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_110(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_109(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_111(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_110(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_112(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_111(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_113(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_112(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_114(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_113(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_115(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_114(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_116(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_115(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_117(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_116(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_118(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_117(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_119(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_118(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_120(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_119(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_121(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_120(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_122(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_121(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_123(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_122(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_124(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_123(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_125(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_124(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_126(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_125(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_127(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_126(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_128(propertyType,          \
                                                        propertyName, ...)     \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL(propertyType, propertyName)    \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_127(__VA_ARGS__)

#define STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(index, className, ...)          \
    ::star::ClassDB::componentSerialize[#className] = [](void *component,      \
                                                         ::YAML::Node &node) { \
        auto com = static_cast<className *>(component);                        \
        STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_##index(__VA_ARGS__)       \
    };                                                                         \
    ::star::ClassDB::componentDeserialize[#className] =                        \
        [](::star::Entity &entity, const YAML::Node &node) {                   \
            auto &com = entity.addComponent<className>();                      \
            STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_IMPL_##index(__VA_ARGS__) \
        };                                                                     \
    ::star::ClassDB::componentEditorUI[#className] = [](void *component) {     \
        auto com = static_cast<className *>(component);                        \
        ::ImGui::Text(#className);                                             \
        STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_IMPL_##index(__VA_ARGS__)       \
    };

#define STAR_AUTO_CLASS_DB_COMPONENT_1(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(1, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_2(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(2, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_3(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(3, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_4(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(4, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_5(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(5, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_6(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(6, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_7(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(7, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_8(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(8, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_9(className, ...)                         \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(9, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_10(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(10, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_11(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(11, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_12(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(12, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_13(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(13, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_14(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(14, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_15(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(15, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_16(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(16, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_17(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(17, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_18(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(18, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_19(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(19, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_20(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(20, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_21(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(21, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_22(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(22, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_23(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(23, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_24(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(24, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_25(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(25, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_26(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(26, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_27(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(27, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_28(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(28, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_29(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(29, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_30(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(30, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_31(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(31, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_32(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(32, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_33(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(33, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_34(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(34, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_35(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(35, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_36(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(36, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_37(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(37, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_38(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(38, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_39(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(39, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_40(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(40, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_41(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(41, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_42(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(42, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_43(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(43, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_44(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(44, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_45(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(45, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_46(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(46, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_47(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(47, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_48(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(48, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_49(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(49, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_50(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(50, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_51(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(51, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_52(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(52, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_53(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(53, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_54(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(54, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_55(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(55, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_56(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(56, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_57(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(57, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_58(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(58, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_59(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(59, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_60(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(60, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_61(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(61, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_62(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(62, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_63(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(63, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_64(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(64, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_65(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(65, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_66(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(66, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_67(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(67, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_68(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(68, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_69(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(69, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_70(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(70, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_71(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(71, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_72(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(72, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_73(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(73, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_74(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(74, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_75(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(75, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_76(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(76, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_77(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(77, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_78(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(78, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_79(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(79, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_80(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(80, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_81(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(81, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_82(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(82, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_83(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(83, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_84(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(84, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_85(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(85, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_86(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(86, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_87(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(87, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_88(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(88, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_89(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(89, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_90(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(90, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_91(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(91, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_92(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(92, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_93(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(93, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_94(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(94, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_95(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(95, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_96(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(96, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_97(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(97, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_98(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(98, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_99(className, ...)                        \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(99, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_100(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(100, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_101(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(101, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_102(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(102, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_103(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(103, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_104(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(104, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_105(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(105, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_106(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(106, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_107(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(107, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_108(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(108, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_109(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(109, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_110(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(110, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_111(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(111, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_112(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(112, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_113(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(113, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_114(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(114, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_115(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(115, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_116(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(116, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_117(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(117, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_118(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(118, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_119(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(119, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_120(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(120, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_121(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(121, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_122(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(122, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_123(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(123, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_124(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(124, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_125(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(125, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_126(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(126, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_127(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(127, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_COMPONENT_128(className, ...)                       \
    STAR_GENERATE_CLASS_DB_COMPONENT_MARCO(128, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_1(propertyType, propertyName) \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_1(propertyType, propertyName)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_2(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_2(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_3(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_3(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_4(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_4(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_5(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_5(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_6(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_6(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_7(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_7(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_8(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_8(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_9(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_9(propertyType, propertyName,  \
                                                  __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_10(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_10(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_11(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_11(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_12(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_12(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_13(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_13(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_14(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_14(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_15(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_15(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_16(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_16(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_17(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_17(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_18(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_18(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_19(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_19(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_20(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_20(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_21(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_21(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_22(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_22(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_23(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_23(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_24(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_24(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_25(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_25(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_26(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_26(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_27(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_27(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_28(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_28(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_29(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_29(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_30(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_30(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_31(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_31(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_32(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_32(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_33(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_33(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_34(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_34(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_35(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_35(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_36(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_36(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_37(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_37(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_38(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_38(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_39(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_39(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_40(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_40(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_41(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_41(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_42(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_42(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_43(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_43(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_44(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_44(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_45(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_45(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_46(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_46(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_47(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_47(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_48(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_48(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_49(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_49(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_50(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_50(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_51(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_51(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_52(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_52(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_53(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_53(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_54(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_54(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_55(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_55(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_56(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_56(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_57(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_57(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_58(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_58(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_59(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_59(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_60(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_60(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_61(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_61(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_62(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_62(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_63(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_63(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_64(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_64(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_65(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_65(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_66(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_66(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_67(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_67(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_68(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_68(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_69(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_69(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_70(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_70(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_71(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_71(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_72(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_72(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_73(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_73(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_74(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_74(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_75(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_75(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_76(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_76(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_77(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_77(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_78(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_78(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_79(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_79(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_80(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_80(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_81(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_81(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_82(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_82(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_83(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_83(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_84(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_84(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_85(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_85(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_86(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_86(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_87(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_87(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_88(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_88(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_89(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_89(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_90(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_90(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_91(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_91(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_92(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_92(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_93(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_93(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_94(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_94(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_95(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_95(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_96(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_96(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_97(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_97(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_98(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_98(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_99(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_99(propertyType, propertyName, \
                                                   __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_100(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_100(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_101(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_101(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_102(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_102(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_103(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_103(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_104(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_104(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_105(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_105(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_106(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_106(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_107(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_107(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_108(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_108(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_109(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_109(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_110(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_110(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_111(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_111(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_112(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_112(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_113(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_113(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_114(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_114(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_115(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_115(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_116(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_116(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_117(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_117(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_118(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_118(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_119(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_119(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_120(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_120(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_121(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_121(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_122(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_122(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_123(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_123(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_124(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_124(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_125(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_125(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_126(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_126(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_127(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_127(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_128(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_IMPL_128(propertyType,              \
                                                    propertyName, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName) \
    ::ClassDB::structDeserialize[#propertyType]((void *)&data_->propertyName,  \
                                                node[#propertyName]);

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_1(propertyType,             \
                                                     propertyName)             \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_2(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_1(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_3(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_2(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_4(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_3(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_5(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_4(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_6(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_5(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_7(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_6(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_8(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_7(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_9(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_8(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_10(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_9(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_11(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_10(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_12(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_11(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_13(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_12(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_14(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_13(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_15(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_14(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_16(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_15(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_17(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_16(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_18(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_17(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_19(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_18(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_20(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_19(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_21(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_20(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_22(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_21(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_23(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_22(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_24(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_23(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_25(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_24(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_26(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_25(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_27(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_26(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_28(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_27(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_29(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_28(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_30(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_29(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_31(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_30(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_32(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_31(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_33(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_32(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_34(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_33(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_35(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_34(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_36(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_35(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_37(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_36(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_38(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_37(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_39(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_38(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_40(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_39(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_41(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_40(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_42(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_41(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_43(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_42(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_44(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_43(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_45(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_44(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_46(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_45(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_47(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_46(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_48(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_47(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_49(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_48(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_50(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_49(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_51(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_50(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_52(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_51(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_53(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_52(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_54(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_53(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_55(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_54(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_56(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_55(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_57(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_56(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_58(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_57(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_59(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_58(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_60(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_59(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_61(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_60(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_62(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_61(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_63(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_62(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_64(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_63(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_65(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_64(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_66(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_65(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_67(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_66(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_68(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_67(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_69(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_68(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_70(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_69(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_71(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_70(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_72(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_71(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_73(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_72(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_74(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_73(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_75(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_74(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_76(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_75(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_77(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_76(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_78(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_77(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_79(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_78(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_80(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_79(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_81(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_80(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_82(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_81(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_83(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_82(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_84(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_83(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_85(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_84(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_86(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_85(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_87(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_86(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_88(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_87(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_89(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_88(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_90(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_89(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_91(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_90(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_92(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_91(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_93(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_92(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_94(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_93(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_95(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_94(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_96(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_95(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_97(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_96(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_98(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_97(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_99(propertyType,            \
                                                      propertyName, ...)       \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_98(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_100(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_99(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_101(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_100(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_102(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_101(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_103(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_102(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_104(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_103(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_105(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_104(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_106(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_105(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_107(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_106(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_108(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_107(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_109(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_108(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_110(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_109(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_111(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_110(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_112(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_111(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_113(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_112(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_114(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_113(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_115(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_114(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_116(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_115(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_117(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_116(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_118(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_117(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_119(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_118(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_120(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_119(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_121(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_120(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_122(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_121(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_123(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_122(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_124(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_123(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_125(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_124(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_126(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_125(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_127(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_126(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_128(propertyType,           \
                                                       propertyName, ...)      \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL(propertyType, propertyName)     \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_127(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)   \
    ::ClassDB::structEditorUI[#propertyType](#propertyName,                    \
                                             (void *)&data_->propertyName);

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_1(propertyType, propertyName) \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_2(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_1(__VA_ARGS__)
#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_3(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_2(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_4(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_3(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_5(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_4(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_6(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_5(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_7(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_6(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_8(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_7(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_9(propertyType, propertyName, \
                                                   ...)                        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_8(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_10(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_9(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_11(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_10(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_12(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_11(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_13(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_12(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_14(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_13(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_15(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_14(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_16(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_15(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_17(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_16(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_18(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_17(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_19(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_18(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_20(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_19(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_21(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_20(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_22(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_21(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_23(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_22(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_24(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_23(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_25(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_24(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_26(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_25(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_27(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_26(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_28(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_27(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_29(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_28(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_30(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_29(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_31(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_30(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_32(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_31(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_33(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_32(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_34(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_33(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_35(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_34(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_36(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_35(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_37(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_36(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_38(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_37(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_39(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_38(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_40(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_39(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_41(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_40(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_42(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_41(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_43(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_42(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_44(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_43(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_45(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_44(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_46(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_45(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_47(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_46(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_48(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_47(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_49(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_48(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_50(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_49(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_51(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_50(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_52(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_51(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_53(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_52(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_54(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_53(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_55(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_54(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_56(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_55(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_57(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_56(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_58(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_57(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_59(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_58(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_60(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_59(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_61(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_60(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_62(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_61(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_63(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_62(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_64(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_63(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_65(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_64(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_66(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_65(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_67(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_66(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_68(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_67(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_69(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_68(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_70(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_69(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_71(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_70(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_72(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_71(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_73(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_72(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_74(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_73(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_75(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_74(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_76(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_75(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_77(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_76(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_78(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_77(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_79(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_78(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_80(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_79(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_81(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_80(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_82(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_81(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_83(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_82(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_84(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_83(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_85(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_84(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_86(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_85(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_87(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_86(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_88(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_87(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_89(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_88(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_90(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_89(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_91(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_90(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_92(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_91(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_93(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_92(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_94(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_93(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_95(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_94(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_96(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_95(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_97(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_96(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_98(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_97(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_99(propertyType,              \
                                                    propertyName, ...)         \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_98(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_100(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_99(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_101(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_100(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_102(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_101(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_103(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_102(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_104(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_103(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_105(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_104(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_106(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_105(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_107(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_106(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_108(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_107(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_109(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_108(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_110(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_109(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_111(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_110(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_112(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_111(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_113(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_112(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_114(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_113(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_115(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_114(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_116(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_115(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_117(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_116(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_118(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_117(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_119(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_118(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_120(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_119(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_121(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_120(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_122(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_121(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_123(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_122(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_124(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_123(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_125(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_124(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_126(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_125(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_127(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_126(__VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_128(propertyType,             \
                                                     propertyName, ...)        \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL(propertyType, propertyName)       \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_127(__VA_ARGS__)

#define STAR_GENERATE_CLASS_DB_STRUCT(index, className, ...)                   \
    ::star::ClassDB::componentSerialize[#className] = [](void *data,           \
                                                         ::YAML::Node &node) { \
        auto com = static_cast<className *>(data);                             \
        STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_IMPL_##index(__VA_ARGS__)          \
    };                                                                         \
    ::star::ClassDB::componentDeserialize[#className] =                        \
        [](void *data, const YAML::Node &node) {                               \
            auto data_ = static_cast<className *>(data);                       \
            STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_IMPL_##index(__VA_ARGS__)    \
        };                                                                     \
    ::star::ClassDB::componentEditorUI[#className] = [](const char *name,      \
                                                        void *data) {          \
        auto data_ = static_cast<className *>(data);                           \
        ::ImGui::Text(name);                                                   \
        STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_IMPL_##index(__VA_ARGS__)          \
    };

#define STAR_AUTO_CLASS_DB_STRUCT_1(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(1, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_2(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(2, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_3(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(3, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_4(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(4, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_5(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(5, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_6(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(6, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_7(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(7, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_8(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(8, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_9(className, ...)                            \
    STAR_GENERATE_CLASS_DB_STRUCT(9, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_10(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(10, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_11(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(11, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_12(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(12, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_13(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(13, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_14(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(14, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_15(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(15, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_16(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(16, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_17(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(17, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_18(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(18, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_19(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(19, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_20(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(20, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_21(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(21, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_22(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(22, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_23(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(23, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_24(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(24, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_25(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(25, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_26(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(26, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_27(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(27, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_28(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(28, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_29(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(29, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_30(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(30, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_31(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(31, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_32(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(32, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_33(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(33, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_34(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(34, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_35(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(35, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_36(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(36, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_37(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(37, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_38(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(38, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_39(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(39, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_40(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(40, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_41(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(41, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_42(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(42, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_43(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(43, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_44(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(44, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_45(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(45, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_46(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(46, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_47(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(47, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_48(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(48, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_49(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(49, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_50(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(50, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_51(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(51, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_52(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(52, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_53(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(53, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_54(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(54, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_55(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(55, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_56(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(56, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_57(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(57, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_58(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(58, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_59(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(59, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_60(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(60, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_61(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(61, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_62(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(62, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_63(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(63, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_64(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(64, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_65(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(65, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_66(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(66, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_67(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(67, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_68(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(68, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_69(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(69, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_70(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(70, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_71(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(71, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_72(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(72, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_73(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(73, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_74(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(74, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_75(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(75, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_76(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(76, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_77(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(77, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_78(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(78, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_79(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(79, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_80(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(80, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_81(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(81, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_82(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(82, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_83(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(83, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_84(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(84, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_85(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(85, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_86(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(86, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_87(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(87, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_88(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(88, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_89(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(89, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_90(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(90, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_91(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(91, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_92(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(92, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_93(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(93, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_94(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(94, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_95(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(95, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_96(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(96, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_97(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(97, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_98(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(98, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_99(className, ...)                           \
    STAR_GENERATE_CLASS_DB_STRUCT(99, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_100(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(100, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_101(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(101, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_102(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(102, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_103(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(103, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_104(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(104, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_105(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(105, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_106(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(106, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_107(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(107, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_108(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(108, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_109(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(109, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_110(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(110, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_111(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(111, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_112(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(112, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_113(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(113, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_114(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(114, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_115(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(115, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_116(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(116, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_117(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(117, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_118(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(118, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_119(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(119, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_120(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(120, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_121(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(121, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_122(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(122, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_123(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(123, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_124(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(124, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_125(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(125, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_126(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(126, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_127(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(127, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_STRUCT_128(className, ...)                          \
    STAR_GENERATE_CLASS_DB_STRUCT(128, className, __VA_ARGS__)

#define STAR_AUTO_CLASS_DB_ENUM(className, num, ...)                            \
    ::star::ClassDB::componentSerialize[#className] = [](void *data,            \
                                                         ::YAML::Node &node) {  \
        auto data_ = static_cast<int32_t *>(data);                              \
        node["value"] = *data_;                                                 \
    };                                                                          \
    ::star::ClassDB::componentDeserialize[#className] =                         \
        [](void *data, const YAML::Node &node) {                                \
            auto data_ = static_cast<int32_t *>(data);                          \
            *data = static_cast<className>(node["value"].as<int32_t>);          \
        };                                                                      \
    ::star::ClassDB::componentEditorUI[#className] = [](const char *name,       \
                                                        void *data) {           \
        auto data_ = static_cast<className *>(data);                            \
        auto itemPtr = static_cast<int32_t *>(data);                            \
        const char *items[] = {__VA_ARGS__};                                    \
        if (ImGui::Combo(name, itemPtr, items, num) {                         \
            *data_ = static_cast<className>(*itemPtr);                    \
        }                                                                       \
    };

#endif // STAR_CLASS_DB_MACRO_HPP