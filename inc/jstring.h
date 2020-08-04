#ifndef _jstring_h_
#define _jstring_h_ 1

#include <stdlib.h>
#include <string.h>

typedef struct jstring
{
    size_t size;
    size_t length;
    char* value;
} jstring;

jstring* NEW_JSTRING(const char* string)
{
    jstring* jstr = (jstring*)malloc(sizeof(jstring));

    if(string != NULL)
    {
        size_t stringLength = strlen(string);
        jstr->size = stringLength + 1;
        jstr->value = (char*)malloc(jstr->size);
        memcpy(jstr->value, string, stringLength);
        jstr->value[stringLength] = '\0';
        jstr->length = stringLength;
    }
    else
    {
        jstr->size = 1;
        jstr->value = (char*)malloc(jstr->size);
        jstr->value[0] = '\0';
        jstr->length = 0;
    }
    
    return jstr;
}


#endif