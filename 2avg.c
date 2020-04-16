#include<stdio.h>
float avgnumber(float av[]);

int main(){
float sum=0.0 ,a[5];
int  i;
printf("Enter the elements\n");
for(i=0;i<5;i++){
scanf("%f" , &a[i]);
}
sum = avgnumber(a);
printf("%f" , sum);


}
float avgnumber(float av[]){
    int i;
    float s=0.0;
for(i=0;i<5;i++){
    s = s+av[i];
}
return s;
}
