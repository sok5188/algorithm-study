#include <iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

long long arr[200009];
long long ans;
long long n, k;

void push(int item, int* sz)
{
	int i = 0;
	i = ++(*sz);
	//printf("%d\n", i);

	while ((i != 1) && item > arr[i / 2]) {
		arr[i] = arr[i / 2]; // 원래 자식 들어갈 자리에 부모의 값 저장
		i = i / 2; // 새로 들어올 자식이 기존 부모자리에 들어갈 것을 대비해 i를 반 줄임
	}
	arr[i] = item;
}
int del(int* sz) {
	int first, temp, parent, child;
	first = arr[1];
	temp = arr[(*sz)--];	//제일 끝단
	parent = 1;
	child = 2;

	while (child <= *sz) {
		if ((child < *sz) && (arr[child] <arr[child + 1]))
			child++;

		if (temp >= arr[child])
			break;

		arr[parent] = arr[child];
		parent = child;
		child *= 2;
	}

	arr[parent] = temp;
	return first;
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/*
	int input;
	int n = 0, count = 0;

	printf("Min Heap 구현 - 숫자를 입력하세요.\n");
	printf("*****숫자 입력(-1을 입력하면 입력 종료)*****\n");

	while (1)
	{
		scanf_s("%d", &input);

		if (input == -1)
			break;

		push(input, &n);
		count++;
	}

	printf("Level Order Traversal : ");
	for (int i = 1; i <= count; i++) {
		printf("%d ", arr[i]);
	}*/
	
	cin >> n;
	vector<int> v;
	int sz = 0;
	while (n--) {
		int tmp;
		cin >> tmp;
		if (tmp == 0) { 
			if (sz == 0)
				printf("0\n");
			else
				printf("%d\n",del(&sz));
		}
		else {
			push(tmp, &sz);
		}
	}
	

	return 0;
}