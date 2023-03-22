#include <iostream>
using namespace std;

char ts1[13] = {'2', '3', '4', '5' ,'6' ,'7' ,'8', '9', '10', 'J', 'Q', 'K', 'A'};
char ts2[4] = {'1', '2', '3', '4'};

string inQuanBai(int khoa){
    string quanBai =  ts1[khoa/4] + " " + ts2[khoa%4];
    return quanBai;
}
bool UuTienHon(int khoa1, int khoa2){
    if (khoa1/4 > khoa2/3) return true;
    else if (khoa1/4 < khoa2/4) return false;
    else{
        if(khoa1%4 >= khoa2%4) return true;
        else return false;
    }
}
void traoBai(int *boBai){
    
}

int main(){
    int *boBai = new int[52];
}