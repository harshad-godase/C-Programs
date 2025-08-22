#include<stdio.h>

void add();
void add1();
int add2();
int add3();

void main(){
    add();
    add1(40,50);

     int res = add2();
     printf("\nAddition is of 2 num is %d",res);

     int res2= add3(51,50);
      printf("\nAddition is of 2 num is %d",res2);

}

// 1.No Return Type && No Argument 

void add(){
    int a=10,b=20,sum;
    sum=a+b;
    printf("\nAddition is %d",sum);
}

//2.No Return Type && With Argument

void add1(int a, int b){
    int sum;
    sum=a+b;
    printf("\nAddition is of 2 num is %d",sum);
}

//3. With Return Type && No Argument

int add2(){
    int a=40 ,b=20,sum;
     sum=a+b;
    return sum;
}

//4.With Return Type && With Argument

int add3(int a, int b){
  int sum = a+b;
  return sum;
}


