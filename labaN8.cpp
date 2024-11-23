#include <iostream>
#include <string>

using namespace std;

string removeCharacter(const string& input, char ch) 
{
    string result;
    for (char current : input) 
    {
        if (current != ch) 
        {
            result += current;
        }
    }
    return result;
}

int main() 
{
    string userInput;
    char symbolToRemove;

    cout << "Enter the string: ";
    getline(cin, userInput);

    cout << "Enter the character to delete: ";
    cin >> symbolToRemove;

    string result = removeCharacter(userInput, symbolToRemove);
    cout << "Result: " << result << endl;

    return 0;
}

