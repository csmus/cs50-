#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;

    do
    {
        printf ("How much change is owed?: ");
        change = GetFloat();
        if (change == 0 )
        {
            return 0;
        }    
    }
    while (change < 0);

    int quarters = 25; 
    int dimes = 10; 
    int nickles = 5; 
    int pennies = 1;
    int cents = round (change * 100);

    int NumQuarters = cents / quarters;
    int QuarterBalance = cents - (NumQuarters * 25);

    int NumDimes = QuarterBalance / dimes;
    int DimeBalance = QuarterBalance - (NumDimes * 10);

    int NumNickles = DimeBalance / nickles;
    int NickleBalance = DimeBalance - (NumNickles * 5);

    int NumPennies = NickleBalance / pennies;

    int count = NumQuarters + NumDimes + NumNickles + NumPennies;

    printf ("%i\n", count); 

    //  Cross Check Coin count       
    //      printf ("# of Quarters:%i\n", NumQuarters);

    //      printf ("# of Dimes:%i\n", NumDimes);

    //      printf ("# of Nickles:%i\n", NumNickles);

    //      printf ("# of Pennies:%i\n", NumPennies);

    {
        return 0;    
    }    
} 