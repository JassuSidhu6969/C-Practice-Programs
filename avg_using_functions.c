#include<stdio.h>
float avg(float a,float b,float c);
int main(){
    int a,b,c;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
printf("Enter the third number: ");
scanf("%d",&c);
printf("The average is %f",avg(a,b,c));
return 0;
getch();
}
float avg(float a,float b,float c){
    float res;
    res=(a+b+c)/3;
    return res;
}