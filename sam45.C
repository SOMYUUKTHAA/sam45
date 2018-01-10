#include<stdio.h>
void main()
{
    int a,count=0;
    printf("ENTER A NUMBER\t");
    scanf("%d",&a);
    while(a<=100000000000)
    {
       count++; 
    }
    printf("THE NUMBER OF NUMERIC DIGITS ARE:\t",count);
}
