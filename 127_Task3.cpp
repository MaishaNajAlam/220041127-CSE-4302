#include<iostream>

using namespace std;

class BankAccount{
   private:
        int acc_num;
        string acc_holder_name;
        string acc_type;
        float current_balance;
        float min_balance;

        static int current_account,tot_account,tot_tax;



    public:
        BankAccount(int x,string str1,string str2,float y,float z):acc_num(x),
        acc_holder_name(str1),acc_type(str2),current_balance(y),min_balance(z){
            current_account++;
            tot_account++;
        }

        void show_info(){
            cout<<"\nAccount Number: "<<acc_num<<endl;
            cout<<"Account Holder name: "<<acc_holder_name<<endl;
            cout<<"Account Type: "<<acc_type<<endl;
            cout<<"Current Balance is: "<<current_balance<<endl;
            cout<<"Minimum Balance : "<<min_balance<<endl;
        }

        void Show_balance(){
             cout<<"Current Balance is: "<<current_balance<<endl;
        }
        float get_balance()const {
            return current_balance;
        }

        void deposit(int value){
            if (value<=0){
                cout<<"Amount can not be deposited."<<endl;
                return;
            }
            current_balance=current_balance+value;

        }
        void withdrawal(int value){
            int a=current_balance-value;
            if(a<min_balance) {
                cout<<"Amount will be less than Minimum Balance."<<endl;
                return;
            }
            current_balance=current_balance-value;
        }
        void giveInterest(float percen=0.0){
            float interest=(current_balance *percen)/100;
            float tax=interest*0.1;
            tot_tax+=tax;

            current_balance+=(interest-tax);
        }
        static int getCurrentaccountNo(){
            return current_account;
        }
        static int getTotalAccountNo(){
            return tot_account;
        }
        static int getTotalTax(){
            return tot_account;
        }

        ~BankAccount(){
            cout<<"\nAccount of "<<acc_holder_name<<" with account no "<<acc_num<<" is destroyed with a balance BDT "<<current_balance<<endl;

        }
};

int BankAccount::current_account=0;
int BankAccount::tot_account=0;
int BankAccount::tot_tax=0;

void display_stat(){
    cout<<"\nTotal Number of Current Bank_Account:"<<BankAccount::getCurrentaccountNo()<<endl;
     cout<<"Total Number of Bank_Account:"<<BankAccount::getTotalAccountNo()<<endl;
     cout<<"Total Source Tax Collected :"<<BankAccount::getTotalTax()<<endl;
}

BankAccount Larger(const BankAccount A, const BankAccount B){
    if(A.get_balance()>B.get_balance()){
        return A;
    }
    else return B;
}

int main(){

    BankAccount acc1(1,"Maisha","Current",10000,500);
    BankAccount acc2(2,"Mormo","savings",50000,1000);

    acc1.show_info();
    acc2.show_info();

    cout<<endl;

    acc1.deposit(5000);
    cout<<"After Deposit ";
    acc1.Show_balance();
    acc1.withdrawal(1000);
    cout<<"After Withdrawal ";
    acc1.Show_balance();
    

    acc1.giveInterest(15.0);
     cout<<"After Addition of Tax ";
    acc1.Show_balance();

    display_stat();

    

    BankAccount larger=Larger(acc1,acc2);
    larger.show_info();

}