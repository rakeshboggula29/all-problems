#include <stdio.h>

int main() {
int num1,num2,sum,sub,mul;
printf("enter two numbers:");
scanf("%d %d",&num1,&num2);
sum=num1+num2;
sub=num1-num2;
mul=num1*num2;
printf("%d\n",sum);
printf("%d\n",sub);
printf("%d\n",mul);
    return 0;
}