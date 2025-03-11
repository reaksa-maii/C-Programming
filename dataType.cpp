#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
string Calculating(string a, string b){
    return a + b;
}
int main(){
    int i = 45;
    float f = 34.66;
    double d = 3444.34;
    char ch = 'G';
    string str = "Hello Cpp bacsic";
    bool b = false;

    cout << "integer number:" << i << endl;
    cout << "floating number:" << f << endl;
    cout << "dobule  number:" << d << endl;
    cout << "char number:" << ch << endl;
    cout << "string number:" << str << endl;
    cout << "boolean number:" << b << endl;
    
    //String template and casting
    string str1;
    string str2;
    cout << "Enter number1: ";
    cin >> str1;
    cout << "Enter number2: ";
    cin >> str2;
    cout << Calculating(str1,str2);
    return 0;
}