#include <stdio.h>
#include "Object.h"

int main()
{
	obj a = Constructor();
	printf("Hello %s \n", a.str);
	a.str = "it\'s work";
	printf("Hello %s \n", a.str);
	printf("Get X coord %d \n", a.GetX());
	printf("Get Y coord %d \n", a.GetY());
	return 0;
}

