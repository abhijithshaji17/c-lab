/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program to read length and breadth from user, calculate the area of a rectangle and display it.

#include<stdio.h>
int main()
{
    int l,b,ar;
    printf("Input length(in units) = ");
    scanf("%d",&l);
    printf("Input breadth(in units) = ");
    scanf("%d",&b);
    ar = l*b;
    printf("Area of rectangle(in sq.units) = %d\n",ar);
    return 0;
}
