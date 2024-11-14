#pragma once
#include "MovementDirection.h"

namespace Player
{
	class PlayerView;
	class PlayerModel;
	enum class PlayerState;
	class PlayerController
	{
	private:
		PlayerModel* player_model;
		PlayerView* player_view;
		EventService* event_service;

		void readInput();
		void move(MovementDirection direction);

		void destroy();
		bool isPositionInBound(int targetPosition);

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		int getCurrentPosition();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
	};
}