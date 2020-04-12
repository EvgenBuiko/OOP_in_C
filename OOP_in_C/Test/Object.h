#pragma once
#include "..\OOP_in_C\coop.h"

DECLARE_CLASS_NAME(obj)

class_begin(obj)
public(obj)
	char* str;
	int method_declare GetX decl_args();
	int method_declare GetY decl_args();
	void method_declare SetX decl_args(int);
	void method_declare SetY decl_args(int);
end_data
protected(obj)
	char symb;
end_data
private(obj)
	int x;
	int y;
end_data
class_end(obj)