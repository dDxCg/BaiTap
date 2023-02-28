#include <iostream>
using namespace std;

string reverse(string str){
    string output = "";
    for (int i = str.length() - 1; i >= 0; --i){
        output += str[i];
    }
    return output;
}
int main(){
    string str;
    cin >> str;
    if (reverse(str) == str){
        cout << "yes";
    }else cout << "no";
}