/*
Name = Abhijith Shaji
Roll No. = 25020144
Department = Department of Computer Science(DCS)
*/

/*
TUTORIAL:- Write a note on enum and typedef with a sample program.
            >enum = A user-defined datatype that assigns names to integer constants.
            >typedef = A user-defined datatype that assigns a unique alias for an existing datatype.
*/ 

// Program 1 - Define an enumeration for days of the week.
#include<stdio.h>
enum Day{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main()
{
    enum Day Today;
    Today = SUNDAY;
    printf("Today's enum value is = %d\n",Today);
    return 0;
}

// Program 2 - Use a typedef to create an alias for unsigned int.
#include<stdio.h>
typedef unsigned int uint;
int main()
{
    uint quantity = 50;
    printf("Quantity = %u\n",quantity);
    return 0;
}