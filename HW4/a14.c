#include <stdio.h>

int main() 
{
    int d0;
	scanf("%d", &d0);
    int d1 = d0 / 100;
    int d2 = (d0 / 10) % 10;
    int d3 = d0 % 10;
    
    int max = d1 > d2? d1 : d2;
    int max2 = max > d3? max : d3;

    //printf("%d = %d %d %d\n", d0, d1, d2, d3);
    printf("%d", max2);
    return 0;
}