#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string titles[1000]; //string contains the names of the books
    int counts[1000] = { 0 }; //an array contains 100k int numbers, all numbers equal 0
    int size = 0; //helps to track the number of books added

    for (int i = 0; i < n; i++) //a loop to add and process the books
    {
        string name; //the name of the book
        cin >> name;

        bool found = false; //to verify if the book has been located or not

        for (int j = 0; j < size; j++) //a loop to verify if the book has been located or not in titles
        {
            if (titles[j] == name)
            {
                counts[j]++; //increase the count of this book in the catalog
                cout << name << counts[j] << endl; //print the book with the updated number
                found = true; //to prevent the book from being added again
                break; //to stop the loop because the book has been found
            }
        }

        if (!found)
        {
            titles[size] = name; //add the new book to the titles array
            counts[size] = 0; //initialize counts to 0 for a new book
            size++; //increase the size of books catalog
            cout << "OK" << endl; //print "OK" when a new book is added
        }
    }

    return 0;
}
