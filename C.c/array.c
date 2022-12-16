#include<stdio.h>
int i;
int main()
{
    int a[5], b[5],c[5];
    printf("Enter marks  10 students ");
     for(int i=0;i<5; i++){
         scanf("%d%d",&a[i],&b[i]);
     
      c[0]=a[0]+b[0];
      c[1]=a[1]+b[1];
      c[2]=a[2]+b[2];
      c[3]=a[3]+b[3];
      c[4]=a[4]+b[4];
      c[5]=a[5]+b[5];
      printf("The number is add ");
      for(int i=0;i<5;i++){
      printf("%d\t",c[i]);
      }
     }


    return 0;
}