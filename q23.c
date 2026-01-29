/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* 
Write a C program to read marks of 3 subjects as mark1, mark2, mark3 from user. Max. mark for each subject is 100. Calculate the total mark & percentage. If percentage is above or equal to 90 display grade is A. Otherwise if percentage is above or equal to 80 display grade is B, similarly if percentage is above or equal to 70 display grade is C, above or equal to 60 display grade is D, above or equal to 50 display grade is E finally in all remaining cases as fail.  
*/   

#include<stdio.h>
int main()
{
    double mark1,mark2,mark3,totalmark,perc;
    printf("Enter the marks of subject1 = ");
    scanf("%lf",&mark1);
    printf("Enter the marks of subject2 = ");
    scanf("%lf",&mark2);
    printf("Enter the marks of subject3 = ");
    scanf("%lf",&mark3);
    totalmark = mark1+mark2+mark3;
    perc = ((mark1+mark2+mark3)/300)*100;
    printf("total marks = %.2lf\n",totalmark);
    printf("perc = %.2lf\n",perc);
    if(perc>=90){
        printf("Grade = A");
    }
    else if(perc>=80){
        printf("Grade = B");
    }
    else if(perc>=70){
        printf("Grade = C");
    }
    else if(perc>=60){
        printf("Grade = D");
    }
    else if(perc>=50){
        printf("Grade = E");
    }
    else{
        printf("Grade = Fail");
    }
    return 0;
}