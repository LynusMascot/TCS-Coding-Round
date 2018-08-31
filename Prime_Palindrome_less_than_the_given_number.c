//coder : Rohit Goswami
#include <stdio.h>

int main()
{   int n,i,j,rev=0;
    int rem;
    int flag=0;
    scanf("%d",&n);
    int orig=n;
    int temp,temp2;
                  
    
    for(i=1;i<n;i++){
        temp=i;
        temp2=i;
        while(temp!=0){
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }
        if(rev==temp2){
                for(j=1;j<=temp2;j++){
                    if(temp2%j==0){
                        flag=flag+1;
                    }
                }}
        if(flag==2){
            printf("%d ",temp2);
        }
                 
    rev=0;
    rem=0;
    temp=0;
    temp2=0;
    flag=0;
     }
   
}
