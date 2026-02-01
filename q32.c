/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program to find the sum of integers of a number.

#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    if(temp < 0){
        temp = -temp;
    }
    while(temp != 0){
        rem = temp % 10;
        sum = sum + rem;
        temp = temp/10;
    }
    printf("Sum of digits in %d = %d\n",n,sum);
    return 0;
}