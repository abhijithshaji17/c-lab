/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program to find factorial of a number.

#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n < 0){
        printf("Factorial of a negative is not defined!");
    }else{
        for(i = 1; i<=n; i++){
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}