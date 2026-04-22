#include "VillageActor.h"

AVillageActor::AVillageActor()
{
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(Root);

    Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
    Light->SetupAttachment(Root);
    Light->SetVisibility(false);

    ActorLocation = FVector::ZeroVector;
    ActorRotation = FRotator::ZeroRotator;
}

void AVillageActor::BeginPlay()
{
    Super::BeginPlay();

    SetActorLocation(ActorLocation);
    SetActorRotation(ActorRotation);
}

void AVillageActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AVillageActor::SetActorLocationCustom(FVector NewLocation)
{
    ActorLocation = NewLocation;
    SetActorLocation(NewLocation);
}

FVector AVillageActor::GetActorLocationCustom() const
{
    return ActorLocation;
}

void AVillageActor::SetActorRotationCustom(FRotator NewRotation)
{
    ActorRotation = NewRotation;
    SetActorRotation(NewRotation);
}

FRotator AVillageActor::GetActorRotationCustom() const
{
    return ActorRotation;
}

void AVillageActor::Interact_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("Base Interact called"));
}

void AVillageActor::UpdateAppearance_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("Base UpdateAppearance called"));
}