#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temperature = 0;

    for (int i = 0; i < n; i++) 
    {
        string command;
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

    cout << temperature << endl;
    return 0;
}
