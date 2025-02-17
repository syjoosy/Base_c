#include <stdio.h>

int main() 
{
    int d1, d2, d3;
	scanf("%d %d %d", &d1, &d2, &d3);

    int digits[3] = {d1, d2, d3};

    int max = -999; 
    for (size_t i = 0; i < 3; i++)
    {
        max = digits[i] > max ? digits[i] : max;
    }
    printf("%d", max);
    
    return 0;
}