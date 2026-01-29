/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

// Write a C program to find the largest of three numbers using if-elseif ladder.

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers = ");
    scanf("%d %d %d", &n1,&n2,&n3);
    printf("numbers: %d %d %d\n",n1,n2,n3);
    if(n1>=n2 && n1>=n3){
        printf("%d is the largest of 3 numbers", n1);
    }
    else if(n2>=n1 && n2>=n3){
        printf("%d is the largest of 3 numbers", n2);
    }
    else{
        printf("%d is the largest of 3 numbers", n3);
    }
    return 0;
}