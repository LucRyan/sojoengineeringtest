#include "../headers/Game.h"
#include <stdio.h>

/** Public **/
void Game::Setup( SessionData* data )
{
	// @TODO: parse information from SessionData for initial game state
	printf( "Initializing game state" );
}

void Game::Execute()
{
	// Begin activity
	isActive = true;

	// Continuous loop until the simulation has been told to terminate
	while ( isActive )
	{
		HandleFrame();

		if ( actorCount <= 1 || actors == NULL )
		{
			EndGame();
		}
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

	printf( "Game has ended" );
}