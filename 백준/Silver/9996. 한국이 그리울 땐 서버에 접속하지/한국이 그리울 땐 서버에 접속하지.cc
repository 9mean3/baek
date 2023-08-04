#include<iostream>
using namespace std;

int main() {
	int n;
	string pattern;
	cin >> n >> pattern;

	string fw, bw; int f = 0;
	for (int i = 0; i < pattern.size(); i++)
	{
		if (pattern[i] == '*') {
			f++;
			continue;
		}
		if (!f)
			fw += pattern[i];
		else {
			bw += pattern[i];
		}
	}
	//cout << fw << ' ' << bw << endl;

	for (int i = 0; i < n; i++)
	{
		string filename;
		cin >> filename;

		bool isf = false;
		int fidx = 0;
		int bidx = 0;

		if (filename.size() < bw.size() + fw.size())isf = true;
		for (int j = 0; j < filename.size(); j++)
		{
			if (j < fw.size()) {
				if (filename[j] != fw[fidx]) {
					isf = true;
				}
				fidx++;
			}

			if (j >= filename.size() - bw.size()) {
				//cout << filename[j] << ' ' << bw[bidx] << "\n";
				if (filename[j] != bw[bidx]) {
					isf = true;
				}
				bidx++;
			}
		}

		if (isf)
			cout << "NE\n";
		else
			cout << "DA\n";
	}
}