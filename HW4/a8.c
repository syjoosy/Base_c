#include <stdio.h>

int main() 
{
    int d1, d2, d3;
	scanf("%d %d %d", &d1, &d2, &d3);
    int max = d1 > d2? d1 : d2;
    int full_max = max > d3? max : d3;
    printf("%d", full_max);
    return 0;
}