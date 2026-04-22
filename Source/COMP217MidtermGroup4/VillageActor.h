#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "VillageActor.generated.h"

UCLASS()
class COMP217MIDTERMGROUP4_API AVillageActor : public AActor
{
    GENERATED_BODY()

public:
    AVillageActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;

    UPROPERTY(VisibleAnywhere)
    UPointLightComponent* Light;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
    FVector ActorLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
    FRotator ActorRotation;

    UFUNCTION(BlueprintCallable)
    void SetActorLocationCustom(FVector NewLocation);

    UFUNCTION(BlueprintCallable)
    FVector GetActorLocationCustom() const;

    UFUNCTION(BlueprintCallable)
    void SetActorRotationCustom(FRotator NewRotation);

    UFUNCTION(BlueprintCallable)
    FRotator GetActorRotationCustom() const;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interact();
    virtual void Interact_Implementation();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAppearance();
    virtual void UpdateAppearance_Implementation();
};
