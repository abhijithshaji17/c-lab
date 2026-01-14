/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*  
Write a C program to find:- 
i) The area and perimeter of a circle.
ii) The volume of a sphere.
Take seperate radii in each case.
*/

#include<stdio.h>
int main()
{
    float r,R,p,ar,vol;
    printf("Enter the radius 'r' of circle = ","%f\n",r);
    scanf("%f",&r);
    printf("Enter the radius 'R' of sphere = ","%f\n",R);
    scanf("%f",&R);
    p = 2*3.14*r;
    ar = 3.14*r*r;
    vol = (4.0/3.0)*3.14*R*R*R;
    printf("Perimeter of circle(units) = %f\n",p);
    printf("Area of circle(sq. units) = %f\n",ar);
    printf("Volume of sphere(cubic units) = %f\n",vol);
    return 0;
}