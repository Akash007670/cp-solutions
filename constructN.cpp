//Question --> https://www.codechef.com/problems/CONN

#include<bits/stdc++.h>
using namespace std;

void sol() {
    long long n;
    cin>>n;
    if(n==1 || n==3 || n==5 ){
        cout<<"No"<<"\n";
    } else {
        cout<<"Yes"<<"\n";
    }
}

int main() {
   int t;
   cin>>t;
   while(t--) sol();
}
