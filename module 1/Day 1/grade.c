/*Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"*/
#include<stdio.h>
void main( )
{
    int g;
    printf("enter grade of student\n");
    scanf("%d",&g);
    if((g>=90)&&(g<=100))
      printf("Grade A\n");
    else if((g>=75)&&(g<=89))
      printf("Grade B\n");
    else if((g>=60)&&(g<=74))
      printf("Grade C\n");
    else if((g>=50)&&(g<=59))
      printf("Grade D\n");
    else if((g>=0)&&(g<=49))
      printf("Grade F\n");
}