/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* 
Write a C program to determine whether a given number is 'odd' or 'even' and print the message
NUMBER IS EVEN or NUMBER IS ODD (a) without using else option, and (b) with else option.
*/

// //q34.a
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num%2 == 0){
//         printf("number is even");
//     }
//     if(num%2 != 0){
//         printf("number is odd");
//     }
//     return 0;
// }

//q34.b
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    return 0;
}