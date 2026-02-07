/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*Palindrome number*/

#include<stdio.h>
int main()
{
    int n,rev=0,rem,org;
    printf("Enter a number: ");
    scanf("%d",&n);
    org = n;
    while(n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n /= 10;
    }
    if(org==rev){
        printf("%d is a palindromic number",org);
    }
    else{
        printf("%d is not a palindromic number",org);
    }
    return 0;
}