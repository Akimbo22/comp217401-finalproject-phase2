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
    // Sets default values for this actor's properties
    AVillageActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* Mesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPointLightComponent* Light;

    // Editable transform variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
    FVector ActorLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
    FRotator ActorRotation;

    // Getter / Setter
    UFUNCTION(BlueprintCallable)
    void SetActorLocationCustom(FVector NewLocation);

    UFUNCTION(BlueprintCallable)
    FVector GetActorLocationCustom() const;

    UFUNCTION(BlueprintCallable)
    void SetActorRotationCustom(FRotator NewRotation);

    UFUNCTION(BlueprintCallable)
    FRotator GetActorRotationCustom() const;

    // Polymorphic functions
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interact();
    virtual void Interact_Implementation();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAppearance();
    virtual void UpdateAppearance_Implementation();
};