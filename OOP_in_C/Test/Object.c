#include "Object.h"

struct obj_this this_obj;

int GetX() { return this_obj.x; }
int GetY() { return this_obj.y; }

obj Public_Constructor()
{
	this_obj.x = 5;
	this_obj.y = 10;
	this_obj.symb = 'x';
	this_obj.str = "World";
	obj* ret = (obj*)&this_obj;
	return *ret;
}

obj Constructor()
{
	this_obj.GetX = GetX;
	this_obj.GetY = GetY;
	return Public_Constructor();
}

