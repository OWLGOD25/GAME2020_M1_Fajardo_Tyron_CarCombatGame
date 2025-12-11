// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarGameProject/WindHazardZone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWindHazardZone() {}

// ********** Begin Cross Module References ********************************************************
CARGAMEPROJECT_API UClass* Z_Construct_UClass_AHazardZone();
CARGAMEPROJECT_API UClass* Z_Construct_UClass_AWindHazardZone();
CARGAMEPROJECT_API UClass* Z_Construct_UClass_AWindHazardZone_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CarGameProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWindHazardZone **********************************************************
void AWindHazardZone::StaticRegisterNativesAWindHazardZone()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWindHazardZone;
UClass* AWindHazardZone::GetPrivateStaticClass()
{
	using TClass = AWindHazardZone;
	if (!Z_Registration_Info_UClass_AWindHazardZone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WindHazardZone"),
			Z_Registration_Info_UClass_AWindHazardZone.InnerSingleton,
			StaticRegisterNativesAWindHazardZone,
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
	return Z_Registration_Info_UClass_AWindHazardZone.InnerSingleton;
}
UClass* Z_Construct_UClass_AWindHazardZone_NoRegister()
{
	return AWindHazardZone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWindHazardZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WindHazardZone.h" },
		{ "ModuleRelativePath", "WindHazardZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindDirection_MetaData[] = {
		{ "Category", "Wind Hazard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base wind direction (will be normalized)\n" },
#endif
		{ "ModuleRelativePath", "WindHazardZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base wind direction (will be normalized)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindStrength_MetaData[] = {
		{ "Category", "Wind Hazard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Force magnitude\n" },
#endif
		{ "ModuleRelativePath", "WindHazardZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force magnitude" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeDirection_MetaData[] = {
		{ "Category", "Wind Hazard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, adds some random yaw variation every tick\n" },
#endif
		{ "ModuleRelativePath", "WindHazardZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, adds some random yaw variation every tick" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components currently inside the wind zone\n" },
#endif
		{ "ModuleRelativePath", "WindHazardZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components currently inside the wind zone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindStrength;
	static void NewProp_bRandomizeDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeDirection;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OverlappingComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindHazardZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWindHazardZone_Statics::NewProp_WindDirection = { "WindDirection", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWindHazardZone, WindDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindDirection_MetaData), NewProp_WindDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindHazardZone_Statics::NewProp_WindStrength = { "WindStrength", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWindHazardZone, WindStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindStrength_MetaData), NewProp_WindStrength_MetaData) };
void Z_Construct_UClass_AWindHazardZone_Statics::NewProp_bRandomizeDirection_SetBit(void* Obj)
{
	((AWindHazardZone*)Obj)->bRandomizeDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWindHazardZone_Statics::NewProp_bRandomizeDirection = { "bRandomizeDirection", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWindHazardZone), &Z_Construct_UClass_AWindHazardZone_Statics::NewProp_bRandomizeDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeDirection_MetaData), NewProp_bRandomizeDirection_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AWindHazardZone_Statics::NewProp_OverlappingComponents_Inner = { "OverlappingComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWindHazardZone_Statics::NewProp_OverlappingComponents = { "OverlappingComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWindHazardZone, OverlappingComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingComponents_MetaData), NewProp_OverlappingComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindHazardZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindHazardZone_Statics::NewProp_WindDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindHazardZone_Statics::NewProp_WindStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindHazardZone_Statics::NewProp_bRandomizeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindHazardZone_Statics::NewProp_OverlappingComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindHazardZone_Statics::NewProp_OverlappingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWindHazardZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWindHazardZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHazardZone,
	(UObject* (*)())Z_Construct_UPackage__Script_CarGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWindHazardZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWindHazardZone_Statics::ClassParams = {
	&AWindHazardZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWindHazardZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWindHazardZone_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWindHazardZone_Statics::Class_MetaDataParams), Z_Construct_UClass_AWindHazardZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWindHazardZone()
{
	if (!Z_Registration_Info_UClass_AWindHazardZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWindHazardZone.OuterSingleton, Z_Construct_UClass_AWindHazardZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWindHazardZone.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWindHazardZone);
AWindHazardZone::~AWindHazardZone() {}
// ********** End Class AWindHazardZone ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_WindHazardZone_h__Script_CarGameProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWindHazardZone, AWindHazardZone::StaticClass, TEXT("AWindHazardZone"), &Z_Registration_Info_UClass_AWindHazardZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWindHazardZone), 2703078010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_WindHazardZone_h__Script_CarGameProject_429414868(TEXT("/Script/CarGameProject"),
	Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_WindHazardZone_h__Script_CarGameProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_WindHazardZone_h__Script_CarGameProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
