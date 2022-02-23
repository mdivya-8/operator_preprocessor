                                                      POINTERS TO PRIMITIVE DATATYPES

POINTER:

-> A pointer is a variable which stores the address of another variable.
                                  (or)
-> pointer is a variable which is capable of storing the initial address of the object which it wants to point to.

SYNTAX for declaration:
-> data_type *pointer_name //we first have to specify the data type then the star and then name of the pointer. 
                           // here the data type refers to type of the value that the pointer will point to.
                           // pointer variable does not have its own data type because it always contains the address of some other object.
POINTERS TO  PRIMITIVE DATATYPES:
EXAMPLE:
int *ptr;-------->points to integer value
short int *ptr--->points to short integer value
long int *ptr---->points to long integer value
char *ptr;------->points to character value
float *ptr;------>points to float value
double *ptr;----->points to double value

INITIALIZE A POINTER:
EX: int x=5;//x containing value 5
    int *ptr;//points to integer value
    ptr=&x;// assign the address of varibale x to the pointer variable
                 (or)
     int x=5,*ptr=&x;
-> value of operator/indirection/dereference operator that is used to access tha value stored at the location pointed by the pointer.
#include<stdio.h>
void main(){
int x=5;
    int *ptr;
    ptr=&x;
printf("%d",*ptr);
}

-> we can also change the value of the object pointed by the pointer
#include<stdio.h>
void main(){
int x=10;
int *ptr=&x;
*ptr=4;
printf("%u %d",ptr,*ptr);
}
CAUTION:
-> never apply the indirection operator to the uninitialized pointer
EX: int *ptr;
printf("%d",*ptr);
-> assigning value to an uninitialized pointer
EX: int *ptr;
    *ptr=1;
CHARACTER POINTER
EX:#include<stdio.h>
int main(){
    char ch='c';
    char *chptr;
    chptr=&ch;
    printf("%c",*chptr);
}
 
FLOAT POINTER
#include <stdio.h> 

int main(void) 
{ 
    char ch = 'c'; 
    char *chptr = &ch; 

    int i = 20; 
    int *intptr = &i; 

    float f = 1.20000; 
    float *fptr = &f;  

    printf("\n [%c], [%d], [%f], [%u]\n", *chptr, *intptr, *fptr, chptr);

}
DOUBLE
#include<stdio.h>
int main(){
  double a=10;
    double *p;
    p=&a;
    printf("%lf",*p);
}

LONG

void main(){
long int x=10;#include<stdio.h>

long int *ptr=&x;
*ptr=4;
printf("%li",*ptr);
}
SHORT

#include<stdio.h>
void main(){
short int x=10;
short int *ptr=&x;
*ptr=4;
printf("%hd",*ptr);
}

#include<stdio.h>
void main(){
short int x=10;
short int *ptr=&x;
*ptr=4;
printf("%hd %u %d %d",*ptr,ptr,sizeof(*ptr),sizeof(ptr));
}
