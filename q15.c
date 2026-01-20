/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

// Write a C program to read a 2 digit number and print the sum of its digits.  

#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter a 2 digit number = ");
    scanf("%d",&num);
    sum = num%10+num/10;
    printf("sum = %d\n",sum);
    return 0;
}
