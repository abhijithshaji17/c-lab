/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* 
Write a C program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.
*/

#include<stdio.h>
int main()
{
    int count,sum,i;
    printf("Numbers between 100 and 200 divisible by 7: \n");
    for(i=101;i<200;i++){
        if(i%7==0){
            printf("%d ",i);
            count++;
            sum+=i;
        }
    }
    printf("\n\nResults:\n");
    printf("--------------------------------\n");
    printf("Total count of numbers : %d\n", count);
    printf("Sum of these numbers   : %d\n", sum);
    return 0;
}