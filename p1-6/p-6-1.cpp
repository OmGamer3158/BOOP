#include<iostream>
using namespace std;
class employee{
    char empname[30];
    int empcode;
    public:
    void getdata();
    void display();
};
    void employee::getdata(){
        cout << "Enter employee name:"<<empname;
        cin >> empname;
        cout << "Enter employee code:"<<empcode;
        cin >> empcode;
    }
    void employee::display(){
        cout << "Employee name:"<<empname<<endl;
        cout << "Employee code:"<<empcode<<endl;
    }
    int main()
    {
        employee emp[6];
      int i;
        for(i=0; i<6; i++){
            emp[i].getdata();
    }
    for(i=0; i<6; i++){
        emp[i].display();
    }
    return 0;
    }