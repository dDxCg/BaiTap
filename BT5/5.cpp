#include <iostream>
#include <math.h>
using namespace std;

bool ktraNT(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i){
        if (n % i == 0) return false;
    }
    return true;
}

void NTnhohon(int n){
    for (int i = 2; i <= n; ++i){
        if (ktraNT(i)) cout << i << " ";
    }
}
int main(){
    int n;
    cin >> n;
    cout << boolalpha << ktraNT(n) << "\n";
    NTnhohon(n);
}