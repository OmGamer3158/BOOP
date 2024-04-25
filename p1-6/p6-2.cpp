#include<iostream>

using namespace std;

class spi {
    char name[40];
    float spi;
    public:
float getdata() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the spi of the student: ";
        cin >> spi;
    }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Spi: " << spi << endl;
        }

     };


int main() {
    spi s[10];
    for(int i=0; i<10; i++){
        s[i].getdata();
    }
    float h_spi=s[0].getdata(); 

    for(int i=0; i<10; i++){
     if(s[i].getdata()>h_spi)
	 {
        h_spi=s[i].getdata();
    }
    }
    for(int i=0; i<10; i++){
        if(s[i].getdata()==h_spi){
        s[i].display();
        }
    }
    return 0;
}
