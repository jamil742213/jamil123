#include<stdio.h>
void change(int,int);
    
int main(){

    int a=10,b=20;
    change(a,b);
    printf("Value of a is :%d",a);
    printf("\n");
    printf("Value of a is :%d",b);

    return 0;
}
void change(int x, int y){
    x=13;
    y=17;
}