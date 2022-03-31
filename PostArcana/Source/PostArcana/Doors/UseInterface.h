// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 30th 2022
			//Created the use interface to allow for multiple actions on the players interact function

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UseInterface.generated.h"

// This class is an interface class. It simply connects the Player to the actor it is interacting with
//This is the class that will be inherited to implement this interface.
UINTERFACE(MinimalAPI)
class UUseInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class POSTARCANA_API IUseInterface
{
	GENERATED_BODY()


public:
	//This function is the interface function for use. add an Use under score Execute to the Actor exectuing the function and a Use underscore Implementation for the actor implementing it
	//^^ using an actual underscore breaks the interface class
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Use();

};
