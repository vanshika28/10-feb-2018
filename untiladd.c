#include<stdio.h>
int main(){
int n,i,sum=0;
do {
    printf("Enter a number");
    scanf("%d" , &n);
    sum=sum+n;
}
while(n!=0);{
    printf("Sum is %d" , sum );
}
}
