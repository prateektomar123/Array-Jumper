#include "../../header/Gameplay/GameplayService.h"


namespace Gameplay 
{
	GameplayService::GameplayService() { gameplay_controller = new GameplayController(); }
	GameplayService::~GameplayService() { destroy(); }

	void GameplayService::onDeath() { gameplay_controller->onDeath(); }

	void GameplayService::destroy() { delete(gameplay_controller); }
}