// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectVersion.generated.h"

/**
 * 
 */ 
UCLASS()
class WIZARD_API UProjectVersion : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Project Version", CompactNodeTitle = "Version"), Category = "System Information")
	static FString GetProjectVersion();
	
};
