#pragma once

char* cur_class_name;
#define DECLARE_CLASS(ClassName) typedef struct ClassName##* ClassName;
#define DECLARE_SELF(ClassName) typedef struct ClassName##_this* self;
#define DECLARE_CLASS_NAME(ClassName) typedef  struct ClassName##_pub pub; 

/*	---	Contructor	---	*/
#define BEGIN_CONTRUCTOR(ClassName) \
ClassName Construct() \
{ \
	self this = (self)malloc(sizeof(struct ClassName##_this));
#define END_CONTRUCTOR(ClassName) \
	return (##ClassName##)this; \
}
/*	---	Contructor	---	*/


/*	---	Class	---	*/
#define class_begin(ClassName) \
DECLARE_CLASS(ClassName) \
DECLARE_SELF(ClassName) 
#define class_end(ClassName) \
struct ClassName##_this \
{ \
	struct ClassName##_pub; \
	struct ClassName##_pro; \
	struct ClassName##_pri; \
}; \
struct ClassName { struct ClassName##_pub; }; \
ClassName Construct();
#define public(ClassName) struct ClassName##_pub \
{ 
#define protected(ClassName) struct ClassName##_pro \
{
#define private(ClassName) struct ClassName##_pri \
{ 
#define end_data };
#define ppublic public(pub)
/*	---	Class	---	*/


/*	---	Class methods	---	*/
#define method_declare (*
#define method_call(object, method) object##->##method##((self)##object
#define decl_args(...) )(self, __VA_ARGS__)
#define args(...) , __VA_ARGS__)
#define method_define (self this
#define method_construct(MethodName) this->##MethodName = MethodName
/*	---	Class methods	---	*/



/*#define GETTHIS __asm { mov this_obj, ecx }
#define PUTTHIS __asm { mov ecx, this_obj }*/
