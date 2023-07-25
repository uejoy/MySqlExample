// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MySqlExampleGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYSQLEXAMPLE_API AMySqlExampleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	UFUNCTION(Exec)
	void TestMySql();
	UFUNCTION(Exec)
	void OperationMySql();


	
	
};
