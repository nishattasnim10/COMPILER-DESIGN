#include <iostream>
using namespace std;

bool isNumericConstant(string x)
 {
    for (char c : x) {
        if (c<'0' || c>'9') {
            return false;
        }
    }
    return true;
}

int main()
{
    string z;

    cout<<"Input: ";cin>>z;

    if (isNumericConstant(z))
    {
        cout<<"Numeric Constant."<<endl;
    }
    else
    {
        cout<<"Not Numeric."<<endl;
    }

    return 0;
}
