#include <iostream>
using namespace std;

int main(){
    	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
				continue;
			else if (arr[j] > arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	cout << arr[1];
    
}