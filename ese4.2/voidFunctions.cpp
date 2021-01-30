#include "voidFunctions.hpp"

void string_lenght (char str [], int & dim )
{
    int i = 0;
    
    while (str[i] != '\0'){
        i++;
        dim++;
    }
}