#include <stdio.h>

int pow(int d0, int d1)
{
    int d2 = 1;
    for (size_t i = 1; i <= d1; i++)
    {
        d2 *= d0;
    }
    
    return d2;
}

int main() 
{
    int d0, d1;
	scanf("%d %d", &d0, &d1);
    printf("%d", pow(d0, d1));
    return 0;
}