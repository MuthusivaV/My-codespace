#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{

    float dollar ;
    do
    {

    dollar = get_float (" Enter your change : ");

    }
    while ( dollar <= 0);

    int cents = round ( dollar*100);
    int coins = 0;

    while ( cents >= 25)
    {
        cents -= 25 ;
        coins++;
    }

    while ( cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    while ( cents >= 5)
    {
         cents -= 5;
         coins++;
    }

    printf (" you need atleast %i coins\n " , coins );

}
