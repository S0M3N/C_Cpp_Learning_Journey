#include <bits/stdc++.h>

using namespace std;

int max_can(vector<int> vect){
    int a = *max_element(vect.begin(), vect.end());
    return (count(vect.begin(), vect.end(), a));
}

int main(){
    vector<int> vec;
    vec = {1,1,2,3,3,4,4,5,5,5};
    cout<<max_can(vec)<<" ";

    return 0;
}
