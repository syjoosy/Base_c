#include <stdio.h>

int main() 
{
    int d0;
	scanf("%d", &d0);
    int digit = 0;

    while (d0 > 0)
    {
        int d1 = (d0 / 1 % 10);
        d0 /= 10;
        if (digit == d1)
        {
            printf("YES");
            return 0;
        }
        digit = d1;
    }
    
    printf("NO");
    return 0;
}