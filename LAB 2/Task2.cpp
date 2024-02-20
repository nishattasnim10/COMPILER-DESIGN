#include <iostream>
using namespace std;

bool isValidIdentifier(string x) {

     if(isdigit(x[0]))
        {
        cout << "ERROR!! Variable name cannot start with a digit." << endl;
        return false;
      }

    for (char z : x) {

        if (!((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z') || z == '_' || (z >= '0' && z <= '9'))) {
            cout << "ERROR!! '" << z << "' is an invalid character for a variable name." << endl;
            return false;
        }
    }

    return true;
}

int main() {

    string variable;

    cout << "Enter a variable name: ";
    cin >>variable;

    if (isValidIdentifier(variable)) {
        cout<<"1" << endl;
    }
    else {
        cout<<"0" << endl;
    }

    return 0;
}

