#include<iostream>
using namespace std;

class Time{
    int hour, minutes;

    public:
    Time(){
        hour=0;
        minutes=0;
    }
    Time(int h, int m){
        hour = h;
        minutes = m;
    }
    Time(Time *t){
        this->hour=t->hour;
        this->minutes=t->minutes;
    }
    void show(){
        cout<<hour<<"Hour "<<minutes<<"Min "<<endl;
    }
    void subtract(Time *t){
        int mina = this->hour*60+this->minutes;
        int minb = t->hour*60+t->minutes;
        this->hour = (mina-minb)/60;
        this->minutes = (mina-minb)%60;
    }
    friend Time add(Time, Time);
    friend void display(Time);
};

Time add(Time t1, Time t2){
    Time t;
    t.hour = t1.hour+t2.hour + (t1.minutes+t1.minutes)/60;
    t.minutes = (t1.minutes+t2.minutes)%60;
    
    return t;
}

void display(Time t){
    cout<<t.hour<<"Hour "<<t.minutes<<"Min "<<endl;
}

int main(){
    Time t1(4,38), t2(6,29), t4;
    Time t3(t1);
    t4=add(t1,t2);
    t4.show();
    t3.subtract(&t2);
    display(t3);

    return 0;
}