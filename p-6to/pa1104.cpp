#include <iostream>

using namespace std;
class alpha{
    int x;
    public:
    alpha(int a){
        x=a;
        cout<<"alpha is called "<<endl;
    }
    void show_x(){
        cout<<"x = "<<x<<endl;
    }
    
} ;

class beta{
    int y;
    public:
    beta(int b){
        y=b;
        cout<<"beta is called "<<endl;
    }
    void show_y(){
            cout<<"y = "<<y<<endl;
        }
};
class gamma:public beta,public alpha{
    int m,n;
    public:
    void show_mn(){
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }
    gamma(int a,int b,int c,int d):alpha(a),beta(b){
                m=c;
                n=b;
                cout<<"gamma is called"<<endl;
    }

};
int main(){
system("CLS");
    gamma g(10,20,30,40);
        g.show_mn();
        g.show_y();
        g.show_x();
        return 0;
}
