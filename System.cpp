
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank_sys {

	// Private variables used inside class
private:
	string name;
	long long accnumber;
	char type[10];
	long long amount = 0;
	long long total = 0;

	// Public variables
public:
   
	// Function to set the person's data
	void setvalue()
	{
		cout << "Enter name\n";
        cin>>name;
		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> total;
	}

	// Function to display the required data
	void show_info()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << total << endl;
	}

	// Function to deposite the amount in ATM
	void deposite_bal()
	{
		cout << "\nEnter amount to be deposited\n";
		cin >> amount;
	}

	// Function to show the balance amount
	void show_bal()
	{
		total = total + amount;
		cout << "\nTotal balance is: " << total;
	}

	// Function to withdraw the amount in ATM
	void withdraw_amt()
	{
		int a, available_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		available_balance = total - a;
		cout << "Available Balance is" << available_balance;
		
	}
};

// Driver Code
int main()
{
	// Object of class
	Bank_sys system;

	int choice;

	// Infinite while loop to choose
	// options everytime
	while (1) {
		cout << "\n**************************"
			<< "****************************"
			<< "***WELCOME******************"
			<< "****************************"
			<< "*********\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "
			<< "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. deposite_bal Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;

		// Choices to select from
		switch (choice) {
		case 1:
			system.setvalue();
			break;
		case 2:
			system .show_info();
			break;
		case 3:
			system.deposite_bal();
			break;
		case 4:
			system.show_bal();
			break;
		case 5:
			system.withdraw_amt();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}
