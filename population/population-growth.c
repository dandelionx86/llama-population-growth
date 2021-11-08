#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get starting population
    int n;
    do
    {
        n = get_int("Start: ");
    }
    while (n < 9);

    // Get end population
    int e;
    do
    {
        e = get_int("End: ");
    }
    while (e < n);

    // Calculate number of years
   int y = 0;
   for(; e > n; y++)
   {
       n = n + (n / 3) - (n / 4);
   }

    // Print years
    printf("Years: %i", y);
    printf("\n");

}