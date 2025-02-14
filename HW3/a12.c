#include <stdio.h>

int main() 
{
    int d0;
	scanf("%d", &d0);
    int d1 = d0 / 100;
    int d2 = (d0 / 10) % 10;
    int d3 = d0 % 10;
    //printf("%d = %d %d %d\n", d0, d1, d2, d3);
    printf("%d", d1+d2+d3);
    return 0;
}