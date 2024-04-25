#include<iostream>
using namespace std;                                                        
class coplex{
    float real,imag;
    
    public:
    void setnum(float a,float b) {
        imag = a;
        real = b;

    }
    void display(){
        cout<<"complex number:- "<<imag<<"i + "<<real<<endl;
    }
    friend void addcoplex(coplex, coplex);
};
void addcoplex(coplex a,coplex b){
    coplex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    c.display();
}
int main(){
    coplex c1,c2;
    c1.setnum(3,4);
    c1.display();
    c2.setnum(5,8);
    c2.display();
    addcoplex(c1,c2);
}