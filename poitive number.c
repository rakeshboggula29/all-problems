/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


    int main() {
    int a;
    printf("enter the number:");
    scanf("%d",&a);
if(a%2==0)
    printf("the number is even");
else if (a==0)
    printf("zero");
else 
    printf("the number is odd");


    return 0;

    
}