#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int mat[row][col];
    for(int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j){
            mat[i][j] = 0;
        }
    }

    const int endVal = row*col;
    int count = 1;
    int _row = row, _col = col;
    int tracking = 0;

    while (count <= endVal){
        for (int i = tracking; i < _col; ++i){
            mat[tracking][i] = count;
            ++count;
        }
        for (int i = tracking + 1; i < _row; ++i){
            mat[i][_col - 1] = count;
            ++count;
        }
        if (tracking + 1 != _row){
            for (int i = _col - 2; i >= tracking; --i){
                mat[_row - 1][i] = count;
                ++count;
            }
        }
        if (tracking + 1 != _col){
            for (int i = _row - 2; i >= tracking + 1; --i){
                mat[i][tracking] = count;
                ++count;
            }
        }
        ++tracking; --_col; --_row;
    }

    for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}