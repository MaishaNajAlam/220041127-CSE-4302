#include <iostream>
#include<string>
#include "savingsaccount.h"
#include<cstdlib>
#include<ctime>

using namespace std;



void EditInformationByKeyboard(SavingsAccount& s) {
    string s1, s2;
    double x, y;

    cout << "Enter Account Name: ";
    cin.ignore();
    getline(cin, s1);

    cout << "Enter Address: ";
    getline(cin, s2);

    cout << "Enter Annual Interest rate: ";
    cin >> x;

    cout << "Enter Current Balance: ";
    cin >> y;

    s.set_name(s1);
    s.set_address(s2);
    s.set_rate(x);
    s.set_balance(y);
}

void generateInformationIntoRandom(SavingsAccount& a)
{

    string name[10]= {"Iqura","Maisha","Saeera","Safa","Mushfirat","Ahona","Juhana","Aurthi","Mormo","Nabiha"};
    string addressParts[10] = {"Dhaka", "Street", "Block", "House", "Uttara", "Gulshan", "Banani", "Dhanmondi", "Mirpur", "Farmgate"};
    string n=name[rand()%10] +" "+name[rand()%10];
    string randomAddress = addressParts[rand() % 10] + " " + addressParts[rand() % 10] + " " + addressParts[rand() % 10] + " " + addressParts[rand() % 10];

    double randomrate=2.0+(rand()%21) * 0.1;

    double randomBalance=1000+ rand()%49001;


    a.set_name(n);
    a.set_address(randomAddress);
    a.set_balance(randomBalance);
    a.set_rate(randomrate);



}

void ShowInterestAll(SavingsAccount ar[],int size)
{

    int period;
    cout << "Enter period in months: ";
    cin>>period;

    char ch;

 cout << "Confirm disbursement? (y/n): ";
    cin>>ch;

    if(ch=='y')
    {
        for(int i=0; i<size; i++)
        {
            ar[i].disburseInterest(period);
            cout<<"Account name: "<<ar[i].get_name()<<endl;
            cout<<"interest: "<<ar[i].calculateInterest(period)<<endl;
        }
    }

}


void ShowAllAlphabetically(SavingsAccount ar[], int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ar[j].get_name() > ar[j + 1].get_name()) {
                swap(ar[j], ar[j + 1]);
            }
        }
    }


    for (int i = 0; i < size; i++) {
        cout << "Account Name: " << ar[i].get_name() << ", Current Balance: " << ar[i].get_balance() << endl;
    }
}
int main()
{
    SavingsAccount Account[100];

    for(int i=0; i<5; i++)
    {
        cout << "\n--- Enter details for Account " << (i + 1) << " ---\n";
        EditInformationByKeyboard(Account[i]);
    }

    for(int i=5; i<100; i++)
    {
        generateInformationIntoRandom(Account[i]);
    }

    ShowInterestAll(Account, 100);


    cout << "\nAccounts Sorted Alphabetically by Name:\n";
    ShowAllAlphabetically(Account, 100);

}
