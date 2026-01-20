/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*
Write a C program to obtain equivalent fahrenheit temperature, when degree celsius is given as input.
The relationship between the 2 temperaure scales is:-
        c/5 = (f-32)/9
*/ 

#include<stdio.h>
int main()
{
        double c,f;
        printf("Enter the temperature in Celsius = ");
        scanf("%lf",&c);
        f = (9.0/5.0)*c + 32.0;
        printf("Equivalent Fahrenheit temperature = %lf\n",f);
        return 0;
}
