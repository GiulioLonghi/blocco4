#include "voidFunctions.hpp"

// funzione 1
void string_lenght (char str [], int & dim )
{
    int i = 0;
    
    while (str[i] != '\0'){
        i++;
        dim++;
    }
}

// funzione 2
void padStr(char str[], char padder, char out[])
{
    int len;
    string_lenght(str, len);

    for (int i = 0; i < len; i++) {
        out[i * 2] = str[i];
    }

    for (int i = 0; i < len - 1; i++) {
        out[i * 2 + 1] = padder;
    }

    out[len * 2 - 1] = '\0';
}