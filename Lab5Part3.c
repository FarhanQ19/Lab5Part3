#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        for (int i = 0; input[i] != '\0'; i++)
        {
            char c = input[i];
            
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            {
                c = (c >= 'a' && c <= 'z') ? c - 32 : c;
                int index = c - 'A';
                letterCount[index]++;
            }
        }
    }

    printf("Distribution of letters in the input:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d ", 'A' + i, letterCount[i]);
    }
    printf("\n");

    return 0;
}
