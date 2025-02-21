#include <stdio.h>

int main() 
{
    int d0, d1;
	scanf("%d %d", &d0, &d1);
    for (size_t i = d0; i <= d1; i++)
    {
        printf("%d ", i*i);
    }
    return 0;
}