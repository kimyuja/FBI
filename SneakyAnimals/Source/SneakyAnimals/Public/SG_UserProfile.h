// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DataStructure.h"
#include "SG_UserProfile.generated.h"

/**
 * 
 */
UCLASS()
class SNEAKYANIMALS_API USG_UserProfile : public USaveGame
{
	GENERATED_BODY()
public:
    USG_UserProfile();
    
    // ������ ������ ����, SaveGame������ * ������ ��� ����! (���� : ����ȭ�� �� �� �� �־.)
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MySettings")
    FStructure_UserProfile S_UserProfile;
	
};
