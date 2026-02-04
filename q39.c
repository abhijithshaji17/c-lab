/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* 
Write a program to compute the real roots of a quadratic equation:
ax2 + bx + c = 0
The roots are given by the equations:
x = (-b+-sqrt(b2-4ac))/2a
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,r1,r2;
    printf("Enter the coefficients of a,b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a == 0){
        printf("Error: 'a' can't be 0\n");
        return 1;
    }
    d = b*b - 4*a*c;
    if(d > 0){
        r1 = -b + sqrt(b*b - 4*a*c)/2*a;
        r2 = -b - sqrt(b*b - 4*a*c)/2*a;
        printf("The roots are real and distinct: %.2lf & %.2lf",r1,r2);
    }
    else if(d == 0){
        r1 = r2 = -b/(2*a);
        printf("The roots are real and equal: %.2lf & %.2lf",r1,r2);
    }
    else{
        double realpart = -b/(2*a);
        double imagpart = sqrt(-d)/(2*a); 
        printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n",realpart, imagpart, realpart, imagpart);
    }
    return 0;
}