#include "Map.h"
#include "GameObject.h"
#include <vector>
#pragma once
class World
{
public:
	// Constructor
	World(string identifier);

	// ID
	string getIdentifier();

	// Map Handling
	void setMap(Map map);

	// Game Object Handling
	void addObject(GameObject gameObject);
	void removeObject(string identifier);
	GameObject getObject(string identifier);

private:
	string identifier;
	Map map;
	vector<GameObject> gameObjects;
};

