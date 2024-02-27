#include <iostream>
using namespace std;
class person{
    string firstname;
    string lastname;
    char middleInitial;
    string title;
    
    protected:
        void modifyTitle(const string &); //the argument can't be touched
    public:
        person();
        person(const string &, const string &, char, const string &);
        ~person(){cout << "Destructor called";}
        const string & getFirstName() const{return firstname;}
        const string & getLastName() const{return lastname;}
        const string & getTitle() const{return title;}
        void print() const;
        void IsA() const;
        void greeting(const string &) const;
};
void person::IsA() const{
    cout<< "Person\n";
}
void person::modifyTitle(const string & Title){ //why initializer list not working here
    title = Title;
}

//QUESTION -  why in multilevel inheritence the base's protected is private in all the level classes

class student: public person{
    float gpa; // why can't we initialize vars here
    //float need not be passed as reference as float only has 4 bites of memory unlike objects like string which is memory intense
    string currentCourse;
    const string studentId;
    static int numStudents;
    public:
        student();

        student(const string & firstName, const string &lastName, char middle, const string &Title,
        float GPA, const string & currentcourse, const string & studentID)
        :person(firstName, lastName, middle, Title),gpa(GPA), currentCourse(currentcourse),
        studentId(studentID){}

        ~student(){cout << "Destructor called for student";}
        float getGpa() const;
        const string & getCurrentCourse() const;
        const string & getStudentID() const;
        static int getNumberStudents();
        void setCurrentCourse(const string &);
        void earnPhD();
        void print() const;
        void IsA() const;
};
class test{};

void student::IsA() const{
    cout<< "Student\n";
}
void student::earnPhD(){
    modifyTitle("Dr.");
}

int main(){
    student s1("Abhi", "Jeet", '_', "Mr.", 3.5, "C++", "1234");
    student s2(s1);
    student* s = new student[4]; //array of studs
    person * p = new person;     // one person
    //delete s, p;
    p = new student;  //NOTE -  student "is a" person . Now person classes will be considered over student since OG pointer type is person. But we can change this, will see in next class.
}

//FIXME - LATE BINDING
