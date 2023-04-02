#include<iostream>

using namespace std;

enum TYPE{
   PERFECT,
   NOT_PERFECT
};

TYPE is_perfect(int n)
{
   int i, s=0;
   for(i=1; i<n; i++)
   {
      if(n%i==0)
        s = s+i;
   }
   if(n==s)
        return PERFECT;
   else
        return NOT_PERFECT;
}

int main()
{
   int num, res;
   cout<<"Enter a Number: ";
   cin>>num;
   res = is_perfect(num);
   if(res==PERFECT) cout<<endl<<num<<" is a Perfect Number.";
   else cout<<endl<<num<<" is not a Perfect Number.";
   cout<<endl;
   return 0;
}