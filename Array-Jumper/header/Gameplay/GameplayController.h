#pragma once
#include "../../header/Level/BlockType.h"

namespace Gameplay
{
	class GameplayController
	{
	private:

		bool isObstacle(Level::BlockType value);
		bool isEndBlock(Level::BlockType value);

		void processObstacle();
		void processEndBlock();

	public:
		void onPositionChanged(int position);
	};
}