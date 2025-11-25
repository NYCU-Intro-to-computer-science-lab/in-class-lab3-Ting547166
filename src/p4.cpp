// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;
int fib(int n, int step){
    for(int i=0; i<step; i++){
        cout << "|--";
    }
    cout << "SEARCH fib(" << n << ")" << '\n';
    if(n == 1 || n == 2){
        for(int i=0; i<step; i++){
            cout << "|--";
        }
        cout << "GET fib(" << n << ") = " << "1" << '\n';
        return 1;
    }
    int k = fib(n-1, step+1) + fib(n-2, step+1);
    for(int i=0; i<step; i++){
        cout << "|--";
    }
    cout << "GET fib(" << n << ") = " << k << '\n';
    return k;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n,0) << '\n';
    return 0;
}
