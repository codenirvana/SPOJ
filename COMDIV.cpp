#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
 int t,a,b,num,sqt,i,ans;
 scanf("%d",&t);
 while(t--)
 {
  ans=0;
  scanf("%d %d",&a,&b);
  num=gcd(a,b);
  sqt=sqrt(num);
  for(i=1;i<=sqt;i++)
  {
   if(num%i==0){
    ans+=2;
   if(i==num/i)
    ans--;
   }
  }
  printf("%d\n",ans);
 }
 return 0;
}
