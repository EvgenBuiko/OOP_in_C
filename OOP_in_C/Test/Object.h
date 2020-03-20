#pragma once

typedef struct obj obj;

struct obj_pri
{
	int x;
	int y;
};
struct obj_pro
{
	char symb;
};
struct obj_pub
{
	char* str;
	int (*GetX)();
	int (*GetY)();
	obj (*obj)();
};
struct obj_this
{
	struct obj_pub;
	struct obj_pro;
	struct obj_pri;
};
struct obj
{
	struct obj_pub;
};

int GetX();
int GetY();
obj Constructor();