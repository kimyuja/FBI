// Fill out your copyright notice in the Description page of Project Settings.


#include "W_DraggedItem.h"

void UW_DraggedItem::NativeConstruct()
{
	Super::NativeConstruct();
}

bool UW_DraggedItem::Initialize()
{
	bool Success = Super::Initialize();
	if(!Success) return false;

	// TODO: setup

	// itemImg�� �������͸� �ʱ�ȭ ���� false return
	//if(!ensure(itemImg != nullptr)) return false;
	// ��� �̰͵� ���ص� �� �� ����
	// ���� ��ü�� �Ⱥҷ����� ��츦 �����ؾ� �� ��

	return true;
}