#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void checkKeywods(string id) {
    string myt;
    ifstream MyReadFile("Keywords.txt");
    while (MyReadFile >> myt) {
        if (id == myt) {
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" << endl;
}

bool isValidIdentifier(string x) {
    if (isdigit(x[0])) {
        cout << "ERROR!! Variable name cannot start with a digit." << endl;
        cout<<" 0 "<< endl;
        return false;
    }

    for (char z : x) {
        if (!((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z') || z == '_' || (z >= '0' && z <= '9'))) {
            cout << "ERROR!! '" << z << "' is an invalid character for a variable name." << endl;cout<<" 0 "<< endl;
            return false;
        }
    }

    return true;
}

int main() {
    string variable;
    cout << "Enter a variable name: ";
    cin >> variable;

    if (isValidIdentifier(variable)) {
        checkKeywods(variable);
    }

    return 0;
}
