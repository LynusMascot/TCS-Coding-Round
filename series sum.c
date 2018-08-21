//Rohit Goswami
// To Calculate  (1/1!) - (2/2!) + (3/3!) - (4/4!) + …….. n/n!

#include <stdio.h>
#include<string.h>
#include<math.h>

int fact(int i){
    if (i==1){
        return 1;
    }
    else{
        return i*fact(i-1);
    }
}

int main ()
{ 
  float sum=0;
  float result;
  int n, i;
  printf("value of n: ");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    result= i*pow(-1,i+1)/fact(i);
    sum=sum+result;
  }
  
  printf("%f",sum);
  
}
