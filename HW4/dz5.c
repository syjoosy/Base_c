#include <stdio.h>

int main() 
{
    float x1, y1, x2, y2;
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    float k = (y1 - y2) / (x1 - x2);
    float b = y2 - k*x2;
    printf("%.2f %.2f" ,k, b);
    return 0;
}