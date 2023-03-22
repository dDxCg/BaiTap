#include <iostream>
using namespace std;

int kiemTra(int k, int n){
    if (n == 0 || k > n) return 0;
    if (k == n || k == 0) return 1;
    return kiemTra(k-1, n-1) + kiemTra(k, n-1);
}

void nhap(int k[], int n[], int* soPhanTu){
    do{
        cin >> k[*soPhanTu] >> n[*soPhanTu];
        if (k[*soPhanTu] == -1 && n[*soPhanTu] == -1)
        break;
        (*soPhanTu)++;
    }while(true);
}
int main(){
    int k[100], n[100];
    int *soPhanTu = new int(0);
    nhap(k, n, soPhanTu);
    for (int i = 0; i < *soPhanTu; ++i){
        cout << kiemTra(k[i], n[i]) << " ";
    }
}