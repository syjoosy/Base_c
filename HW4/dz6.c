#include <stdio.h>

int main() 
{
    int d0, d1;
	scanf("%d %d", &d0, &d1);

    if (d0 > d1)
    {
        printf("Above");
    }
    else if (d0 == d1)
    {
        printf("Equal");
    }
    else if (d0 < d1)
    {
        printf("Less");
    }

    
    return 0;
}