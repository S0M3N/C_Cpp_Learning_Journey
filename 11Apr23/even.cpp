#include<bits/stdc++.h>

using namespace std;

void even(int n){
    if(n<0) return;
    if(n%2 == 0) cout<<n<<" ";
    even(n-1);
}

int main(){
    int n;
    cin>>n;
    even(n);

    return 0;
}