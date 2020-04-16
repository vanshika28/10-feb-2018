#include<stdio.h>
int main(){
    char c;
     int lower , upper;
     printf("ENTER THE LETTER\t\t");
     scanf("%c" ,&c);
     lower = (c=='a'|| c=='e' || c=='i' || c=='o' || c=='u');
     upper = (c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');
     if(lower||upper){
        printf("VOWEL %c" , c);}
     else
        printf("Constant %c" , c);

}
