#include "calculator.h"
#include <iostream>
#include <string>

using namespace std;

void help(){
    cout << "List of options:" << endl;
    cout << "--help -h Displays help message" << endl;
    cout << "--add -a Adds two numbers" << endl;
    cout << "--sub -s Subtracts two numbers" << endl;
    cout << "--mul -l Multiply two numbers" << endl;
    cout << "--div -d Divides two numbers" << endl;
}

void Calculator(string str, char delimiter){
    string o1 = "";
    string o2 = "";
    bool flag = false;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == delimiter){
            flag = true;
            continue;
        }
        if (!flag){
            o1 += str[i];
        }
        if (flag){
            o2 += str[i];
        }
    }
    if (delimiter == '+'){
        cout << str << endl;
        cout << stof(o1) + stof(o2) << endl;
    }
    if (delimiter == '-'){
        cout << str << endl;
        cout << stof(o1) - stof(o2) << endl;
    }
    if (delimiter == '*'){
        cout << str << endl;
        cout << stof(o1) * stof(o2) << endl;
    }
    if (delimiter == '/'){
        cout << str << endl;
        cout << stof(o1) / stof(o2) << endl;
    }
}