#include <iostream>
#include <cmath>

using namespace std;
void hanoi(int n, int from, int to, int aux){
    if(n == 0){
        cout << "Move disk " << n << " from " << from << " to " << to <<endl;
        return;
    }
    if(aux == 2){
        hanoi(n-1 , from , aux , to);
        hanoi(n-1 , aux , to , from);
    }
    else{
        hanoi(n-1 , from , aux , to);
        cout << "Move disk " << n << " from " << from << " to " << to <<endl;
        hanoi(n-1 , aux , to , from);
    }
    
   
}


int main() {
    int n; cin >>n;
    hanoi(n , 1 , 3 , 2);

    return 0;
}