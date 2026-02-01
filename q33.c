/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program to print fibonacci series of numbers.

#include<stdio.h>
int main()
{
    int n,i;
    long long t1=0,t2=1,nextterm;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i = 1; i<=n; i++){
        printf("%lld ",t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    printf("\n");
    return 0;
}