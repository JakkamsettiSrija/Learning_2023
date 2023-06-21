/*Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
*/
#include<stdio.h>
#include<string.h>
void main( )
{
    char n[50],r[20];
    int p,m,c,t;
    float per;
    printf("enter roll no of student\n");
    gets(r);
    printf("enter name of student\n");
    gets(n);
    printf("enter physics,maths and chemistry marks\n");
    scanf("%d%d%d",&p,&m,&c);
    t=p+m+c;
    per=(t/300)*100;
    puts(r);
    puts(n);
    printf("total marks=%d\n",t);
    printf("percentage=%f\n",per);
}