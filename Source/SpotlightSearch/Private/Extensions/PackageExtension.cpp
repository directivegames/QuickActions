﻿// Copyright Out-of-the-Box Plugins 2018-2023. All Rights Reserved.

#include "PackageExtension.h"

FQuickPackageCommandEntry::FQuickPackageCommandEntry() : FQuickCommandEntry()
{
	Title = INVTEXT("Package");

	SplitViewWidget = SNew(SPackageSelector);
}
TSharedPtr<SWidget> FQuickPackageCommandEntry::GetSplitViewWidget()
{
	return SplitViewWidget;
}

TArray<TSharedPtr<FQuickCommandEntry>> UPackageExtension::GetCommands(const FToolMenuContext& Context)
{
	TArray<TSharedPtr<FQuickCommandEntry>> OutCommands;

	OutCommands.Emplace(MakeShared<FQuickPackageCommandEntry>());

	return OutCommands;
}