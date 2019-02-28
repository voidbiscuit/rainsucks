#include "Map.h"

#include <vector>

using namespace std;

Map::Map() {
	Map(1, 1);
}


Map::Map(int x, int y)
{
	this->x = x < 1 ? 1 : x;
	this->y = y < 1 ? 1 : y;
	this->map = (char**)calloc(this->x*this->y, sizeof(char));
}