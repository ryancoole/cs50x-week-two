#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid_key(string key);

int main(int argc, string argv[])
{
    // Check for exactly one argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    // Validate the key
    if (!valid_key(key))
    {
        printf("Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }

    // Get plaintext from user
    string plaintext = get_string("plaintext: ");

    // Encrypt
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            int index = c - 'A';
            printf("%c", toupper(key[index]));
        }
        else if (islower(c))
        {
            int index = c - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            // Non-letters unchanged
            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}

bool valid_key(string key)
{
    // Must be 26 characters
    if (strlen(key) != 26)
    {
        return false;
    }

    // Track letters seen
    bool seen[26] = {false};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }

        int index = toupper(key[i]) - 'A';
        if (seen[index])
        {
            return false; // duplicate
        }
        seen[index] = true;
    }

    return true;
}
