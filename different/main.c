/***
 * Author: Vilhelm Prytz <vilhelm@prytznet.se> / <vprytz@kth.se>
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed long int x, y;

    // get input until EOF
    while (scanf("%lu %lu", &x, &y) != EOF)
    {
        // abs is only int,
        printf("%lu\n", labs(x - y));
    }
}
