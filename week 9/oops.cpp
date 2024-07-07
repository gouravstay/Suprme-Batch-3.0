#include<iostream>
#include<string>

using namespace std;

class Student{

    public:
    //add atttibutes
    int id;
    int age;
    string name;
    int nos;

// constructor
Student(){
    cout << "Student Defalut ctor called " <<endl;
}
//Parameterised constructor 

Student (int id, int age, string name, int nos){
    cout << " Studnent Parameterised constructor called " << endl;
}
// Behaviour / Methods / Function
void study(){
    cout << this->name << " Studing " << endl;
}

void bunk(){

    cout  << this->name  << " Bunking " << endl;
}

void sleep(){

cout << this->name << "Sleeping " << endl;

}
// disstructor
~Student(){
    cout << "Student Defalut dtor called " <<endl;
    }
};

int main(){

Student A;
A.id  = 1;
A.name = "Rahul";
A.nos = 6;
A.age = 15;

A.study();


Student B;
B.id  = 2;
B.name = "Rehan";
B.nos = 5;
B.age = 15;

B.bunk();

 return 0;
}