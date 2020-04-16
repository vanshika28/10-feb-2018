#include<stdio.h>
struct sinfo
{
  int   roll_number ;

  char name[50];
      float marks;

};

int main(){
    struct sinfo s;
    printf("Enter the name of students\n");
    fgets(s.name , sizeof(s.name) , stdin );
    printf("ROLL number \n");
    scanf("%d" , &s.roll_number);
    printf("Enter Marks\n");
    scanf("%f" , &s.marks);

    printf("Name is %s \n" , s.name );
    printf("Roll Number %d\n" , s.roll_number);
    printf("Marks is %f \n" , s.marks);

}

