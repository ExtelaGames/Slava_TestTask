// Four Tale Test ,All Rights Reservered

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FTTCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class FOURTALETEST_API AFTTCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	AFTTCharacter();

protected:

	UPROPERTY(VisibleAnyWhere, BluePrintReadWrite, Category = "Components")
		USpringArmComponent* SpringArmComponent;


	UPROPERTY(VisibleAnyWhere, BluePrintReadWrite, Category = "Components")
		UCameraComponent * CameraComponent;
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float Amount);
	void MoveRight(float Amount);

	void LoockUp(float Amount);
	void TurnAround(float Amount);
		
};
