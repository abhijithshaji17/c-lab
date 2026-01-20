/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

// Write a C program to swap two variables.

#include<stdio.h>
int main()
{
    int a,b,temp;
    a = 8; b = 3; 
    printf("Before swapping: a = %d, b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp; 
    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}

