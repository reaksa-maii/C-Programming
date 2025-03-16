#include <iostream>
using namespace std;
void HelloWolrd(){
    cout << "Hello Wolrd";
}
void FindBiger(int a, int b){
    if(a>b){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}
int main()
{
    HelloWolrd();
    int i = 45;
    int n = 99;
    FindBiger(i,n);
    return 0;
}