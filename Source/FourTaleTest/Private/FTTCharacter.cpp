// Four Tale Test ,All Rights Reservered


#include "FTTCharacter.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AFTTCharacter::AFTTCharacter()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);
}


void AFTTCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void AFTTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AFTTCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFTTCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFTTCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LoockUp", this, &AFTTCharacter::LoockUp);
	PlayerInputComponent->BindAxis("TurnAround", this, &AFTTCharacter::TurnAround);
}

void AFTTCharacter::MoveForward(float Amount)
{
	AddMovementInput(GetActorForwardVector(), Amount);
}

void AFTTCharacter::MoveRight(float Amount)
{
	AddMovementInput(GetActorRightVector(), Amount);
}

void AFTTCharacter::LoockUp(float Amount)
{
	AddControllerPitchInput(Amount);
}

void AFTTCharacter::TurnAround(float Amount)
{
	AddControllerYawInput(Amount);
}

