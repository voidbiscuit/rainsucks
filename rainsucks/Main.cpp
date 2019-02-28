#include <stdio.h>
#include <string>
#include "Game.h"

using namespace std;


void main()
{
	Game game = Game();
	game.addWorld(World("World 1"));
	game.getWorld("World 1").addObject(GameObject("Key", 10, 10));
	printf("%d",game.getWorld("World").getObject("Key").getX());
}

