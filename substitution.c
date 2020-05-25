#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[1])
{
    if (argc == 2 && strlen(argv[1]) == 26)
    {
        int n = strlen(argv[1]);
        int num_of_alpha = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (isalpha(argv[1][i]))
            {
                ++num_of_alpha;
            }
        }
        
        if (num_of_alpha == n)
        {
            string text = get_string("Plaintext: ");
            
            for (int j = 0, k = strlen(text); j < k; j++)
            {
                if (isupper(text[j]))
                {
                    text[j] = text[j] - 65;
                    
                    //need to cast text[j] as integer for array argv to accept it
                    text[j] = argv[1][(int)text[j]];
                    
                    text[j] = toupper(text[j]);
                }
                
                else if (islower(text[j]))
                {
                    text[j] = text[j] - 97;
                    
                    //need to cast text[j] as integer for array argv to accept it
                    text[j] = argv[1][(int)text[j]];
                    
                    text[j] = tolower(text[j]);
                }
            }
            
            printf("Ciphertext: %s\n", text);
        }
        
        else
        {
            printf("Key must contain 26 alphabetical characters\n");
        }
    }
    
    else if (argc == 2 && strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters\n");
    }
    
    else
    {
        printf("%s key\n", argv[0]); 
    }
}
