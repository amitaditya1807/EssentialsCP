#include<iostream>
#include<thread>
#include<unistd.h>
using namespace std;

// recursive method that returns (x^y % m)
int RecPowExpoMod(int x, int y, int m){
    // tc = O(log(y)), sc = O(log(y)) stack recursion space
    if(!y)return 1;

    int k = RecPowExpoMod(x, y/2, m);
    if(y&1)return (((1ll*k*k)%m)*x)%m;
    else return (1ll*k*k)%m;
}


int main() {
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif 

    // RecPowModExpo
    cout << RecPowExpoMod(2, 4, 12) << endl; // 2^4 % 12

    return 0;
}
