#pragma once
#include "../../header/Level/BlockType.h"

namespace Gameplay
{
	class GameplayController
	{
	private:

		bool isObstacle(Level::BlockType value);

		void processObstacle();

	public:
		void onPositionChanged(int position);
	};
}