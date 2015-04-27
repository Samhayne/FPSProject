// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

private:
	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;

	AFPSHUD(const FObjectInitializer& ObjectInitializer);
	
	/** Primary draw call for the HUD */
	virtual void DrawHUD() OVERRIDE;
};
