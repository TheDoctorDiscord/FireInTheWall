// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "XistedInputModeStatics.generated.h"

/**
 * 
 */
UCLASS()
class FIREINTHEWALL_API UXistedInputModeStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
/**
 * Set a new Input Mode for this player
 * @param PlayerController Player Controller whose input mode to set
 * @param bMouseVisible Whether the mouse should be visible (true) or invisible (false)
 * @param bIgnoreLookInput Whether look input should now be ignored
 * @param bIgnoreMoveInput Whether move input should now be ignored
 */
UFUNCTION(BlueprintCallable)
static void XistedSetInputMode(APlayerController* PlayerController, bool bMouseVisible, bool bIgnoreLookInput, bool bIgnoreMoveInput);
};