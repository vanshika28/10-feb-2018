#include<stdio.h>
int main(){
int n,i,sum=0;
printf ("Enter the number N");
scanf("%d" , &n);
for(i=0; i<=n ; i++){
    sum =sum + i;
}
printf("SUM IS %d" , sum);
}
