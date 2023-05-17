#include <iostream>
using namespace std;

int main(){
int arr[5], avr = 0;
for (int i = 0; i < 5; i++)
{
	cin >> arr[i];
	avr += arr[i];
}
avr /= 5;
for (int i = 0; i < 5; i++)
{
	for (int j = 0; j < 5; j++)
	{
		if (j == 0)
			continue;
		else if (arr[j] > arr[j - 1]) {
			swap(arr[j], arr[j - 1]);
		}
	}
}
cout << avr << '\n' << arr[2];
}