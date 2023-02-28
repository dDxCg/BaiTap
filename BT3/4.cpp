#include <iostream>
using namespace std;

int main(){
// char daytab[2][12] = {
//   {31,28,31,30,31,30,31,31,30,31,30,31},
//   {31,29,31,30,31,30,31,31,30,31,30,31}
// }; 
// char daytab[2][12] = {
//   31,28,31,30,31,30,31,31,30,31,30,31,
//   31,29,31,30,31,30,31,31,30,31,30,31
// };  
    int x, y;
    cin >> x >> y;
    char playMat[x][y];
    for (int i = 0; i < x; ++i){
        for (int j = 0; j < y; ++j){
            cin >> playMat[i][j];
        }
    }

    for (int i = 0; i < x; ++i){
        for (int j = 0; j < y; ++j){
            int count = 48;
            if (playMat[i][j] != '*'){
                if(playMat[i][j-1] == '*') ++count;
                if(playMat[i][j+1] == '*') ++count;
                if(playMat[i+1][j+1] == '*') ++ count;
                if(playMat[i+1][j] == '*') ++count;
                if(playMat[i+1][j-1] == '*') ++count;
                if(playMat[i-1][j-1] == '*') ++count;
                if(playMat[i-1][j] == '*') ++count;
                if(playMat[i+1][j+1] == '*') ++count;
                playMat[i][j] = count;
            }
        }
    }

    for (int i = 0; i < x; ++i){
        for (int j = 0; j < y; ++j){
            cout << playMat[i][j] << " ";
        }
        cout << "\n";
    }
}