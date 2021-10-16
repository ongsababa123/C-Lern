#include <iostream>
using namespace std;
#include <string>

bool isPalindrome(string msg);
int main()
{
    string msg;
    bool status;
    cout << "Enter text : ";
    cin >> msg;
    cout << endl;
    status = isPalindrome(msg);
    if (status == 1)
    {
        cout << "Your text is Palindrome.";
    }
    else if (status == 0)
    {
        cout << "Your text is not Palindrome.";
    }

    return 0;
}

bool isPalindrome(string msg)
{
    bool status;
    const int Array_Size = msg.length();
    string text[Array_Size];

    for (int i = 0; i < Array_Size / 2; i++)
    {
        text[i] = msg.substr(i, 1);
        if (text[i] == msg.substr(msg.length() - i - 1, 1))
        {
            cout << text[i] << " = " << msg.substr(msg.length() - i - 1, 1) << endl;
            status = true;
        }
        else if (text[i] != msg.substr(msg.length() - i - 1, 1))
        {
            cout << text[i] << " = " << msg.substr(msg.length() - i - 1, 1) << endl;
            return status = false;
            break;
        }
    }

    return status;
}