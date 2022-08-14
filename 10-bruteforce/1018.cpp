#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;
// B = true W = false
int black_borad(int board[8][8]) {
	int cnt = 0;
	//black
	if (board[0][0]==1) {
		for (int i = 0; i < 8; i++) {
			if (i != 0) {
				if (board[i][0] == board[i - 1][0]) {
					board[i][0] = board[i - 1][0]*(-1);
					cnt++;
				}
			}
			for (int j = 0; j < 7; j++) {
				if (board[i][j] == board[i][j + 1]) {
					board[i][j + 1] = board[i][j] * (-1);
					cnt++;
				}
			}
		}
	}
	else {
		board[0][0]=1;
		cnt++;
		for (int i = 0; i < 8; i++) {
			if (i != 0) {
				if (board[i][0] == board[i - 1][0]) {
					board[i][0] = board[i - 1][0] * (-1);
					cnt++;
				}
			}
			for (int j = 0; j < 7; j++) {
				if (board[i][j] == board[i][j + 1]) {
					board[i][j + 1] = board[i][j] * (-1);
					cnt++;
				}
			}
		}
	}
	
	return cnt;
}
int white_borad(int board[8][8]) {
	int cnt = 0;
	//black
	if (board[0][0]==-1) {
		for (int i = 0; i < 8; i++) {
			if (i != 0) {
				if (board[i][0] == board[i - 1][0]) {
					board[i][0] = board[i - 1][0] * (-1);
					cnt++;
				}
			}
			for (int j = 0; j < 7; j++) {
				if (board[i][j] == board[i][j + 1]) {
					board[i][j + 1] = board[i][j] * (-1);
					cnt++;
				}
			}
		}
	}
	else {
		board[0][0] = -1; 
		cnt++;
		for (int i = 0; i < 8; i++) {
			if (i != 0) {
				if (board[i][0] == board[i - 1][0]) {
					board[i][0] = board[i - 1][0] * (-1);
					cnt++;
				}
			}
			for (int j = 0; j < 7; j++) {
				if (board[i][j] == board[i][j + 1]) {
					board[i][j + 1] = board[i][j] * (-1);
					cnt++;
				}
			}
		}
	}

	return cnt;
}
int main() {
	int n,m;
	cin >> n >> m;
	char board[51][51];
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	int checkboard1[8][8], checkboard2[8][8];
	int ans = 99999;
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			//make board at one point
			for (int a = 0; a < 8; a++) {
				for (int b = 0; b < 8; b++) {
					if (board[a + i][b + j] == 'B')
						checkboard1[a][b] = checkboard2[a][b] = 1;
					
					else
						checkboard1[a][b]=checkboard2[a][b]  = -1;
				}
			}
			
			//check board at one point
			int n1=black_borad(checkboard1);
			//cout << n1 << endl;
			int n2 = white_borad(checkboard2);
			//cout << n2 << endl;
			int mini = min(n1, n2);
			
			ans = min(ans, mini);
			//cout << ans << endl;
		}
	}
	cout << ans << endl;
	return 0;
}