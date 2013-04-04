#include "../headers/Actor.h"

const bool Actor::DoesCollide( const Actor* actor )
{
	// We assume actors are 1 world unit in width and height
	return actor->x == x && actor->y == y;
}