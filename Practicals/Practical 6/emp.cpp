#include<iostream>
using namespace std;

class employee{
    char empname[20];
    int empcode;
    public:
    void getdata();
    void display();
    
};
void employee::getdata()
{
    cout<<"enter employee name :";
    cin>>empname;
    cout<<"enter employee code :";
    cin>>empcode;
}
void employee::display ()
{
    cout<<"employee name :"<<empname<<endl;
    cout<<"employee code :"<<empcode<<endl;

}
int main(){
    employee emp[6];
    int i;
   
    for(i=0;i<6;i++){
        emp[i].getdata();
    }
    for(i=0;i<6;i++){
    emp[i].display();
    }
}
