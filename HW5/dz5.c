#include <stdio.h>

int main() 
{
    int d0;
	scanf("%d", &d0);
    int summ = 0;

    while (d0 > 0)
    {
        int d1 = (d0 / 1 % 10);
        d0 /= 10;
        summ += d1;
    }
    
    printf("%d", summ);
    return 0;
}