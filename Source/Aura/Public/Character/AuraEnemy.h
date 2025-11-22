// Druid Copyright

#pragma once

#include "CoreMinimal.h"

#include "Character/AuraCharacterBase.h"
#include "Iteraction/EnemyInterface.h"

#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

protected:
	AAuraEnemy();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;

public:
	/* Enemy Interface */
	
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	/* end Enemy Interface */

	/* Combat Interface */

	virtual int32 GetPlayerLevel() override;
	
	/* end Combat Interface */

	virtual void InitAbilityActorInfo() override;
};
