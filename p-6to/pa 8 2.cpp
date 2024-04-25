#include <iostream>
using namespace std;
class time{
    int hr,mi;
    public:
    void settime(int a,int b){
        hr=a;
        mi=b;
    }
    void display(){
        cout<<"time "<<hr<<":"<<mi<<endl;
    }
    time addtime(time t)        {
        time res;
        res.hr=t.hr+hr;
        res.mi=t.mi+mi;
        if(res.mi>=60){
            res.mi=res.mi-60;
            res.hr++;
        }
        return res;
    }

};
int main(){
    time t1,t2,t3;
    t1.settime(5,32);
    t1.display();
    t2.settime(4,44);
    t2.display();
    t3=t2.addtime(t1);
    t3.display();
}