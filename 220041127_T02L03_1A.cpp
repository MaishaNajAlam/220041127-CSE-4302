#include<iostream>
using namespace std;

class Temperature
{
private:
    float Current_Temp,result_Temp;
    char unit1, unit2;


public:
    void assign(float Temp, char c1, char c2)
    {
        if(Temp>=0)  Current_Temp = Temp;
        else {
            cout<<"Invalid Temperature!"<<endl;
            return;
        }
        if (c1 == 'C' || c1 == 'F' || c1 == 'K' || c2 == 'C' || c2 == 'F' || c2 == 'K')
        {
            unit1 = c1;
            unit2 = c2;
        }
        else
        {
            cout << "Invalid Unit of temperature." << endl;
            return;
        }
    }
    void convert(){
        
        if(unit1=='C' && unit2=='F') result_Temp=Current_Temp*(9.0/5.0) +32;
        else if(unit1=='F' && unit2=='C') result_Temp=(Current_Temp-32)*(5.0/9.0);
        else if(unit1=='C' && unit2=='K') result_Temp=Current_Temp+ 273.15;
        else if(unit1=='K' && unit2=='C') result_Temp=Current_Temp- 273.15;
        else if(unit1=='F' && unit2=='K') result_Temp=(Current_Temp-32)*(5.0/9.0)+273.15;
        else if(unit1=='K' && unit2=='F') result_Temp=(Current_Temp-273.15)*(9.0/5.0) +32;
    }
    void print(){
        if(unit2=='C') cout<< "The temperature is "<<result_Temp<<" Celsius.";
        else if(unit2=='F') cout<< "The temperature is "<<result_Temp<<" Fahrenheit.";
        else if(unit2=='K') cout<< "The temperature is "<<result_Temp<<" Kelvin.";

    }
};

int main(){
    float temp;
    char unit,c_unit;

    Temperature t1;

  
    cout << "Enter Unit of Temperature which is to be converted (C/F/K): ";
    cin >> unit;
    cout << "Enter the Temperature to be converted: ";
    cin >> temp;
    cout << "Enter Unit of Temperature to which it is to be converted (C/F/K): ";
    cin >> c_unit;

    t1.assign(temp,unit,c_unit);
    t1.convert();
    t1.print();

    
}
    
