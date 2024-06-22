// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class SNEAKYANIMALS_API APC_MainMenu : public APlayerController
{
	GENERATED_BODY()
	

public:
	APC_MainMenu();

	UPROPERTY(EditAnywhere, Category="MySettings")
	TSubclassOf<class UW_MainMenu> MainMenu_bp;

	UPROPERTY()
	class UW_MainMenu* MainMenu_inst;

protected:
	virtual void BeginPlay() override;


};
