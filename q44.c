/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*Switch-case*/

#include<stdio.h>
int main()
{
    char c;
    printf("Enter the first letter of color of your choice from VIBGYOR: ");
    scanf("%c",&c);
    switch(c){
        case 'v':
        case 'V':
            printf("Color is Violet");
            break;
        case 'i':
        case 'I':
            printf("Color is Indigo");
            break;
        case 'b':
        case 'B':
            printf("Color is Blue");
            break;
        case 'g':
        case 'G':
            printf("Color is Green");
            break;
        case 'y':
        case 'Y':
            printf("Color is Yellow");
            break;
        case 'o':
        case 'O':
            printf("Color is Orange");
            break;
        case 'r':
        case 'R':
            printf("Color is Red");
            break;
        default:
            printf("Enter a valid color input from VIBGYOR!");
    }
    return 0;
}