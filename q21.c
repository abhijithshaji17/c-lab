/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

// Write a C program to read the age of a person & print whether the person is eligible to vote >= 18 using if-else concept.

#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of person = ");
    scanf("%d",&age);
    if(age >= 18){
        printf("Age = %d\n",age);
        printf("You are eligible to vote!");
    }else{
        printf("Age = %d\n",age);
        printf("You are ineligible to vote!");
    }
    return 0;
}