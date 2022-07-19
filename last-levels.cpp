//Question : https://www.codechef.com/LTIME110D/problems/LASTLEVELS

#include<bits/stdc++.h>
using namespace std;

void sol() {
    int x, y, z; //Initializing the values
    cin >> x >> y >> z; //Taking the inputs

    int res = 0; //Initializing the res = 0 so that we can store the no of hours played 

    for (int i = 1; i <= x; i++) { //looping over value x 
        res += y; // Adding the looped value to y and storing into res
        if (i % 3 == 0 && i != x) { //cheking the condition if i is totaly divisible by 3 
            res += z; //Adding the rest time into res
        }
    }
    cout << res << "\n";

}

int main() {
    int t;
    cin >> t;
    while (t--) sol();
}


//Test cases Input values
// 4
// 2 12 10
// 3 12 10
// 7 20 8
// 24 45 15
