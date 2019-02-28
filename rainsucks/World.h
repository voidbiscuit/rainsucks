#include "Map.h"
#include "GameObject.h"
#include <vector>
#pragma once
class World
{
public:
	// Constructor
	World();

	// Map Handling
	void setMap(Map map);
	
	// Game Object Handling
	void addObject(GameObject gameObject);
	void removeObject(string identifier);
	GameObject getObject(string identifier);

private:
	Map map;
	vector<GameObject> gameObjects;
};

