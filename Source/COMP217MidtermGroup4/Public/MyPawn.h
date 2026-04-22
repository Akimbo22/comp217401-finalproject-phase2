#pragma once

#include "CoreMinimal.h"            // Core Unreal includes
#include "GameFramework/Actor.h"    // Parent class include
#include "MyVillageActor.generated.h"  // MUST be last include before UCLASS

UCLASS()
class COMP217MIDTERMGROUP4_API AMyVillageActor : public AActor
{
    GENERATED_BODY()

public:
    AMyVillageActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;
};