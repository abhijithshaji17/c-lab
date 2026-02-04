/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* Break & Continue*/

// #include<stdio.h>
// int main()
// {
//     int i,j;
//         for(i=0;i<=5;i++){
//             for(j=1;j<=i;j++){
//                printf("%d ",j);
//             }
//            if(i==j){
//                break;
//             }
//             printf("%d ",i);
//             printf("\n");
//         }
//         return 0;
// }

#include<stdio.h>
int main()
{
    int i,j;
        for(i=0;i<=5;i++){
            for(j=1;j<=i;j++){
               printf("%d ",j);
            }
           if(i==j){
               continue;
            }
            printf("%d ",i);
            printf("\n");
        }
        return 0;
}