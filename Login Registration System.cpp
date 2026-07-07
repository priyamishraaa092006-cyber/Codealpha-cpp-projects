#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    string username, password;
    cout << "\n===== User Registration =====\n";
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);
    file << username << " " << password << endl;
    file.close();

    cout << "\nRegistration Successful!\n";
}

void loginUser() {
    string username, password, u, p;
    bool found = false;

    cout << "\n===== User Login =====\n";
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream file("users.txt");
    while (file >> u >> p) {
        if (u == username && p == password) {
            found = true;
            break;
        }
    }
    file.close();

    if (found)
        cout << "\nLogin Successful!\n";
    else
        cout << "\nInvalid Username or Password!\n";
}

int main() {
    int choice;
    do {
        cout << "\n===== Login & Registration System =====\n";
        cout << "1. Register\n2. Login\n3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice){
            case 1: registerUser(); break;
            case 2: loginUser(); break;
            case 3: cout << "Thank You!\n"; break;
            default: cout << "Invalid Choice!\n";
        }
    } while(choice != 3);

    return 0;
}
