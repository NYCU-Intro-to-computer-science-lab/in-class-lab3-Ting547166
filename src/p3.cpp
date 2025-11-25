// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==2){
        return true;
    }
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int n, a = 2000000, b;
    cin >> n;
    for(int i=2;i<=n-2;i++){
        if(isPrime(i)){
            if(isPrime(n-i)){
                if(i <= a){
                    a = i;
                    b = n-i;
                }
                
            }
        }
    }
    cout << a << " " << b << '\n';
    return 0;
}
