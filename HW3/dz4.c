#include <stdio.h>

int main() 
{
    int d1, d2, d3;
	scanf("%d %d %d", &d1, &d2, &d3);
    printf("%.2f", (float)(d1+d2+d3)/3);
    return 0;
}