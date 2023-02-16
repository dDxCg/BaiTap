#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_x, num_y;
    cin >> num_x >> num_y;
    long power = 1;
    for (int i = 0; i < num_y; ++i){
        power *= num_x;
    }
    int _pow = pow(num_x, num_y);
    cout << "x^y = " << power << endl<< "pow(x,y) = " << _pow;
}
