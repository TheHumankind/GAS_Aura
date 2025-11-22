// Druid Copyright


#include "AbilitySystem/ModMagCalc/MMC_MaxMana.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Iteraction/CombatInterface.h"

UMMC_MaxMana::UMMC_MaxMana()
{
	IntelligenceDefinition.AttributeToCapture = UAuraAttributeSet::GetIntelligenceAttribute();
	IntelligenceDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
}

float UMMC_MaxMana::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Intelligence = 0.f;
	GetCapturedAttributeMagnitude(IntelligenceDefinition, Spec, EvaluationParameters, Intelligence);
	Intelligence =  FMath::Max<float>(Intelligence, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetEffectCauser());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();

	return 25.f + 3 * Intelligence + 5.f * PlayerLevel;
}
