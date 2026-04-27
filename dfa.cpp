#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter binary string: ";
    cin >> input;

    int state = 0;

    for(char ch : input) {
        if(state == 0) {
            if(ch == '0') state = 1;
            else state = 0;
        }
        else if(state == 1) {
            if(ch == '0') state = 1;
            else state = 2;
        }
        else if(state == 2) {
            if(ch == '0') state = 1;
            else state = 0;
        }
    }

    if(state == 2)
        cout << "Accepted (ends with 01)";
    else
        cout << "Rejected";

    return 0;
}