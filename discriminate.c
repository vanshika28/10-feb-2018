#include<stdio.h>
int main(){
    double d , b  , a ,c ,root1 ,root2 , real ,image ;
    d = b*b -(4 *a*c);
    printf("ENTER VZALUE");
    scanf("%lf %lf %lf" , &a , &b , &c);
    if(d<0){
        root1 = (-b+(sqrt(d)))/2*a;
        root2 = (-b-(sqrt(d)))/2*a;
        printf("ROOT 1 = %lf , ROOT2 = %lf" , root1 ,root2);


    }
    else if(d==0){
        root1 = -b/2*a;
        root2=root1;
                printf("ROOT 1 = %lf , ROOT2 = %lf" , root1 ,root2);


    }
    else{
        real = -b/2*a;
        image = (sqrt(-d))/2*a;
                printf("ROOT 1 = %lf+%lfi , ROOT2 = %lf=%lfi" , real,image,real ,image);

    }

}
