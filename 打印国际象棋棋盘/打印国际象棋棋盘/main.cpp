#include<iostream>
#include<string>
using namespace std;
int main() {
	int i;
	int j;
	int x;
	string whiteRow = "        ";
	string blackRow = "********";
	string R1 = whiteRow + blackRow + whiteRow + blackRow + whiteRow + blackRow + whiteRow + blackRow;
	string R2 = blackRow + whiteRow + blackRow + whiteRow + blackRow + whiteRow + blackRow + whiteRow;
	for (i = 0; i <= 64;i+=16) {
		for (j = 0; j < 8;j++) {
			cout << R1 << endl;
		}
		for (x = 0; x < 8;x++) {
			cout << R2 << endl;
		}
	}
	system("pause");
	return 0;
}