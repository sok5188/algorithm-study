#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
using namespace std;
# define MY_PI 3.14159265358979323846
int main() {
   
	int r;
	cin >> r;
	double area1 = MY_PI * r * r;
	printf("%.6f\n", area1);
	double area2 = (double)r*r* 2;
	printf("%.6f\n", area2);
	return 0;
}