#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int ruaSta[10] = {3, 3, 3, 3, 3, 1, 1, 1, -6, -6};
int thoSta[10] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};

int viTri(int lastPos, bool option){
    int viTri = lastPos;
    int sta[10];
    if ((option)){
        for (int i = 0; i < 10; ++i){
            sta[i] = ruaSta[i];
        }
    }else{
        for (int i = 0; i < 10; ++i){
            sta[i] = thoSta[i];
        }
    }
        int index = rand()%10;
        viTri += sta[index];
        if (viTri < 0) viTri = 0;
        return viTri;
}
void chay(){
    int rua = 0, tho = 0;
    while (rua < 70 && tho < 70){
        rua = viTri(rua, true);
        cout << "Rua: " << rua << "\n";
        tho = viTri(tho, false);
        cout << "Tho: " << tho << "\n";
    }
    if (rua >= 70) cout << "Rua thang.";
    if (tho >= 70) cout << "Tho thang.";
    
}
int main(){
    srand(time(NULL));
    chay();
}