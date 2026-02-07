/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*
Write a C program to display the colors of the rainbow. 
[Hint: Enter the character according to color]
*/ 

#include<stdio.h>
int main()
{
    char ltr,color;
    printf("Enter a letter of your choice from 'VIBGYOR': ");
    scanf("%c",&ltr);
    printf("letter is %c\n",ltr);
    if(ltr == 'v' || ltr == 'V'){
        printf("Color is Violet");
    }
    else if(ltr == 'i' || ltr == 'I'){
        printf("Color is Indigo");
    }
    else if(ltr == 'b' || ltr == 'B'){
        printf("Color is Blue");
    }
    else if(ltr == 'g' || ltr == 'G'){
        printf("Color is Green");
    }
    else if(ltr == 'y' || ltr == 'Y'){
        printf("Color is Yellow");
    }
    else if(ltr == 'o' || ltr == 'O'){
        printf("Color is Orange");
    }
    else if(ltr == 'r' || ltr == 'R'){
        printf("Color is Red");
    }
    else{
        printf("Invalid letter/color!");
    }
    return 0;
}
