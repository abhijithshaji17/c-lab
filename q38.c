/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/* 
Admission to a professional course is subject to the following conditions:
(a) Marks in Mathematics >= 60
(b) Marks in Physics >= 50
(c) Marks in Chemistry >= 40
(d) Total in all three subjects >= 200 or Total in Mathematics and Physics >= 150.
Given the marks in the three subjects, write a C program to process the applications to list the eligible candidates.
*/

#include<stdio.h>
int main()
{
    double mmath,mphy,mchem,mtotal,mmaphy;
    printf("Enter the marks of math, physics and chemistry out of 100: ");
    scanf("%lf %lf %lf",&mmath, &mphy, &mchem);
    mtotal = mmath+mphy+mchem;
    mmaphy = mmath+mphy;
    printf("Total marks out of 300 = %lf\n", mtotal);
    printf("Marks of physics and chemistry = %lf\n", mmaphy);
    if(mmath>=60 && mphy>=50 && mchem>=40 && (mtotal>=200 || mmaphy>=150)){
        printf("Candidate is eligible for admission to the course");
    }
    else{
       printf("Candidate is ineligible for admission to the course"); 
    }
    return 0;
}