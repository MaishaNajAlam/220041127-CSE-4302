#include<iostream>

using namespace std;

class calculator{
    private:
        int current_value;

        int get_value(){ 
            return current_value;
        }
        void set_value(int x){
            current_value=x;
        }

    
    public:
        calculator(){
            current_value=0;
        }
        calculator(int val){
            current_value=val;
        }

        void add(int value){
            set_value(get_value() + value);
        }

        void subtract(int value){
            set_value(get_value() - value);
        }
        void multiply (int value){
            set_value(get_value() * value);
        }

        int divideBy(int value){
            if(value==0){
                cout<<"Invalid arithmetic operation."<<endl;
                return 0;
            }
            int r=get_value()%value;
            set_value(get_value()/value);
            return r;

        }

        void clear(){
            set_value(0);
        }
        void display(){
            cout<<"Calculator display: "<<get_value()<<endl;
        }

        ~calculator(){
            cout<<get_value()<<endl;
            cout<<"Destructor of the Calculator object is called."<<endl;

        }

};

int main(){

    calculator c1;

    c1.add(10);
    c1.display();

    c1.add(7);
    c1.display();

    c1.multiply(31);
    c1.display();

    c1.subtract(42);
    c1.display();

    c1.divideBy(7);
    c1.display();

    c1.divideBy(0);
    c1.display();

    c1.add(3);
    c1.display();

    c1.clear();
    c1.display();

    


    

}