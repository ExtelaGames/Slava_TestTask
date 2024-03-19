// Four Tale Test ,All Rights Reservered


#include "FTTGameModeBase.h"
#include "FTTCharacter.h"
#include "FTTMyPlayerController.h"

AFTTGameModeBase::AFTTGameModeBase()
{
	DefaultPawnClass = AFTTCharacter::StaticClass();
	PlayerControllerClass = AFTTMyPlayerController::StaticClass();
}

