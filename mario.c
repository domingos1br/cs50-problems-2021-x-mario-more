#include<cs50.h>
#include<stdio.h>

 int main(void)
{
    // ask the user a positive number
    int x,a,b ;

    do
    {
        x= get_int("Height: ");
    }
    while(x<1 || x>8);

    // print the pyramids

    for ( a=0 ;a<x ;a++)
    {
        for ( b=0 ;b<x ;b++)
        {

           if (a+b>=x-1)
           {
               printf("#");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }
}