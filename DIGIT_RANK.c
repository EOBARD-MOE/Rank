#include<stdio.h>
#include<limits.h>
int main()
{
  int num,rem,max=INT_MIN,temp,count=0,rank=0,rank2=0,extra,c=0;
  printf("ENTER THE NUMBER:");
  scanf("%d",&num);
  temp=num;
  while(num){
    temp=num;
    count++;
    while(num){
      rem=num%10;
      if(max<rem)
        max=rem;
      num/=10;
    }   
    num=temp;
    extra=0;
    c=0;
    while(num){
      rem=num%10;
      if(max==rem){
        printf("THE %d RANK IS:%d\n",count,max);
        c++;
      }
      if(max!=rem)
        extra=extra*10+rem;  
      num/=10;  
    }
    if(c==2)
      count++;  
    num=extra;
    max=0;
  }
  return 0;
}