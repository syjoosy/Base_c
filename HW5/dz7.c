#include <stdio.h>

int main() 
{
    int d0;
	scanf("%d", &d0);
    int digit = 0;

    while (d0 > 0)
    {
        int d1 = (d0 % 10);
        d0 /= 10;
        if (digit == d1)
        {
            printf("YES\n");
            return 0;
        }
        digit = d1;
        int temp = d0;
        
        //printf("D1: %d\n", d1);
        
        while (temp > 10)
        {
            int d2 = (temp % 10);
            temp /= 10;
            
            //printf("D2: %d\n", d2);
            
            if (digit == d2)
            {
                printf("YES");
                return 0;
            }
        }
    }
    
    printf("NO");
    return 0;
}