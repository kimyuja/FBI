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

FUserProfileResult UFL_General::Get_UserProfile()
{
    FUserProfileResult result;

    if (UGameplayStatics::DoesSaveGameExist(TEXT("UserProfile_Slot"), 0))
    {
        // UserProfile_Slot �� ������ S_UserProfile�� bool success = true �����ϱ�
        USG_UserProfile* sg = Cast<USG_UserProfile>(UGameplayStatics::LoadGameFromSlot(TEXT("UserProfile_Slot"), 0));
        if (sg)
        {
            result.S_UserProfile = sg->S_UserProfile;
            result.success = true;
            return result;
        }
    }

    // UserProfile_Slot �� ������ ����ִ� S_UserProfile�� bool success = false �����ϱ�
    result.S_UserProfile = FStructure_UserProfile();
    result.success = false;
    return result;
}