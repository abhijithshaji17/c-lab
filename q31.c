/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program using while loop to reverse the digits of a number.

#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n != 0){
        rem = n % 10;
        rev = rev*10 + rem;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}