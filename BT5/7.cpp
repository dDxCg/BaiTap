#include <iostream>
using namespace std;


void draw_triangle(int n){
    int chr = 1;
    for (int i = 1; i <= n; ++i){
        int spc = n - i;
        for (int j = 1; j <= spc; ++j){cout << " ";}
        for (int j = 1; j <= chr; ++j){cout << "*";}
        cout << "\n";
        chr += 2;
    }
}


int main(){
    int n;
    cin >> n;
    draw_triangle(n);
}