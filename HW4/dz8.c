#include <stdio.h>

int main() 
{
    int d1, d2, d3, d4, d5;
	scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);

    int digits[5] = {d1, d2, d3, d4 ,d5};

    int min = 999;
    for (size_t i = 0; i < 5; i++)
    {
        min = digits[i] < min ? digits[i] : min;
    }
    printf("%d", min);
    
    return 0;
}