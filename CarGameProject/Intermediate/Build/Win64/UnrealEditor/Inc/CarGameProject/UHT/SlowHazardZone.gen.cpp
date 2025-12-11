// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarGameProject/SlowHazardZone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlowHazardZone() {}

// ********** Begin Cross Module References ********************************************************
CARGAMEPROJECT_API UClass* Z_Construct_UClass_AHazardZone();
CARGAMEPROJECT_API UClass* Z_Construct_UClass_ASlowHazardZone();
CARGAMEPROJECT_API UClass* Z_Construct_UClass_ASlowHazardZone_NoRegister();
UPackage* Z_Construct_UPackage__Script_CarGameProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASlowHazardZone **********************************************************
void ASlowHazardZone::StaticRegisterNativesASlowHazardZone()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASlowHazardZone;
UClass* ASlowHazardZone::GetPrivateStaticClass()
{
	using TClass = ASlowHazardZone;
	if (!Z_Registration_Info_UClass_ASlowHazardZone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SlowHazardZone"),
			Z_Registration_Info_UClass_ASlowHazardZone.InnerSingleton,
			StaticRegisterNativesASlowHazardZone,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASlowHazardZone.InnerSingleton;
}
UClass* Z_Construct_UClass_ASlowHazardZone_NoRegister()
{
	return ASlowHazardZone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASlowHazardZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SlowHazardZone.h" },
		{ "ModuleRelativePath", "SlowHazardZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraLinearDamping_MetaData[] = {
		{ "Category", "Slow Hazard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much extra damping to add (bigger = more resistance, slower car)\n" },
#endif
		{ "ModuleRelativePath", "SlowHazardZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much extra damping to add (bigger = more resistance, slower car)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAngularDamping_MetaData[] = {
		{ "Category", "Slow Hazard" },
		{ "ModuleRelativePath", "SlowHazardZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraLinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraAngularDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlowHazardZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowHazardZone_Statics::NewProp_ExtraLinearDamping = { "ExtraLinearDamping", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowHazardZone, ExtraLinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraLinearDamping_MetaData), NewProp_ExtraLinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowHazardZone_Statics::NewProp_ExtraAngularDamping = { "ExtraAngularDamping", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowHazardZone, ExtraAngularDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraAngularDamping_MetaData), NewProp_ExtraAngularDamping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlowHazardZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowHazardZone_Statics::NewProp_ExtraLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowHazardZone_Statics::NewProp_ExtraAngularDamping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowHazardZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlowHazardZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHazardZone,
	(UObject* (*)())Z_Construct_UPackage__Script_CarGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowHazardZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlowHazardZone_Statics::ClassParams = {
	&ASlowHazardZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASlowHazardZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlowHazardZone_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowHazardZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlowHazardZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlowHazardZone()
{
	if (!Z_Registration_Info_UClass_ASlowHazardZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlowHazardZone.OuterSingleton, Z_Construct_UClass_ASlowHazardZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlowHazardZone.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlowHazardZone);
ASlowHazardZone::~ASlowHazardZone() {}
// ********** End Class ASlowHazardZone ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlowHazardZone_h__Script_CarGameProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlowHazardZone, ASlowHazardZone::StaticClass, TEXT("ASlowHazardZone"), &Z_Registration_Info_UClass_ASlowHazardZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlowHazardZone), 269356032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlowHazardZone_h__Script_CarGameProject_2715704895(TEXT("/Script/CarGameProject"),
	Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlowHazardZone_h__Script_CarGameProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlowHazardZone_h__Script_CarGameProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
