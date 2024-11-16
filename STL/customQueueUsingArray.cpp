#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 123;
struct Queue{
	int arr[N];
	int start = 1, end = 0;

	void push(int x){
		end++;
		arr[end] = x;
	}

	void pop(){
		if(start > end){
			cout << "Queue is empty!!\n";
			return;
		}
		start++;
	}

	int front(){
		return arr[start];
	}

	int back(){
		return arr[end];
	}

	int size(){
		return (end - start + 1);
	}

	int empty(){
		return start > end;
	}
};

int main(){
	Queue q;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << q.front() << "\n";
	q.pop();
	cout << q.front() << "\n";
	cout << q.back() << "\n";
}