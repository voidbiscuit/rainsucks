#pragma once
class Map
{
public:
	Map(int x, int y);
	Map();
private:
	int x, y;
	char** map;
};

