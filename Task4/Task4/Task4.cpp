#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of commands you want: ";
    cin >> n;

    int temperature = 0;

    for (int i = 0; i < n; i++) 
    {
        string command;
        cout << "Enter the command: ";
        cin >> command;

        if (command == "++T" || command == "T++") 
        {
            temperature++;
        }
        else if (command == "--T" || command == "T--") 
        {
            temperature--;
        }
    }

    cout << "The final temprature: " << temperature << endl;
    return 0;
}
