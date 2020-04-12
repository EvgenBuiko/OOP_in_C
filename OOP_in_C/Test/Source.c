#include <stdio.h>
#include "Object.h"

int main()
{
	obj a = Construct();
	method_call(a, SetX) args(0);
	method_call(a, SetY) args(0);
	obj b = Construct();
	printf("Hello %s \n", b->str);
	printf("Get X coord of a %d \n", method_call(a, GetX) args());
	printf("Get Y coord of a %d \n", method_call(a, GetY) args());
	printf("Get X coord of b %d \n", method_call(b, GetX) args());
	printf("Get Y coord of b %d \n", method_call(b, GetY) args());
	b->str = "it\'s work";
	printf("Oyee %s \n", b->str);
	return 0;
}

