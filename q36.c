/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* 
A set of two linear equations with two unknowns x1 and x2 is given below:
ax1 + bx2 = m
cx1 + dx2 = n
The set has a unique solution:
x1 = (md - bn)/(ad - cb)
x2 = (na - mc)/(ad - cb)
provided the denominator ad - cb != 0. Write a program that will read the values of constants a,b,c,d,m and n and compute the values of x1 and x2. An appropriate message should be printed if ad - cb = 0. 
*/

#include<stdio.h>
int main()
{
    double a,b,c,d,m,n,x1,x2;
    printf("Enter the respective values:\n");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&m,&n);
    x1 = (m*d - b*n)/(a*d - c*b);
    x2 = (n*a - m*c)/(a*d - c*b);
    if((a*d - c*b) == 0){
        printf("Error: division by zero!");
    }
    else{
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }
    return 0;
}
