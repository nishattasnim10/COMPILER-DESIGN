#include <iostream>
#include <string>

using namespace std;

int main() {
    // Define an array of characters
    char arr1[] = {'N', 'i', 's','h','a','t'};
    char arr2[] = {'T', 'a', 's','n','i','m'};

    // Concatenate characters from the array into a string
    string fName;
    for (int i=0; i<sizeof(arr1)/sizeof(arr1[0]); i++) {
        fName += arr1[i];
    }

    string lName;
    for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]);i++) {
        lName += arr2[i];
    }

    string r= fName+" "+lName;

    cout << "First name: "<<fName<<endl;
    cout<<"Last name:  "<<lName<<endl;
    cout<<"Full Name: "<<r;

    return 0;
}

