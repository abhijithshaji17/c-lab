/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*  
Write a C program to find the distance traveled by a vehicle. 
Hint:- Using the Newton's equation of motion => s = ut + 1/2*at^2 
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double s,u,a,t;
    printf("Enter the initial velocity of vehicle(m/s) = ");
    scanf("%lf",&u);
    printf("Enter the acceleration of vehicle(m/s^2) = ");
    scanf("%lf",&a);
    printf("Enter the time taken for journey(s) = ");
    scanf("%lf",&t);
    s = (u*t) + (1.0/2.0)*a*pow(t,2);
    printf("The distance traveled(m) = %lf\n",s);
    return 0;
}
