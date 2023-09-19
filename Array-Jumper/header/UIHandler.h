#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics.hpp>

class GameService;
class SplashScreenUIController;
class MainMenuUIController;

class UIHandler
{
private:
	GameService* game_service;
	SplashScreenUIController* splash_screen_controller;
	MainMenuUIController* main_menu_controller;

	sf::RenderWindow* game_window;

	void instantiateControllers();
	void initializeControllers();

public:
	UIHandler();
	~UIHandler();

	void initialize(GameService* game_service_instance, sf::RenderWindow* window_to_set);
	void updateUI();
	void render();
};