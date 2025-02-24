#include <stdio.h>

int summ(int d0)
{
    int summ = 0;
    for (size_t i = 1; i <= d0; i++)
    {
        summ += i;
    }
    
    return summ;
}

int main() 
{
    int d0;
	scanf("%d", &d0);
    printf("%d", summ(d0));
    return 0;
}