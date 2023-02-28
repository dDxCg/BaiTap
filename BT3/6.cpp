#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int endVal = n * n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            arr[i][j] = 0;
        }
    }
    int col_index = (n - 1) / 2;
    int row_index = 0;
    arr[row_index][col_index] = 1;
    int count = 2;
    while (count <= endVal)
    {
        int _row, _col;
        if (row_index - 1 < 0)
            _row = n - 1;
        else
            _row = row_index - 1;
        if (col_index + 1 > n - 1)
        {
            _col = 0;
        }
        else
            _col = col_index + 1;

        if (arr[_row][_col] != 0)
        {
            _row = row_index + 1;
            _col = col_index;
            if (_row > n - 1)
                _row = 0;
        }
        arr[_row][_col] = count;
        ++count;
        row_index = _row;
        col_index = _col;
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}