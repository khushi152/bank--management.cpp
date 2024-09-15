#include <iostream>
#include <string>

using namespace std;

class Account {
public:
    void login() {
        string real_id = "khushi";
        int real_password = 1301;
        int account_balance = 50000;
        string id;
        int password;

        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter password: ";
        cin >> password;

        if (id == real_id && password == real_password) {
            cout << "Login successful!" << endl;
            int choice;

            do {
                cout << "1. Check balance" << endl;
                cout << "2. Withdraw" << endl;
                cout << "3. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "Your balance is: " << account_balance << endl;
                        break;
                    case 2: {
                        double amount;
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        if (amount > account_balance) {
                            cout << "Insufficient balance!" << endl;
                        } else {
                            account_balance -= amount;
                            cout << "Withdrawal successful!" << endl;
                            cout << "Now your balance is: " << account_balance << endl;
                        }
                        break;
                    }
                    case 3:
                        cout << "Exiting..." << endl;
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }
            } while (choice != 3);

        } else {
            cout << "Invalid ID or password!" << endl;
        }
    }
};

int main() {
    Account acc;
    acc.login();
    return 0;
}
