#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
string Calculating(string a, string b)
{
    return a + b;
}
int main()
{
    int i;
    int j;
    cout << "Enter i:";
    cin >> i;
    cout << "Enter j:";
    cin >> j;
    if (i > j)
    {
        cout << "I is greater than j: " << i << endl;
    }
    else
    {
        cout << "J is greater ten i: " << j << endl;
    }
    return 0;
}