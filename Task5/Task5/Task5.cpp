#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++) 
    {
        int digit = x[i] - '0';  
        int transformed = 9 - digit;  

        
        if (i == 0 && transformed == 0) 
        {
            continue;  //don't transform if it results in leading zero
        }

        if (transformed < digit) 
        {
            x[i] = transformed + '0';  //convert back to character
        }
    }

    cout << x << endl;  //print the final transformed number
    return 0;


}
