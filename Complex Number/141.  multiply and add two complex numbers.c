/* 141. WAP to multiply and add two complex numbers  

Input :
5
-4
4
6

Output :
Sum is 9 + 2i
Product is 44 + 14i
					*/
#include<stdio.h>
#include<conio.h>

typedef struct {
  int real;
  int imag;
} complex;

void getdata (complex *);
void display (complex);
complex sum(complex,complex);
complex mult(complex,complex);

main() {
 complex c1,c2,c3,c4;
 getdata(&c1);
 getdata(&c2);
 
 c3=sum(c1,c2);
 printf("Sum is ");
 display(c3);
 
 c4=mult(c1,c2);
 printf("Product is ");
 display(c4);
 
 getch();
}

void getdata(complex *p) {
 printf("Enter real  ");
 scanf("%d",&p->real);
 printf("Enter imag ");
 scanf("%d",&p->imag);
}

complex sum(complex c1,complex c2) {
 complex t;
 t.real=c1.real+c2.real;
 t.imag=c1.imag+c2.imag;
 return t;
}

complex mult(complex c1,complex c2) {
 complex t;
 t.real=c1.real*c2.real-c1.imag*c2.imag;
 t.imag=c1.real*c2.imag+c2.real*c1.imag;
 return t;
}

void display {
 if(c.imag>=0)
 printf("%d+%di\n",c.real,c.imag);
 else
 printf("%d%di\n",c.real,c.imag);
}