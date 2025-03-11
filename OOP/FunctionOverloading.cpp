#include <iostream>
using namespace std;
void Studnet(string stuName){
    cout << "Student name: "<<stuName<<endl;
}
void Studnet(int age){
    cout << "Student age: "<<age<<endl;
}

int main(){
    Studnet("reaksa");
    Studnet(24);
    return 0;
}