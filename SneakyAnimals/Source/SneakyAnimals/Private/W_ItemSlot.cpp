// Fill out your copyright notice in the Description page of Project Settings.


#include "W_ItemSlot.h"
#include <../../../../../../../Source/Runtime/UMG/Public/Components/Image.h>
#include <../../../../../../../Source/Runtime/UMG/Public/Components/Button.h>
#include "Slate/SlateBrushAsset.h"

void UW_ItemSlot::NativeConstruct()
{
	if (itemImg) 
	{
		FSlateBrush brush;
		brush.SetResourceObject(itemImg);
		
		if (img)
		{
			img->SetBrush(brush);
		}
	}


}

bool UW_ItemSlot::Initialize()
{

	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!btn) return false;

	// ���콺�� Ŭ���� ��Ȯ�� ��ġ�� �޾ƿ���
	btn->SetClickMethod(EButtonClickMethod::PreciseClick);
	btn->SetTouchMethod(EButtonTouchMethod::PreciseTap);
	btn->IsFocusable = false;


	return true;
}
