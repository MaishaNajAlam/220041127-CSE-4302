#include<iostream>

using namespace std;

class Time
{
private:
    int hour, min, sec;

public:
    Time(int h=0,int m=0,int s=0){
        reset(h,m,s);
    }
    int hours()
    {
        return hour;
    }
    int minutes(){
        return min;
    }
    int seconds(){
        return sec;
    }
     void reset(int h, int m, int s) {
        if (h >= 0 && h < 24)
            hour = h;
        else
            hour = 0;

        if (m >= 0 && m < 60)
            min = m;
        else
            min = 0;  

        if (s >= 0 && s < 60)
            sec= s;
        else
            sec= 0;  
    }
    void advance(int h,int m,int s){
        sec=sec+s;
        min+=(sec/60);
        sec=sec%60;

        min=min+m;
        hour+=(min/60);
        min=min%60;

        hour=hour+h;
        if(hour>=24) hour=0;

    }

    void print(){
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
};

int main(){
    Time t1;

    t1.reset(20,30,40);
    cout<<"Initial Time: ";
    t1.print();

    t1.advance(0,2,15);
    cout<<"Afer 2 Minutes, and 15 Second :";
    t1.print();

    t1.advance(4,0,55);
    cout << "After Advancing 4 Hour,55 Seconds: ";
    t1.print();

    

}

