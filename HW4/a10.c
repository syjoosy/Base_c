#include <stdio.h>

int main() 
{
    int d1, d2, d3, d4, d5;
	scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
    int min = d1 < d2? d1 : d2;
    int min2 = min < d3? min : d3;
    int min3 = min2 < d4? min2 : d4;
    int min4 = min3 < d5? min3 : d5;
    printf("%d", min4);
    return 0;
}