/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*  
In inventory management, the Economic Order Quantity for a
single item is given by:-
    eoq = sqrt((2*demand rate*setup costs)/holding costs per item per unit time)

and the optimal Time Between Orders:-
    tbo = sqrt((2*setup costs)/demand rate*holding costs per unit time)

Write a program to compute EOQ and TBO, given demand rate
(items per unit time), setup costs (per order), and the holding cost
(per item per unit time).
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double demrate,setcost,hcpiput,hcput,eoq,tbo;
    printf("Enter the demand rate(in $) = ");
    scanf("%lf",&demrate);
    printf("Enter the setup cost(in $) = ");
    scanf("%lf",&setcost);
    printf("Enter the holding costs per item per unit time = ");
    scanf("%lf",&hcpiput);
    printf("Enter the holding costs per unit time = ");
    scanf("%lf",&hcput);
    eoq = sqrt((2*demrate*setcost)/hcpiput);
    tbo = sqrt((2*setcost)/demrate*hcput);
    printf("eoq = %lf\n");
    printf("tbo = %lf\n");
    return 0;
}
