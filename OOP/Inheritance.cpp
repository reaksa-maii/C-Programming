#include <iostream>
using namespace std;
class Student{
    private:
        string stuID;
    
    public:
        int a;
        void setID(string IDStudent){
            stuID = IDStudent;
        }
        string getID(){
            return stuID;
        }
    
    void StudentInfo(){
        cout << "Hello Student" << endl;
    }

};
class Student1{
    private:
        string stuID;
    
    public:
        int a;
        void setID(string IDStudent){
            stuID = IDStudent;
        }
        string getID(){
            return stuID;
        }
    
    void StudentInfo(){
        cout << "Hello Student" << endl;
    }

};

class Teacher: public Student{
    public:
        string myStudent;

    void StudentList(){
        cout << "This is my studnent" << myStudent <<endl;
    }
};

class HeadDepartment: public Teacher{
        public: 
            int a = 34;
    void Geting(){
        cout << "Head";
    }
};
class Dean: public HeadDepartment{

};
int main(){
    HeadDepartment  headDepart;
    Teacher teacher;
    headDepart.myStudent = "reaksa";
    headDepart.setID("009");
    cout << headDepart.myStudent << endl;
    cout << headDepart.getID();
    return 0;
}