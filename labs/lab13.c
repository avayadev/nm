/*
 Implementation of Simpson's  3/8  Method

Algorithm
1. start
2. Declare the necessary variable and define the function f(x).
3. Input the lowest limit and upper limit as a and b respectively.
4.input the number of strips as n where n is even.
5.Compute the value of strip width as h=(b-a)/n.
6.Compute the integral value as
    I= (3h/8)*(f(a)+f(b)+3*(f(a+h)+f(a+2h)+f(a+4h) f(a+5h)+f(a+7h)+ f(a+8h)+.......)+2*(f(a+3h)+f(a+6h)+f(a+9h)+....))
7. Display the integral value is I.
8. Stop.


*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x){
    float y;
    y=pow(x,2)+log(x)-sin(x);
    return y;
}

int main(){
    int n,i=1;
    float a,b,I,h,sum=0.0;
    printf("enter lowest limit(a) and upper limit(b): ");
    scanf("%f%f",&a,&b);
    printf("Enter no. of Strips(n): ");
    scanf("%d",&n);
    h=(b-a)/n;
    for (i=1; i<=n-1; i++){
        if(i%3!=0)
          sum=sum+3*f(a+i*h);
        else
            sum=sum+2*f(a+i*h);  
    }
    I=(3*h/8)* (sum+f(a)+f(b));
    printf("The integral value is : %f", I);
    return 0;
}