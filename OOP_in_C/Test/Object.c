#include<malloc.h>
#include<stdio.h>
#include "Object.h"

int GetX method_define args()
{ 
	return this->x; 
}
int GetY method_define args()
{ 
	return this->y; 
}
void SetX method_define args(int x)
{ 
	this->x = x; 
}
void SetY method_define args(int y)
{ 
	this->y = y; 
}

BEGIN_CONTRUCTOR(obj) 
{
	method_construct(GetX);
	method_construct(GetY);
	method_construct(SetX);
	method_construct(SetY);
	this->x = 5;
	this->y = 10;
	this->symb = 'x';
	this->str = "World";
} END_CONTRUCTOR(obj)
