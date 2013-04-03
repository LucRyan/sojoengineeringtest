#ifndef __ACTOR_H_
#define __ACTOR_H_

/*
	Actor
	======================
	Main in-world representation of a physical object
*/
class Actor
{
public:
	/* Data */
	int x;
	int y;

	/* Functions */
	Actor() : x(0), y(0) { }
	const bool DoesCollide( const Actor* actor );
};

#endif