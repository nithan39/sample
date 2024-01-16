#include<iostream>
using namespace std;
class Employee{
    public:
    string company="ABC LIMITED";
    private:
    int id;
    string name;
    public:
    Employee(int empid,string empName): id{empid},name{empName}{}
    void display(){
        cout<<"Employee Name :"<<name<<endl;
        cout<<"Employee ID :"<<id<<endl;
    }


};
int main(){
    Employee e1(10,"NITHAN");
    e1.display();

}