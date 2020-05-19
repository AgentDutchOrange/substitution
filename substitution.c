#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[1])
{
    if (argc != 2)
    {
        printf("%s key\n", argv[0]);
    }
    
    else if (argc == 2 && strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters\n");
    }
}
