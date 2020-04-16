#include<stdio.h>
int main(){
int i,
sum=0, n;
for(i=0;i<10;i++){
    printf("Enter a number n"  );
    scanf("%d" ,&n);
    if(n<0){
        continue;
    }
    sum = sum+n;
}
printf("SUM IS \t %d" , sum);
}
