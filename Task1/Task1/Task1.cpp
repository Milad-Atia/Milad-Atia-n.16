#include <iostream>
#include <cmath>
using namespace std;
//Milad Atia
int main()
{
    int n; //length of the garden
    int m; //width of the garden
    int a; //the side length of the square
    cin >> n;
    cin >> m;
    cin >> a; 
    //adding (a - 1) ensures we round up the division to cover any remainder.
    int h = (n + a - 1) / a; //number of flower beds in horizontal direction
    int v = (m + a - 1) / a; //number of flower beds in vertical direction
    int total_beds = h * v;
    cout << total_beds << endl;

}

