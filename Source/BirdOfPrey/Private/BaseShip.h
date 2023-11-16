// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()

	 
		

public:
	
	virtual void ApplyAgentInfo_Implementation(const FSAgentInfo& NewAgentInfo) override;
	
	
protected:

	
	
};
