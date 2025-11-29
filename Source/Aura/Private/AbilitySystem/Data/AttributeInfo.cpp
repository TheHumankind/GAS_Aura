// Druid Copyright


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& GameplayTag, bool bLogNotFound)
{
	for (const FAuraAttributeInfo& AuraAttributeInfo : AuraAttributeInformation)
	{
		if (AuraAttributeInfo.AttributeTag.MatchesTagExact(GameplayTag))
		{
			return AuraAttributeInfo;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find Info for AttributeTag [%s] on AttributeInfo [%s]"), *GameplayTag.ToString(), *GetNameSafe(this));
	}

	return FAuraAttributeInfo();
}
