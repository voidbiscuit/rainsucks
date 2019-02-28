#include "World.h"


World::World(string identifier)
{
	this->identifier = identifier;
}

string World::getIdentifier() {
	return this->identifier;
}

// Map Handling
void World::setMap(Map map) {
	this->map = map;
}


// Game Object Handling
void World::addObject(GameObject gameObject) {
	for (int game_object_id = 0; game_object_id < gameObjects.size(); game_object_id++)
		if (gameObject.getIdentifier() == gameObjects[game_object_id].getIdentifier())
			return;
	gameObjects.push_back(gameObject);
}
void World::removeObject(string identifier) {
	for (int game_object_id = 0; game_object_id < gameObjects.size(); game_object_id++)
		if (identifier == gameObjects[game_object_id].getIdentifier())
			gameObjects.erase(gameObjects.begin() + game_object_id--);
}
GameObject World::getObject(string identifier) {
	for (int game_object_id = 0; game_object_id < gameObjects.size(); game_object_id++)
		if (identifier == gameObjects[game_object_id].getIdentifier())
			return gameObjects[game_object_id];
	return NULL;
}