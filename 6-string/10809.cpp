#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int size = s.size();
	int arr[27];
	fill_n(arr, 27, -1);
	
	for (int i = 0; i < size; i++) {
		int point = s.at(i) - 'a';
		if (arr[point] == -1) {
			arr[point] = i;
		}
		else {
			continue;
		}
	}
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";

	return 0;
}