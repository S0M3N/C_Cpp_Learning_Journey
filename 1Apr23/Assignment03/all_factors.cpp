#include<bits/stdc++.h>

using namespace std;

void factors(int num) {
   int i, count = 0;
   for(i=1; i <= num; i++) {
      if (num % i == 0) cout<<i<<endl;
   }   
}

int main() {
   int num;
   cout<<"Enter the number: ";
   cin>>num;
   factors(num);
   return 0;
}