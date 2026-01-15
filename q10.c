/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*  
Write a C program to find:- 
i) The area and perimeter of a circle.
ii) The volume of a sphere.
Use symbolic constants, take seperate radii in each case.
*/

#define pi 3.14
#include<stdio.h>
int main()
{
    float r,R,p,ar,vol;
    printf("Enter the radius 'r' of circle = ");
    scanf("%f",&r);
    printf("Enter the radius 'R' of sphere = ");
    scanf("%f",&R);
    p = 2*pi*r;
    ar = pi*r*r;
    vol = (4.0/3.0)*pi*R*R*R;
    printf("Perimeter of circle(units) = %f\n",p);
    printf("Area of circle(sq. units) = %f\n",ar);
    printf("Volume of sphere(cubic units) = %f\n",vol);
    return 0;
}