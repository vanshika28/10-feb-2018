#include<stdio.h>
int main(){
int a[100],n , i , sum=0 , avg;
printf("ENTER TOTAL NO OF ELEMENTS IN THE ARRAYS");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d" , &a[i]);
    sum = sum+a[i];
}
for(i=0 ; i<n; i++){
    printf("%d\t" , a[i]);
}
printf("%d\t" , sum);
avg = sum/n;
printf("%d" , avg);
}
