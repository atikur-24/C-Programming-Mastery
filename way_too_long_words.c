#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    char S[101];

    for (int i = 0; i < T; i++)
    {
        scanf("%s", S);
        int length = strlen(S);

        if (length > 10)
        {
            char first_char = S[0];
            char last_char = S[length - 1];
            int reset_char_len = length - 2;

            printf("%c%d%c\n", first_char, reset_char_len, last_char);
        }
        else
        {
            printf("%s\n", S);
        }
    }

    return 0;
}


/*
Input: 
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
*/

/*
Output:
word
l10n
i18n
p43s
*/