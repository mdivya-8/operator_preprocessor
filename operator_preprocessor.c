OPERATORS
---------

1.#include <stdio.h>

int main()
{
    printf("%d\n",1==5==5);
}
output---->0

2.#include <stdio.h>

int main()
{
    int i=0;
    printf("%d %d",i,i++);
}
output----> 1 0 (operation goes from right to left and executes the output from left to right)
3.#include <stdio.h>

int main()
{
    int x=5;
    printf("%d %d %d\n",x++,x++,x++);
}
output----> 7 6 5 (operation goes from right to left and executes the output from left to right)
4.#include <stdio.h>

int main()
{
    int x=2;
    printf("%d ",++x,x++);
    printf("%d\n",x++);
}
output----> 4 4 (operation goes from right to left and executes the output from left to right)
5.#include <stdio.h>

int main()
{
    int k=1;
    printf("%d==1 is""%s\n",k,k==1?"TRUE":"FALSE");
    
}
outpu----> 1==1 istrue
6.#include <stdio.h>

int main()
{
    int i=5;
   i=i++ - --i + ++i;
   printf("%d",i);
    
}
output----> 6
7.#include<stdio.h>
int main()
{
int x=10,y=5,p,q;
p=x>9;
q=p||(x=5,y=10);
printf("%d %d %d \n",q,x,y);
}
output----> 1 10 5 (in or || operation true with anything is true so q is 1 )


========================================= PREPROCESSORS AND MACROS ===========================

1) What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}
ouput:preprocessor works

2) What will be the output of the C program?
#include<stdio.h>
# define loop while(true)
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
output:error:ture is undeclared

3) What will be the output of the C program?
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}
output:error:lvalue requrired as decerement operand(because here we are using decrement operator in macro)
4) What will be the output of the C program ?
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}
output:16(a=3*4) 25(z=5*5)

6) What will be the output of the C program?
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}
output:6

8) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}
output: we will get the present date
9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}
output:we will get the present time

10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}
output: we will get the printf line number.
11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
output: you and me are great!

12) What will be the output of the C program?
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}
output:%s C preprocessor c preprocessor
13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}
output:macro 25=47
14) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}
output:preprocessor 13
15) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}
output:20
16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}
output:50
17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}
output:sizeof (i) =1
18) Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma
1.#include<stdio.h>
#define X 1
#define UNIX 1
#define LINUX 2
#define WINDOWS 3
void main(){
#if(X==UNIX)
int a=10;
int b=60;
#elif(X==LINUX)
int a=40;
int b=80;
#else
int a=30;
int b=60;
#endif
int c=a+b;
printf("%d",c);
}
2.#define a 20
void main(){
printf("%d",a);
}
3.#undef
#define a 30
void main(){
#undef a
printf("%d",a);
}
4.#pragma pack(2)
void main(){
struct x{
int a;
char b;
float c;
};
printf("%d",sizeof(struct x));
}

