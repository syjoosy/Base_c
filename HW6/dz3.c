#include <stdio.h>

int middle(int d0, int d1)
{   
    return (d0 + d1) / 2;
}

int main() 
{
    int d0, d1;
	scanf("%d %d", &d0, &d1);
    printf("%d", middle(d0, d1));
    return 0;
}