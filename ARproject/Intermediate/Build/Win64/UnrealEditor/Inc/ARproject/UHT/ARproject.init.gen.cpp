// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARproject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ARproject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ARproject()
	{
		if (!Z_Registration_Info_UPackage__Script_ARproject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ARproject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x36FB000B,
				0x0F3B403B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ARproject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ARproject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ARproject(Z_Construct_UPackage__Script_ARproject, TEXT("/Script/ARproject"), Z_Registration_Info_UPackage__Script_ARproject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x36FB000B, 0x0F3B403B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
