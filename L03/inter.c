#include <stdio.h>
#include <stdlib.h>
void main(){
int a; // allocates an integer called a
int* pt_a; // allocates a pointer, called pt_a, to an integer
int* pt_b;
int b;
int c;

a=13;
b=4;

pt_a = &a;//stores the location of a
pt_b = &b;

c= *pt_a+1;

printf("The size of an int is %ld\n",sizeof(int));
printf("a is located at %p\n",pt_a);
printf("b is located at %p\n",pt_b);
printf("a = %d \n",a);
printf("b = %d \n",b);
printf("c = %d \n",c);
int *array;
array = (int *) malloc(10*sizeof(int));
printf("a[0] = %d\n", array[0]);

}
