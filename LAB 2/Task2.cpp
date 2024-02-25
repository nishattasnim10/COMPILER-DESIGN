#include <iostream>
using namespace std;

int main()
{
    string x;

    cout << "Input: ";
    getline(cin,x);

    for (char c:x)
        {
        switch (c)
        {
            case '+' :
            case '-' :
            case '*' :
            case '/' :
            case '%' :
            case '=' :

            cout<<"Operator: "<<c<<endl;

            break;
        }
    }

    return 0;
}
