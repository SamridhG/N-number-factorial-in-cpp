#include<iostream>
using namespace std;
int main()
{
    int a[100000]={0};
    a[0]=1;
    int n;
    cin>>n;
    int q=2;
    int l=1;
    int num=0;
    while(q<=n)
    {
        int x=0,num=0;
          while(x<l)
          {
          a[x]=a[x]*q;
          a[x]=a[x]+num;
          num=a[x]/10;
          a[x]=a[x]%10;
          
          x++;
          }
          while(num!=0)
          {
              a[l]=num%10;
              num=num/10;
              l++;
          }
          q++;
    }
   for(int i=l-1;i>=0;i--)
    {
        cout<<a[i];
    }
}
