#include<stdio.h>
#include<math.h>
int main()
{
int T,i,N;
scanf("%d",&T);
for(i=0;i<T;i++)
{
 int a;
 a=0;
 scanf("%d",&N);
    if(N%3==2 && N>=3)
    {
        N+=1;
        while(N>1)
        {
            N=N/3;
            a+=1;
        }
        }
    if(N%3==1 && N>=3)
    {
        N-=1;
        while(N>1)
        {
            N=N/3;
            a+=1;
        }
        }
        if(N%3 ==0 && N>=3)
        {        
         while(N>1)
         {
             N=N/3;
             a+=1;
        }
        }
        printf("%d",a);
        }}      
                       
