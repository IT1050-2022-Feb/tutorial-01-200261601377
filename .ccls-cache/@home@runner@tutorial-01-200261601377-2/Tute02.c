#include <stdio.h>

int main() 
{
    int distance;
    float tot;

    printf("Enter the distance: ");
    scanf("%d", &distance);

    if (distance <= 30) 
	{
        tot = distance * 50;
    }
    else 
	{
        tot = 30 * 50 + (distance - 30) * 40;
    }

    printf("Total cost: %.2f\n", tot);

    return 0;
}