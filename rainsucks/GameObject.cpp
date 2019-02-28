#include "GameObject.h"



GameObject::GameObject(string identifier, int x, int y)
{
	this->identifier = identifier;
	this->x = x;
	this->y = y;
}

GameObject::GameObject(string identifier) {
	GameObject(identifier, 0, 0);
}

void GameObject::Move(int x, int y) {
	this->x += x;
	this->y += y;
}

string GameObject::getIdentifier() {
	return this->identifier;
}

int GameObject::getX() {
	return this->x;
}

int GameObject::getY() {
	return this->y;
}