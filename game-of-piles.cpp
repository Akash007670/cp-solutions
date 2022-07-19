//Question: https://www.codechef.com/submit/GAMEOFPILES1

#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n; // Declaring n for the input test case number
    cin >> n; // --> Taking the input 

    vector<int> v(n);  // declaring the vector of size n which is taken above

    for (int i = 0; i < v.size(); i++) {
        cin >> v[i]; // Taking the input values in the  vector (array). 
    }

    //finding the minimum value in the array

    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        min_val = min(min_val, v[i]); //Here we are finding the minimum value from the array
    }

    //For Example the values are 1 5 6
    //Therefore the minimum value is 1 

    if (min_val == 1) {
        cout << "Chef" << "\n"; // Here if the minimum value is equal to 1 then we are going to print chef.
        return; //Because the first move is taken by chef.
    }

    //Finding total number of stones

    long long total = accumulate(v.begin(), v.end(), 0ll);  //0LL is a long long zero. 0x0UL is an unsigned long zero, expressed using hexadecimal notation
    long long spend = total - 2 * n; // Total number of stones spend to acheive odd or even case to determine winner.

    if (spend & 1) { // Here it is odd and (&) is to check odd condition 
        cout << "Chef" << "\n";
    } else {
        cout << "Chefina" << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) sol();
}
