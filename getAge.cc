#include <iostream>
using namespace std;

int main() {
    int age;
    int birthyear;

    cout << "Hi! Please enter your age: ";
    cin >> age;
    cout << "Enter year of birth:";
    cin >> birthyear;

    cout << "You are born in " << birthyear << ", so you are " << age << " years old\n";
    return 0;
}