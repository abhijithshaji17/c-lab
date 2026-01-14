/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program to find the volume of a cuboid.

#include<stdio.h>
int main()
{
    int l,b,h,vol;
    printf("Enter the length of cuboid(in units) = ","%d\n",l);
    scanf("%d",&l);
    printf("Enter the breadth of the cuboid(in units) = ","%d\n",b);
    scanf("%d",&b);
    printf("Enter the height of the cuboid(in units) = ","%d\n",h);
    scanf("%d",&h);
    vol = l*b*h;
    printf("Volume of Cuboid(in cubic units) = %d\n",vol);
    return 0;
}
