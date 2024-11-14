#pragma once

namespace Player
{
	enum class PlayerState
	{
		ALIVE,
		DEAD
	};

	class PlayerModel
	{
	private:
		const int max_lives = 3;

		int current_lives;

		PlayerState player_state;
		int current_position;

	public:
		void initialize();
		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

		int getCurrentPosition();
		void setCurrentPosition(int new_position);
		void decreamentLife();
		void resetPlayer();
		void resetPosition();
		int getCurrentLives();
	};
}