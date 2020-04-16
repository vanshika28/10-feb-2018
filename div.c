#include<stdio.h>
int main(){
int did ,dvs, q ,r;
scanf("%d %d " , &did , &dvs);
q =did/dvs;
printf("quotient %d" , q);
r=did % dvs;
printf("remainder %d" , r);

}
