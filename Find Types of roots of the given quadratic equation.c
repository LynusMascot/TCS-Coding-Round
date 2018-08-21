//Rohit Goswami

#include <stdio.h>

int main ()
{ 
    int a,b,c;
    printf("enter value of a b c: ");
    int d;
    scanf("%d %d %d",&a,&b,&c);
    d= b*b-4*a*c;
    if(d<0){
        printf("No real roots");
    }
    if(d==0){ printf("One real root");}
    if(d>0){printf("Two real roots");}
}
