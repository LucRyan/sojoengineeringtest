#ifndef __GAME_H_
#define __GAME_H_

#include "SessionData.h"

/*
	Game
	======================
	Basic logic handler for setting up state and maintaining game session.
*/
class Game
{
public:
	Game() : isActive(false) { }
	void Setup( SessionData* data );	// Initializes game state
	void Execute();						// Begins game loop execution

private:
	/* Data */
	bool isActive;						// Flag indicating whether the game will continue or not

	/* Functions */
	void HandleFrame();					// Runs logic needed per-frame
	void EndGame();						// Stops 
};

#endif