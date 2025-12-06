// Druid Copyright


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Intelligence"), FString("Increase magical damage and mana"));
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Strength"), FString("Increase physical damage"));
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Vigor"), FString("Increase Health and Armor"));
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Resilience"), FString("Increase Crit Chance, Crit Damage and Crit Resistance"));

	/* Secondary Attributes */
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"), FString("Reduce damage taken, improves Block Chance"));
	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ArmorPenetration"), FString("Increase incoming damage by reducing target Armor"));
	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.BlockChance"), FString("Allow to completely block half of damage"));
	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitChance"), FString("Increase incoming damage by increasing actor damage"));
	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitDamage"), FString("Critical hit damage multiplier"));
	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitResistance"), FString("Critical hit damage reduction"));
	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.HealthRegeneration"), FString("Health recovery speed"));
	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ManaRegeneration"), FString("Mana recovery speed"));
	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxHealth"), FString("Maximum amount of health"));
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxMana"), FString("Maximum amount of mana"));


	/* Input Actions */
	GameplayTags.InputAction_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputAction.LMB"), FString("Input tag for left mouse button"));
	GameplayTags.InputAction_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputAction.RMB"), FString("Input tag for right mouse button"));
	GameplayTags.InputAction_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputAction.1"), FString("Input tag for 1 key"));
	GameplayTags.InputAction_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputAction.2"), FString("Input tag for 2 key"));
	GameplayTags.InputAction_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputAction.3"), FString("Input tag for 3 key"));
	GameplayTags.InputAction_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputAction.4"), FString("Input tag for 4 key"));
	GameplayTags.InputAction_5 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputAction.5"), FString("Input tag for 5 key"));	
}
