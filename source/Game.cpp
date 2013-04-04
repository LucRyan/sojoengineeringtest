#include "../headers/Game.h"

/** Public **/
void Game::Setup( SessionData* data )
{
	// @TODO: parse information from SessionData for initial game state
}

void Game::Execute()
{
	// Begin activity
	isActive = true;

	// Continuous loop until the simulation has been told to terminate
	while ( isActive )
	{
		HandleFrame();
	}
}

/** Private **/
void Game::HandleFrame()
{
	// @TODO: implement your game logic here
}

void Game::EndGame()
{
	isActive = false;
}