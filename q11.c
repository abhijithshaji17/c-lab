/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*  
Write a C program to find the area of a triangle. Using the size of sides a,b and c as inputs given from the user. 
Hint: s = (a+b+c)/2
      ar = sqrt(s*(s-a)*(s-b)*(s-c))
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,ar;
    printf("Enter the measure of side a = ");
    scanf("%lf",&a);
    printf("Enter the measure of side b = ");
    scanf("%lf",&b);
    printf("Enter the measure of side c = ");
    scanf("%lf",&c);
    s = (a+b+c)/2;
    printf("The semi perimeter of triangle = %lf\n",s);
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle = %lf\n",ar);
    return 0;
}