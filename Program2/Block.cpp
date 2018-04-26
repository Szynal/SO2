// A class representing a "Tetris" block
 #include "Brick.h"

// Class Constructor (x,y -> block's coordination)
Block::Block(const int x, const int y)
{
	this->x = x;
	this->y = y;

	this->width = WIDTH;
	this->height = HEIGHT;
}


