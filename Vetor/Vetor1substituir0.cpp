
#include <iostream>
using namespace std;

int main()
{
	float x[10];
	
	
	for (int i = 0; i <= 10; i++) {
		cin >> x[i];

	}

	for (int i = 0; i <= 10; i++) {
		if (x[i] <= 0) {
			x[i] = 1;
		}

		cout << "x[" << i << "]" << " = " << x[i] << endl;
	}

	system("PAUSE");
		

	

	return 0;

	
}

