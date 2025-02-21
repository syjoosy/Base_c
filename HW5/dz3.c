#include <stdio.h>

int main() 
{
    int d0, d1;
	scanf("%d %d", &d0, &d1);
    int summ = 0;
    for (size_t i = d0; i <= d1; i++)
    {
        summ += i*i;
    }
    printf("%d", summ);
    return 0;
}