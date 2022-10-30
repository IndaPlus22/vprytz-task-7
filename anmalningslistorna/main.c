/***
 * Based on: Template to a Kattis solution. by Viola Söderlund <violaso@kth.se>
 * Author: Vilhelm Prytz <vilhelm@prytznet.se> / <vprytz@kth.se>
 */

#include <stdio.h> // standard input/output library
#include <string.h>

/// Kattis calls main function to run your solution
int main()
{
    int n;
    char text[15];

    /**
     * Assuming a numeric or character format type:
     *
     * Reads data from standard input until hitting a whitespace character
     * (whitespace, tab, line break, page break, etc), and then tries to
     * convert it to the specified type.
     *
     * Parsing error will produce a garbage result. Welcome to C.
     *
     * see: https://www.dummies.com/programming/c/basics-of-the-scanf-function-in-c-programming/
     */
    scanf("%d", &n); // parse input as integer

    char firstnames[n][20];
    char lastnames[n][20];

    // read n*2 lines of input, first n firstnames then n lastnames
    for (int i = 0; i < n; i++)
    {
        scanf("%s", firstnames[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", lastnames[i]);
    }

    // create a list of full names
    char fullnames[n][41];
    for (int i = 0; i < n; i++)
    {
        sprintf(fullnames[i], "%s %s", firstnames[i], lastnames[i]);
    }

    // remove all duplicate elements in array fullnames (chars)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(fullnames[i], fullnames[j]) == 0)
            {
                strcpy(fullnames[j], "");
            }
        }
    }

    int unique = 0;

    // increase unique counter for each unique element in array fullnames
    for (int i = 0; i < n; i++)
    {
        if (strcmp(fullnames[i], "") != 0)
        {
            unique++;
        }
    }

    printf("%d\n", unique); // Kattis does read this
}
