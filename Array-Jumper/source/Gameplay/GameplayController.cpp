#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Level/LevelData.h"
#include "../../header/Sound/SoundService.h"
#include "../../header/Main/GameService.h"

namespace Gameplay
{
	using namespace Global;
	using namespace Level;
	using namespace Sound;
	using namespace Main;

	bool GameplayController::isObstacle(Level::BlockType value)
	{
		if (value == BlockType::OBSTACLE_ONE || value == BlockType::OBSTACLE_TWO)
			return true;
		return false;
	}
	void GameplayController::onPositionChanged(int position)
	{
		BlockType value = ServiceLocator::getInstance()->getLevelService()->getCurrentBoxValue(position);

		if (isObstacle(value))
			processObstacle();
	}
	void GameplayController::processObstacle()
	{
		ServiceLocator::getInstance()->getPlayerService()->takeDamage();
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::DEATH);
	}
}