/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*
Given the values of three variables a, b and c, write a program to
compute and display the value of x, where
      x = a/(b-c)
Execute your program for the following values:
(a) a = 250, b = 85, c = 25
(b) a = 300, b = 70, c = 70
Comment on the output in each case.
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("Enter the value of a: ","%d\n", a);
    scanf("%d", &a);
    printf("Enter the value of b: ","%d\n", b);
    scanf("%d", &b);
    printf("Enter the value of c: ","%d\n", c);
    scanf("%d", &c);
    if ((b-c) == 0){
        printf("Error: Division by zero not allowed!\n");
    } else {
        x = (float)a/(b-c);
        printf("x =%2.f\n", x);
    }
    return 0;
}
// in case a) normal division occurs as per the equation and corresponding values given.
// whereas in case b) we see a division by zero error since both b and c were assigned 70 resulting a zero denominator in the given equation which in turn makes it a mathematically impossible operation.  
