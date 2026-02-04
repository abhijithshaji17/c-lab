/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*Do-while*/

#include<stdio.h>
int main()
{
    int i,j;
    i = 0;
    do{
        j = 5;
        do{
            printf("%d %d\t",i,j);
            j--;
        }
        while(j>=1);
        printf("\n");
        i++;
    }
    while(i<5);
    return 0;
}