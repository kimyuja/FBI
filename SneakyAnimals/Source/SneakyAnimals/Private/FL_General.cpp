// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_General.h"
#include "SG_UserProfile.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h>

bool UFL_General::Save_UserProfile(const FStructure_UserProfile& S_UserData)
{
	// Save Game ����
	USG_UserProfile* SG_UserProfile_inst = Cast<USG_UserProfile>(UGameplayStatics::CreateSaveGameObject(USG_UserProfile::StaticClass()));

	// User Data ����
	SG_UserProfile_inst->S_UserProfile = S_UserData;

	// ���� ���Կ� �����͸� ����
	return UGameplayStatics::SaveGameToSlot(SG_UserProfile_inst, TEXT("UserProfile_Slot"), 0);

}
