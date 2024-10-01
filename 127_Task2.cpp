#include <iostream>

using namespace std;

class flight
{
private:
    int flight_num;
    string desti;
    float distance;
    float MaxFuel;

    double CalFuel()
    {
        if (distance <= 1000)
            return 500;
        else if (distance > 1000 && distance <= 2000)
        {
            return 1100;
        }
        else if (distance > 2000)
            return 2200;
    }

public:
    void FeedInfo()
    {
        cout << "Enter Flight Number: ";
        cin >> flight_num;
        cout << "Enter Destination: ";
        cin >> desti;
        cout << "Enter Distance: ";
        cin >> distance;
        cout << "Enter Max Fuel Capacity: ";
        cin >> MaxFuel;
    }

    void ShowInfo()
    {  
         cout<<endl;
        cout << "Flight Number: " << flight_num << endl;
        cout << "Flight Destination: " << desti << endl;
        cout << "Flight Distance: " << distance <<" Km"<<endl;
        cout << "Maximun Fuel Capacity: " << MaxFuel << " liters"<<endl;

        double value = CalFuel();
        if (value >= MaxFuel)
            cout << "Fuel capacity is fit for this flight distance" << endl;
        else
            cout << "Not sufficient Fuel Capacity for this flight." << endl;
    }
};

int main()
{
    flight f1;

    f1.FeedInfo();
    f1.ShowInfo();
}