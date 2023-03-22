#include <iostream>
using namespace std;

int gcd(int n, int m){
    while (n != m){
        if (n > m){n -= m;}else{m -= n;}
    }
    return n;
}

void ntcugnhau(int n, int m){
    if (gcd(n,m) != 1) cout << "Khong ng to cung nhau";
    else cout << "Ng to cung nhau";
}


int main(){
    int n, m;
    cin >> n >> m;
    cout << gcd(n,m) << "\n";
    ntcugnhau(n,m);
}