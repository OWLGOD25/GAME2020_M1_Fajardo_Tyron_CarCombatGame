// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarGameProject/SlipperyHazardZone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlipperyHazardZone() {}

// ********** Begin Cross Module References ********************************************************
CARGAMEPROJECT_API UClass* Z_Construct_UClass_AHazardZone();
CARGAMEPROJECT_API UClass* Z_Construct_UClass_ASlipperyHazardZone();
CARGAMEPROJECT_API UClass* Z_Construct_UClass_ASlipperyHazardZone_NoRegister();
UPackage* Z_Construct_UPackage__Script_CarGameProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASlipperyHazardZone ******************************************************
void ASlipperyHazardZone::StaticRegisterNativesASlipperyHazardZone()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASlipperyHazardZone;
UClass* ASlipperyHazardZone::GetPrivateStaticClass()
{
	using TClass = ASlipperyHazardZone;
	if (!Z_Registration_Info_UClass_ASlipperyHazardZone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SlipperyHazardZone"),
			Z_Registration_Info_UClass_ASlipperyHazardZone.InnerSingleton,
			StaticRegisterNativesASlipperyHazardZone,
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
	return Z_Registration_Info_UClass_ASlipperyHazardZone.InnerSingleton;
}
UClass* Z_Construct_UClass_ASlipperyHazardZone_NoRegister()
{
	return ASlipperyHazardZone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASlipperyHazardZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SlipperyHazardZone.h" },
		{ "ModuleRelativePath", "SlipperyHazardZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLinearDamping_MetaData[] = {
		{ "Category", "Slippery Hazard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lower damping = more sliding\n" },
#endif
		{ "ModuleRelativePath", "SlipperyHazardZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lower damping = more sliding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAngularDamping_MetaData[] = {
		{ "Category", "Slippery Hazard" },
		{ "ModuleRelativePath", "SlipperyHazardZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAngularDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlipperyHazardZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlipperyHazardZone_Statics::NewProp_TargetLinearDamping = { "TargetLinearDamping", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlipperyHazardZone, TargetLinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLinearDamping_MetaData), NewProp_TargetLinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlipperyHazardZone_Statics::NewProp_TargetAngularDamping = { "TargetAngularDamping", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlipperyHazardZone, TargetAngularDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAngularDamping_MetaData), NewProp_TargetAngularDamping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlipperyHazardZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlipperyHazardZone_Statics::NewProp_TargetLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlipperyHazardZone_Statics::NewProp_TargetAngularDamping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlipperyHazardZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlipperyHazardZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHazardZone,
	(UObject* (*)())Z_Construct_UPackage__Script_CarGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlipperyHazardZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlipperyHazardZone_Statics::ClassParams = {
	&ASlipperyHazardZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASlipperyHazardZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlipperyHazardZone_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlipperyHazardZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlipperyHazardZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlipperyHazardZone()
{
	if (!Z_Registration_Info_UClass_ASlipperyHazardZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlipperyHazardZone.OuterSingleton, Z_Construct_UClass_ASlipperyHazardZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlipperyHazardZone.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlipperyHazardZone);
ASlipperyHazardZone::~ASlipperyHazardZone() {}
// ********** End Class ASlipperyHazardZone ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlipperyHazardZone_h__Script_CarGameProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlipperyHazardZone, ASlipperyHazardZone::StaticClass, TEXT("ASlipperyHazardZone"), &Z_Registration_Info_UClass_ASlipperyHazardZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlipperyHazardZone), 4060531560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlipperyHazardZone_h__Script_CarGameProject_518595410(TEXT("/Script/CarGameProject"),
	Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlipperyHazardZone_h__Script_CarGameProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_SlipperyHazardZone_h__Script_CarGameProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
