#include "VillageActor.h"

// Sets default values
AVillageActor::AVillageActor()
{
    // Enable ticking every frame
    PrimaryActorTick.bCanEverTick = true;

    // Create root component
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    // Create mesh component
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(Root);

    // Create light component
    Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
    Light->SetupAttachment(Root);
    Light->SetVisibility(false);

    // Initialize transform
    ActorLocation = FVector::ZeroVector;
    ActorRotation = FRotator::ZeroRotator;
}

// Called when the game starts or when spawned
void AVillageActor::BeginPlay()
{
    Super::BeginPlay();

    // Apply initial transform
    SetActorLocation(ActorLocation);
    SetActorRotation(ActorRotation);
}

// Called every frame
void AVillageActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Custom setters/getters
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

// Polymorphic functions
void AVillageActor::Interact_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("Base Interact called"));
}

void AVillageActor::UpdateAppearance_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("Base UpdateAppearance called"));
}

