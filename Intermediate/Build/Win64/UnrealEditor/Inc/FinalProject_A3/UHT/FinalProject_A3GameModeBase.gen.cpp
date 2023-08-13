// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject_A3/FinalProject_A3GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalProject_A3GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FINALPROJECT_A3_API UClass* Z_Construct_UClass_AFinalProject_A3GameModeBase();
	FINALPROJECT_A3_API UClass* Z_Construct_UClass_AFinalProject_A3GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FinalProject_A3();
// End Cross Module References
	void AFinalProject_A3GameModeBase::StaticRegisterNativesAFinalProject_A3GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFinalProject_A3GameModeBase);
	UClass* Z_Construct_UClass_AFinalProject_A3GameModeBase_NoRegister()
	{
		return AFinalProject_A3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject_A3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FinalProject_A3GameModeBase.h" },
		{ "ModuleRelativePath", "FinalProject_A3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalProject_A3GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics::ClassParams = {
		&AFinalProject_A3GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinalProject_A3GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFinalProject_A3GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalProject_A3GameModeBase.OuterSingleton, Z_Construct_UClass_AFinalProject_A3GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFinalProject_A3GameModeBase.OuterSingleton;
	}
	template<> FINALPROJECT_A3_API UClass* StaticClass<AFinalProject_A3GameModeBase>()
	{
		return AFinalProject_A3GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalProject_A3GameModeBase);
	AFinalProject_A3GameModeBase::~AFinalProject_A3GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_rod_f_OneDrive_Documentos_VFS_Term04_UnrealC___UE_A3_FinalProject_A3_Source_FinalProject_A3_FinalProject_A3GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rod_f_OneDrive_Documentos_VFS_Term04_UnrealC___UE_A3_FinalProject_A3_Source_FinalProject_A3_FinalProject_A3GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFinalProject_A3GameModeBase, AFinalProject_A3GameModeBase::StaticClass, TEXT("AFinalProject_A3GameModeBase"), &Z_Registration_Info_UClass_AFinalProject_A3GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalProject_A3GameModeBase), 3485289154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rod_f_OneDrive_Documentos_VFS_Term04_UnrealC___UE_A3_FinalProject_A3_Source_FinalProject_A3_FinalProject_A3GameModeBase_h_1115802759(TEXT("/Script/FinalProject_A3"),
		Z_CompiledInDeferFile_FID_Users_rod_f_OneDrive_Documentos_VFS_Term04_UnrealC___UE_A3_FinalProject_A3_Source_FinalProject_A3_FinalProject_A3GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rod_f_OneDrive_Documentos_VFS_Term04_UnrealC___UE_A3_FinalProject_A3_Source_FinalProject_A3_FinalProject_A3GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
