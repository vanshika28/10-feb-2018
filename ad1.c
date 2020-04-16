#include<stdio.h>
int main(){
int a[4] , *p1 ,i;
for(i=0 ; i<4 ;i++){
    printf("&a[%d] = %p" , i ,&a[i]);
}
}
