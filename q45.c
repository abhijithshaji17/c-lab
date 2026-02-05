/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*Calculator using Switch-case*/

#include<stdio.h>
int main()
{
    int op;
    double n1,n2,ans;
    printf("----Menu Driven Calculator----\n");
    printf("Enter the first number:\n");
    scanf("%lf",&n1);
    printf("Enter the second number:\n");
    scanf("%lf",&n2);
    printf("Select the desired operation below:\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&op);
    switch(op){
        case 1: 
            ans=n1+n2;
            printf("Sum = %lf\n",ans);
            break;
        case 2: 
            ans=n1-n2;
            printf("Difference = %lf\n",ans);
            break;
        case 3: 
            ans=n1*n2;
            printf("Product = %.2lf\n",ans);
            break;
        case 4:
        if(n2!=0){
            ans=n1/n2;
            printf("Quotient = %.2lf\n",ans);
        }
        else{
            printf("Error: Division by zero not possible!");
        }
            break;
        default:
            printf("Invalid choice.");
    }
    return 0;
}