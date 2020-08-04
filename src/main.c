#include <stdio.h>
#include <jstring.h>

int main()
{
    jstring *jack = NEW_JSTRING("Jack Whelan");
    printf("The jstring \'jack\', stores the string: %s\nlength: %ld\nsize: %ld", jack->value, jack->length, jack->size);
}