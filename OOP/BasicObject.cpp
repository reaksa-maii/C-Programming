#include <iostream>
using namespace std;
class MyClass {
    private: 
        int scor = 1;

    public:
        string stuID;
        string grade;
        float GPA;
        float schoolashipPart = 50;
        void HelloWolrd();

        MyClass(string StuID, string Grade, float gpa){
            stuID=StuID;
            grade=Grade;
            GPA=gpa;
        };

    void Department(string deprtName){
        cout << "Department: "<< deprtName << endl;
    }
    int Payment(float money){
        return money * (schoolashipPart / 100);
    }
    int checkScore(int score){
        return score + scor;
    }
};
void MyClass::HelloWolrd(){
    cout << "CODE-STUDENT: "<< endl;
}
int main(){
    MyClass iteClasss("0012","A",3.56);
    iteClasss.grade = "001";
    cout << iteClasss.GPA << endl;
    cout << iteClasss.grade << endl;
    cout << iteClasss.stuID << endl;
    iteClasss.Department("ITE");
    cout <<  iteClasss.checkScore(10);
    return 0;
}