ARRAY OF FUNCTION POINTER

#include<stdio.h>
 int add (int x,int y){
     int z=x+y;
     return z;
 }
 int sub (int x,int y){
     int z=x-y;
     return z;
 }
 int mul (int x,int y){
     int z=x*y;
     return z;
 }
 void main(){
     int a=4;int b=3;
     int (*fun[3])(int,int)={add,sub,mul};
     printf("%d\n",fun[0](a,b));
      printf("%d\n",fun[1](a,b));
       printf("%d\n",fun[2](a,b));
 }


#include <stdio.h>
#define N 5
int main()
{
   
    int a[N],i,l=0,s=0;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<N;i++){
     if(a[i]>l){
         l=a[i];
     }  
     else if(a[i]>s){
         s=a[i];
     }
    }
    printf("the second largest num is %d",s);
}
    
