#include "MyPawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMyPawn::AMyPawn()
{
    // Enable Tick
    PrimaryActorTick.bCanEverTick = true;

    // Create Mesh
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = MeshComponent;

    // Create Movement Component
    MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));

    // Create Spring Arm
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(RootComponent);
    SpringArm->TargetArmLength = 300.f; // Distance from pawn
    SpringArm->bEnableCameraLag = true;
    SpringArm->CameraLagSpeed = 3.f;

    // Create Camera
    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind axis
    PlayerInputComponent->BindAxis("MoveForward", this, &AMyPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AMyPawn::MoveRight);
}

// Movement functions
void AMyPawn::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        AddMovementInput(GetActorForwardVector(), Value);
    }
}

void AMyPawn::MoveRight(float Value)
{
    if (Value != 0.0f)
    {
        AddMovementInput(GetActorRightVector(), Value);
    }
}
