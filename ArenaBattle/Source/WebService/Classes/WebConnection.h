// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/NoExportTypes.h"
#include "WebConnection.generated.h"

/**
 * 
 */
UCLASS()
class WEBSERVICE_API UWebConnection : public UObject
{
	GENERATED_BODY()
	
public:
	UWebConnection();

	UPROPERTY()
	FString		m_fstrHost;
	UPROPERTY()
	FString		m_fstrUrl;

	UFUNCTION()
	void RequestToken();
};

DECLARE_LOG_CATEGORY_EXTERN(WebConnection, Log, All);