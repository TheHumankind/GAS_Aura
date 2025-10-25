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

public:
	virtual void HighlightActor() override;
	
	virtual void UnHighlightActor() override;


};
