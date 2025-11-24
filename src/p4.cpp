// // 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;
void print(int d){
    for(int i=0;i < d; i++){
        cout << "|--";
    }
}
int fib(int n, int d){
    print(d);
    cout << "SEARCH " << "fib(" << n << ")" << endl;
    int res = 0;
    if(n==1){
        res = 1;
    }
    else if(n==2){
        res = 1;
    }
    else{
        res = fib(n-1, d+1) + fib(n-2, d+1);
    }
    print(d);
    cout << "GET " << "fib(" << n << ") = " << res << endl;
    return res;
}
int main() {
    int n; cin >> n;
    cout << fib(n, 0) << endl;
    return 0;
}
