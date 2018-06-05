// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TIMEYWIMEY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UInventoryComponent();

	bool HasItem(FName ItemName) const;
	void AddItem(FName ItemName);
	void RemoveItem(FName ItemName);

protected:
	
	virtual void BeginPlay() override;

private:

	TArray<FName> Inventory;
	
};