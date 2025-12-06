// Druid Copyright


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::GetAuraInputActionForTag(const FGameplayTag& GameplayTag,
	bool bLogNotFound) const
{
	for (const FAuraInputAction& Action : AuraInputs)
	{
		if (Action.InputAction && Action.GameplayTag == GameplayTag  )
			return Action.InputAction;
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Input action related to tag has not found!!!"));
	}

	return nullptr;
}
