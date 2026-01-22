/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*
Write a C program to determine the acceleration due to gravity 'g', given by the formula:-
        T = 2*pi*sqrt(l/g)
          => T^2 = 4*pi^2*(l/g)
          => g = 4*pi^2*(l/T^2)
Use the concept of symbolic constants in your program.
*/ 

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    double T,l,g;
    printf("Enter the time period of simple pendulum(s) = ");
    scanf("%lf",&T);
    printf("Enter the length of string of simple pendulum(m) = ");
    scanf("%lf",&l);
    g = 4*pow(pi,2)*(l/pow(T,2));
    printf("The value of g(m/s^2) = %lf\n",g);
    return 0;
}
