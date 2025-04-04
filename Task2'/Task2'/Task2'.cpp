#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of projects: ";
	cin >> n;
	
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cout << "Vote for each project: ";
		cin >> a;
		cout << " ";
		cin >> b;
		cout << " ";
		cin >> c;
		if (a+b+c>=2)
		{
			count++;
		}
		
		
	}
	
	cout << "Accepted projects: " << count;
}
