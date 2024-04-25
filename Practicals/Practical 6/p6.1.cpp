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
    int i,n;
    employee emp[n];
    
    cout<<"Enter value of n:";
    cin>>n;  
    for(i=0;i<n;i++){
        emp[i].getdata();
    }
    for(i=0;i<n;i++){
    emp[i].display();
    }
}
