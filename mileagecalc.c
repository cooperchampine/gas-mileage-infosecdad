// Purpose: Calculate MPG based off of two basic inputs
// Programmed by: Cooper Champine
// Date Last Modified: 2/25/22 at 10:56 PM

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float miles; // miles entered by user
    float milestotal; // total miles
    float gallons; // gallons entered by user
    float gallonstotal; // total gallons
    float mpg; // output calculated
    float mpgtotal;
    int response; // response to continue loop or not

    do {
    puts("Miles Per Gallon Calculator:\n"
    "Input miles driven: ");
    printf("%s","? ");
    scanf("%e", &miles);
    milestotal = milestotal + miles;
    
    puts("Input gallons consumed: ");
    printf("%s","? ");
    scanf("%e", &gallons);
    gallonstotal = gallonstotal + gallons;

    mpg = miles/gallons;
    puts("Miles Per Gallon: ");
    printf("%f",*&mpg);

    puts("\n"
    "Do you wish to continue? ( 1 = yes, 2 = no )");
    printf("%s","? ");
    scanf("%d", &response);
    } while (response == 1);

mpgtotal = milestotal/gallonstotal;
puts("Overall Miles Driven: ");
printf("%f", *&milestotal);
puts("\n"
"Overall Gallons Consumed: ");
printf("%f", *&gallonstotal);
puts("\n"
"Overall MPG");
printf("%f", *&mpgtotal);
puts("\n");

} // End of MPG calc
