#include <stdio.h>
#include <string.h>

int main()
{

    int a,b;
    printf("%d", (a = 4 * 5, b = a * 2), b - a, a += 2);

}