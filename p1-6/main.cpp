#include<iostream>
using namespace std;

class Employee{
    private:
        char Empname[30];
        int Empcode;
    public:
        void getdata();
        void display();
};

void Employee::getdata()
{
    cout<<"Enter Employee name: ";
    cin>>Empname;
    cout<<"Enter Employee Code: ";
    cin>>Empcode;
}

void Employee::display()
{
    cout<<"Employee name: "<<Empname<<endl;
    cout<<"Employee Code: "<<Empcode<<endl;
}
int main()
{   
    int j;
    cout<<"Enter Employee Total Number = ";
    cin>>j;
    Employee emp[j];
    for(int i=0;i<j;i++){
        emp[i].getdata();
    }
    for(int i=0;i<j;i++){
        emp[i].display();
    }
    return 0;
}
