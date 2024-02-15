/*
to implementation of trapezoidal method.
Algorithm : (Trapezoidal Method)
1.start
2.Declare the necessary variable and define the function f(x).
3.Input the lower limit and upper limit as a and b respectively.
4.Input the number of strips as n.
5.Compute the value of strip width as h=(b-a)/n;
6.Compute the integration value as
         I =(h/2)*(f(a)+f(b)+2*Summation from n-1 to i=1 of f(a+i*h))
7.Display the integral value is I
8.stop
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
        
            sum=sum+2*f(a+i*h);  
    }
    I=(h/2)* (sum+f(a)+f(b));
    printf("The integral value is : %f", I);
    return 0;
}