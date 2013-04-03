#include "../headers/Game.h"

/** Public **/
void Game::Setup( SessionData* data )
{

}

void Game::Execute()
{
	while ( isActive )
	{
		HandleFrame();
	}
}

/** Private **/
void Game::HandleFrame()
{

}

void Game::EndGame()
{
	isActive = false;
}