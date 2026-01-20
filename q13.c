/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*  
The straight-line method of computing the yearly depreciation of
the value of an item is given by:- 
        depreciation = (purchase price - salvage value)/years of service
Write a program to determine the salvage value of an item when
the purchase price, years of service, and the annual depreciation
are given.
=> salvage value = purchase price - (depreciation*years of service)
*/

#include<stdio.h>
#include<math.h>
int main()
{
        double dep,pprice,salvval,yrsofser;
        printf("Enter the purchase price(in $) = ");
        scanf("%lf",&pprice);
        printf("Enter the depreciation = ");
        scanf("%lf",&dep);
        printf("Enter the years of service(in yrs) = ");
        scanf("%lf",&yrsofser);
        salvval = pprice - (dep*yrsofser);
        printf("salvage value = %lf\n",salvval);
        return 0;
}