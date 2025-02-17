#include <stdio.h>

int main() 
{
    int d1, d2, d3, d4, d5;
	scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
    int max = d1 > d2? d1 : d2;
    int max2 = max > d3? max : d3;
    int max3 = max2 > d4? max2 : d4;
    int max4 = max3 > d5? max3 : d5;
    printf("%d", max4);
    return 0;
}