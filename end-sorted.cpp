//Question --> https://www.codechef.com/submit/ENDSORTED

#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n;
    cin>>n;
    int index1,indexN;
    for(int i=0;i<n;i++) {
        int num;
        cin>>num;
        if(num == 1) index1 = i;
        if(num == n) indexN = i;
    }

    int ab = index1 + (n-1) - indexN; 

    if(index1 < indexN){
        cout<<ab<<"\n";
    } else {
        cout<<ab-1<<"\n";
    }
}

int main() {
   int t;
   cin>>t;
   while(t--) sol();
}


//Let us understand test cases

//1. 4 is the input value and 1 3 2 4 are the subvalues
// here index1 = 1, indexN=4  (1<4) -> true
//then int ab = index1 + (n-1) - indexN;  is the formula
//1 + (4-1) - 4 --> 0 which is the no.of swaps required.

//2. 3 is the input value and 3 2 1 are the subvalues
// here index1=3, indexN=1 (3<1) --> false
// 3 + (3-1) - 1 - 1 --> 5-2 ---> 3 which is the no. of swaps required.
