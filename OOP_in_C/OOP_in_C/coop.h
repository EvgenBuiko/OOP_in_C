#pragma once

#define class(ClassName) \
typedef struct class_##ClassName  ##ClassName; \
struct class_##ClassName \
{ \
	\
} \
struct class_##ClassName##_Public \
{ \
	\
} \
struct class_##ClassName##_Source \
{ \
}

#define BEGIN_CLASS_DECLARATION(ClassName)
#define END_CLASS_DECLARATION

#define BEGIN_CLASS_PUBLIC_SECTION
#define BEGIN_CLASS_PROTECTED_SECTION
#define BEGIN_CLASS_PRIVATE_SECTION
#define END_CLASS_SECTION

