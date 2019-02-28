#include <string>

#pragma once

using namespace std;
class GameObject
{
public:
	// Constructor
	GameObject(string identifier, int x, int y);
	GameObject(string identifier);
	// Get Vals
	string getIdentifier();
	int getX();
	int getY();
	// Move
	void Move(int x, int y);
private:
	string identifier;
	int x, y;

};

