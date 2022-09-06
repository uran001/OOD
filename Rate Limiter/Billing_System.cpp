#include<bits/stdc++.h>

class Billing{

    User user;
    list<Items> cart;
    int total_bill = 0;
    Payment payment;

    private:
        void calculate_bill(){
            for(auto item: cart){
                total_bill += (item.price - item.price * item.discount) * item.quantity;
            }
        }

        bool create_PaymentMethod(){

            return false;
        }

        bool Make_Payment(){
            if(payment.doPayment(total_bill)){
                cout << payment.status << endl;
                return true;
            }
            return false;
        }
   

};


class User{
    
    string Name;
    PhoneNumber phone;
    Email email;
    Address address;
    PaymentMethod payment_method;
    public:
        void create_user(){
            cout << "Enter your Name: ";
            cin >> Name;

            phone.create_phoneNumber();
            email.create_Email();
            address.create_Address();
            payment_method.create_method();
            
        }
};

class PhoneNumber{
    string CountryCode;
    string number;
    public:
        void create_phoneNumber(){
            cout << "Enter your country code: ";
            cin >> CountryCode;
            cout << "Enter your number: " << CountryCode << "-";
            cin >> number;
        }
};
class Email{
    string email;
    bool validate(){
        // validate the email;
        return false;
    }

    public: 
        void create_Email(){
            cout << "Enter your Email: "; 
            cin >> email;
        }
};

enum ItemCategory{
    CLOTHES,
    SHOES,
    UNDERWEARS,
    KIDS,
    SPORT
};
class Items{
    public:

        string Name;
        int id;
        double price;
        int quantity;
        float discount;
};

enum PaymentMethod{
    CREDITCARD,
    DEBIDCARD,
    CASH,
    CHEQUE
};
enum PaymentStatus{
    PENDING, 
    DONE,
    FAILED
};
enum available_countries{
    // list of all available countries for shipment 
};

class Payment{
    public:
        PaymentMethod method;
        PaymentStatus status;

        public:

            void create_method(){

                    cout << "CHOOSE ONE OF THE PAYMENT METHODS\n";
                    cout << "1. " << PaymentMethod::CREDITCARD << endl;
                    cout << "2. " << PaymentMethod::DEBIDCARD << endl;
                    cout << "3. " << PaymentMethod::CASH << endl;
                    cout << "4. " << PaymentMethod::CHEQUE << endl;
                    int id; 
                    cin >> id;

                    switch(id){
                        case 1: method = PaymentMethod::CREDITCARD;
                        case 2: method = PaymentMethod::DEBIDCARD;
                        case 3: method = PaymentMethod::CASH;
                        default: method = PaymentMethod::CHEQUE;
                    };  

            }
            bool doPayment(float bill){
                // try to make a payment for $bill
                return false;
            }
};

class Address{
    available_countries country;
    string city;
    string street;
    int zipcode;

    public:
        void create_Address(){
            // Able to creat valid Address
        }
};

using namespace std;
int main(){
    
    

    return 0;
}