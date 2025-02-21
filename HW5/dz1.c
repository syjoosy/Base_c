#include <stdio.h>

int main() 
{
    int d0;
	scanf("%d", &d0);
    for (size_t i = 1; i <= d0; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}