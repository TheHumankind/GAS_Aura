// Druid Copyright

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 *  Aura Gameplay Tags
 *
 *  Singleton containing native gameplay Tags
 *
 */
struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() {return GameplayTags;};
	static void InitializeNativeGameplayTags();
		
	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CriticalHitChance;
	FGameplayTag Attributes_Secondary_CriticalHitDamage;
	FGameplayTag Attributes_Secondary_CriticalHitResistance;
	FGameplayTag Attributes_Secondary_HealthRegeneration;
	FGameplayTag Attributes_Secondary_ManaRegeneration;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;
protected:

private:
	static FAuraGameplayTags GameplayTags;
};