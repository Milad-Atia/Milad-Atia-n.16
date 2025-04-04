#include <iostream>
#include <cmath>
using namespace std;
//Milad Atia
int main()
{
    int n; //length of the garden
    int m; //width of the garden
    int a; //the side length of the square
    cout << "Enter the length of the garden:" << endl;
    cin >> n;
    cout << "Enter the width of the garden:" << endl;
    cin >> m;
    cout << "Enter the side length of the square" << endl;
    cin >> a; 
    //adding (a - 1) ensures we round up the division to cover any remainder.
    int h = (n + a - 1) / a; //number of flower beds in horizontal direction
    int v = (m + a - 1) / a; //number of flower beds in vertical direction
    int total_beds = h * v;
    cout << "The total number of flower beds required: " << total_beds << endl;

}

