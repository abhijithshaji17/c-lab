/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

//Write a C program to print "Hello" 10 times using a do while loop. 

#include<stdio.h>
int main()
{
    int n,i = 1;
    printf("Enter the number of times to print: ");
    scanf("%d",&n);
    do{
        printf("Hello\n");
        i++;
    }
    while(i <= n);
}