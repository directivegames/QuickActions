﻿// Copyright Out-of-the-Box Plugins 2018-2023. All Rights Reserved.

#pragma once

#include <Engine/DeveloperSettings.h>

#include "QuickMenuSettings.generated.h"

/**
 *
 */
UCLASS(config = Editor, defaultconfig)
class SPOTLIGHTSEARCH_API UQuickMenuSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/**
	 * @brief Maximum number of entries we will display under the search bar
	 */
	UPROPERTY(EditAnywhere, Category = Customization, config)
	int32 MaxEntriesToShow = 10;

	UPROPERTY(EditAnywhere, Category = Customization, config)
	bool bIncludeTutorials = true;

	UPROPERTY(EditAnywhere, Category = Customization, config)
	bool bIncludeSettingSections = true;

private:
	// Begin UDeveloperSettings interface
	virtual FName GetContainerName() const override;
	virtual FName GetCategoryName() const override;
	virtual FName GetSectionName() const override;
#if WITH_EDITOR
	virtual FText GetSectionText() const override;
#endif
	// End UDeveloperSettings interface
};