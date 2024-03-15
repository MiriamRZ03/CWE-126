#include <stdio.h>

char cookie[] = "¡Ganaste!";
int main()
{
    char buffer[32];
    printf ("Cookie: %80x \n", &cookie);

    gets(buffer);
    printf(buffer);
    printf("\n");
}
