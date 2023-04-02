#include<bits/stdc++.h>

using namespace std;

int factors(int num) {
   int i, count = 0;
   for(i=1; i <= num; i++) {
      if (num % i == 0)count+=1;
   }
   return count;
}

int main() {
   int num;
   cout<<"Enter the numeber: ";
   cin>>num;
   cout<<"factor count: "<<factors(num)<<endl;
   return 0;
}