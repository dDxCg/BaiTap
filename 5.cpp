#include <iostream>
#include <string>
using namespace std;

string nralEng(char chr){
    string nRal;
    switch(chr){
        case '1': nRal += "one ";
        break;
        case '2': nRal += "two ";
        break;
        case '3': nRal += "three ";
        break;
        case '4': nRal += "four ";
        break;
        case '5': nRal += "five ";
        break;
        case '6': nRal += "six ";
        break;
        case '7': nRal += "seven ";
        break;
        case '8': nRal += "eight ";
        break;
        case '9': nRal += "nine ";
        break;
    }
    return nRal;
}

string numToEng(string str){
    string engNum;
    if (str[0] != '0'){
        engNum = engNum + nralEng(str[0]) + "hundred ";
    }
    if (str[1] == '1'){
        switch (str[2])
        {
        case '0': engNum += "ten ";
        break;
        case '1': engNum += "eleven ";
        break;
        case '2': engNum += "twelve ";
        break;
        case '3': engNum += "thirteen ";
        break;
        case '4': engNum += "fourteen ";
        break;
        case '5': engNum += "fifteen ";
        break;
        case '6': engNum += "sixteen ";
        break;
        case '7': engNum += "seventeen ";
        break;
        case '8': engNum += "eighteen ";
        break;
        case '9': engNum += "nineteen"; 
        }
    }else{
        switch (str[1])
        {
        case '2': engNum += "twenty ";
        break;
        case '3': engNum += "thirty ";
        break;
        case '4': engNum += "fourty ";
        break;
        case '5': engNum += "fifty ";
        break;
        case '6': engNum += "sixty ";
        break;
        case '7': engNum += "seventy ";
        break;
        case '8': engNum += "eighty ";
        break;
        case '9': engNum += "ninety ";
        break;
        }
        engNum += nralEng(str[2]);
    }
    return engNum;
}


int main(){
    string numstr;
    cin >> numstr;
    string neg, posnum;
    if (numstr[0] == '-'){
        neg = "negative ";
        posnum = numstr.substr(1);
    }else posnum = numstr;
    int len = posnum.length();
    string str1, str2, str3;
    if (len <= 3){
        str3 = posnum;
        cout << numToEng(str3);
    }else if (len > 3 && len <= 6){
        str3 = posnum.substr(len - 3);
        str2 = posnum.substr(0,len - 3);
        cout << numToEng(str2) << "thousand " << numToEng(str3);
    }else{
        str3 = posnum.substr(len - 3);
        str2 = posnum.substr(3,3);
        str1 = posnum.substr(0, len - 6);
        cout << neg << numToEng(str1) << "million " << numToEng(str2) << "thousand " << numToEng(str3);
    }
}