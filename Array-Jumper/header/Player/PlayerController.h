#pragma once

#include "MovementDirection.h"
#include "../Event/EventService.h"

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
		Event::EventService* event_service;

		void readInput();
		void move(MovementDirection direction);
		void jump(MovementDirection direction);
		Level::BlockType getCurrentBoxValue(int currentPosition);
		void destroy();
		bool isPositionInBound(int targetPosition);

	public:
		PlayerController();
		~PlayerController();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

		void initialize();
		void update();
		void render();

		int getCurrentPosition();
		
		void takeDamage();

	};
}