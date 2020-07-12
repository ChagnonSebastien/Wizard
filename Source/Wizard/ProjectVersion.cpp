// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectVersion.h"

FString UProjectVersion::GetProjectVersion() {
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);
	return ProjectVersion;
}