#include<stdio.h>
int main(){
float a;
float b , c;
printf("Enter the numbers");
scanf("%f %f", &a ,&b);
c = a*b;
printf(" sum is %f " ,c);
printf("%f * %f = %f " , a , b ,c);
return 0;
}
