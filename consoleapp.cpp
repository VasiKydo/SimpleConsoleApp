/******************************************************************************

-Simple console Application
-Create username and password
-Validate username and password
-Manage money 
-Order pizza from menu

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    string username;
    string password;
    double newbalance;
    cout << "Hello! Welcome to our App!" << endl;
    cout << "... Please create a new account ..." << endl;
    
    do 
    {
        cout << "Choose a username:" ;
        getline (cin, username);
        
        
    }while(username.length() <=6 || username.length() >=12);
    
    cout << "your username is succefully created!" << endl;
    
    cout << "Choose a password:" ;
    do {
        
        getline(cin, password);
        if (password.length() <=6 || password.length() >=20){
        cout << "Your password lenght mst be between 7 to 20 characters! Try again!" << endl;
        }
        
    }while (password.length() <=6 || password.length() >=20);
    
    cout << "Your password is succefully created!" << endl;
    
    cout << "Please Log-In" <<endl;
    cout << "Username:";
    string user;
    getline (cin, user);
    cout << "Password:";
    string pass;
    getline (cin, pass);
    
    while (username!=user || password !=pass) {
        cout << "Wrong username or password, please try again!" << endl;
        cout << "Username:";
        getline (cin, user);
        cout << "Password:";
        getline (cin, pass);
        
        
    }
    
    cout << "You are logged-in!!" <<endl;
    cout << "Please enter your information" << endl;
    cout << "Name:" ;
    string name;
    getline(cin, name);
    cout << "------------------" << endl;
    cout << "Surname:";
    string surname;
    getline (cin, surname);
    
    cout << "Thank you " << name << " !!" << endl;
    
    double balance = 5.00;
    cout << "Your balance is " << balance << endl;
    cout << "Do you want to add money?" << endl;
    string q1;
    getline (cin, q1);
     
    
    if (q1 == "yes" || q1 == "YES" || q1 == "y" ) {
        cout << "Enter the amount you want to add:" ;
        double add;
        cin >> add;
        newbalance = balance + add;
        cout << "Your new balance is " << newbalance << " dolars" <<endl;
    } else { 
    
        cout <<"You answered no!" << endl;
    } 
    
    
    cout << name << " would you like to eat pizza?" << endl;
    string q2;
    cin >> q2;
    
    if (q2 == "yes" || q2 == "y") {
        cout << "please select the kind of pizza you want to order!" << endl;
        string pizzatype[] = {"4 cheese", "margarita", "special", "with pinneaple", "chilly" };
        double pizzaprices[] = {4.00, 2.60, 5.10, 4.90, 5.00};
    
        cout << "1. " << pizzatype[0] << " ---> price:" << pizzaprices[0] << " dolars" <<endl;
        cout << "2. " << pizzatype[1] << " ---> price:" << pizzaprices[1] << " dolars" <<endl;
        cout << "3. " << pizzatype[2] << " ---> price:" << pizzaprices[2] << " dolars" <<endl;
        cout << "4. " << pizzatype[3] << " ---> price:" << pizzaprices[3] << " dolars" <<endl;
        cout << "5. " << pizzatype[4] << " ---> price:" << pizzaprices[4] << " dolars" <<endl;
        
        int q3;
        
        do {
            cout << "your choice is -->";
            
            cin >> q3;
        }while (q3 > 5);   
        
        if (q3 == 1) {
            double newprice1 = newbalance - pizzaprices[0];
            cout << "You just added a " << pizzatype[0] << " to your basket!" << endl;
            cout << "You need to pay ---> " << pizzaprices[0] << "dolars." << endl;
            cout << "In your account now you have:" << newprice1 << "dolars" <<endl;
        }else if (q3 == 2) {
            cout << "You just added a " << pizzatype[1] << " to your basket!" << endl;
            cout << "You need to pay ---> " << pizzaprices[1] << " dolars." << endl;
            cout << "In your account now you have:" << newbalance - pizzaprices [1] << "dolars" <<endl;
            
        }else if (q3 == 3) {
            cout << "You just added a " << pizzatype[2] << " to your basket!" << endl;
            cout << "You need to pay ---> " << pizzaprices[2] << " dolars." << endl;
            cout << "In your account now you have:" << newbalance - pizzaprices [2] << "dolars" <<endl;
        } else if (q3 == 4) {
            cout << "You just added a pizza " << pizzatype[3] << " to your basket!" << endl;
            cout << "You need to pay ---> " << pizzaprices[3] << " dolars." << endl;
            cout << "In your account now you have:" << newbalance - pizzaprices [3] << " dolars" <<endl;
        }else if (q3 == 5) {
            cout << "You just added a " << pizzatype[4] << " to your basket!" << endl;
            cout << "You need to pay ---> " << pizzaprices[4] << " dolars." << endl;
            cout << "In your account now you have:" << newbalance - pizzaprices [4] << " dolars" <<endl;
        } else {
            cout << "You didn't select a right choice! please try again!" << endl;
        }
        
    } else {
        cout << "You don't want to eat pizza today! See you next time!" << endl;
    }
    
    


    return 0;
}



