// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "WidgetDrag.generated.h"

/**
 * 
 */
UCLASS()
class SNEAKYANIMALS_API UWidgetDrag : public UDragDropOperation
{
	GENERATED_BODY()

public:
	// ���� �巡�� �ϴ� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UUserWidget* WidgetToDrag;
	// Editable -> true
	// Expose on Spawn -> true 
	
	// ���콺 Ŭ���� ������ �巡���ϴ� ��ġ �������ϰ� ���ϴ� ���� �巡��
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DropWindowOffset;



};
