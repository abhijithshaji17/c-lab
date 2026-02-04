/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* Write a C program to print the following pattern using 3 loops */

// #include<stdio.h>
// int main()
// {
//     int i,j;
//         for(i=1;i<=5;i++){
//            for(j=1;j<=i;j++){
//                printf("%d ",j);
//             }
//             printf("\n");
//         }
//         return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=1,j;
//         while(i<=5){
//             j = 1;
//            while(j<=i){
//                printf("%d ",j);
//             j++;
//             }
//         printf("\n");
//         i++;
//         }
//         return 0;
// }

#include<stdio.h>
int main()
{
    int i=1,j;
        do{
            j = 1;
           do{
               printf("%d ",j);
               j++;
            }
            while(j<=i);
            printf("\n");
            i++;
        }
        while(i<=5);
        return 0;
}