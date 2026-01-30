/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program to perform the functions of a calculator using if else if ladder. 

#include<stdio.h>
int main()
{
    char op;
    double n1,n2,ans;
    printf("Choose the arithmetic operator of your choice(+,-,*,/): ");
    scanf("%c",&op);
    printf("Enter the 2 numbers: ");
    scanf("%lf %lf", &n1, &n2);
    if(op == '+'){
        ans = n1 + n2;
        printf("%.2lf + %.2lf = %.2lf",n1,n2,ans);
    }
    else if(op == '-'){
        ans = n1 - n2;
        printf("%.2lf - %.2lf = %.2lf",n1,n2,ans);
    }
    else if(op == '*'){
        ans = n1 * n2;
        printf("%.2lf * %.2lf = %.2lf",n1,n2,ans);
    }
    else if(op == '/' && n2 != 0){
        ans = n1 / n2;
        printf("%.2lf / %.2lf = %.2lf",n1,n2,ans);
    }
    else{
        printf("Invalid operation!");
    }
    return 0;
}