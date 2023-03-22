#include <iostream>
#include <math.h>
using namespace std;

int rnd_math(double n){
    double rnd_db;
    if (n - floor(n) >= ceil(n) - n){
        rnd_db = ceil(n);
    }else{
        rnd_db = floor(n);
    }
    int rnd_int = rnd_db;
    return rnd_int;
}

int rnd(double n){
    int flr = n;
    int cl = flr + 1;
    if (n - flr >= cl - n)
        return cl;
    else return flr;
}


int main(){
    double num_db;
    cin >> num_db;
    cout << rnd_math(num_db) << "\n" << rnd(num_db);
}