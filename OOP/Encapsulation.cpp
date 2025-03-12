#include <iostream>
using namespace std;
class Student{
    private:
        string stuID;
    
    public:
        void setID(string IDStudent){
            stuID = IDStudent;
        }
        string getID(){
            return stuID;
        }
    

};
int main(){

    Student student;
    student.setID("001");
    cout << student.getID() << endl;
    return 0;
}