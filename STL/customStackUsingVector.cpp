#include <bits/stdc++.h>
using namespace std;

struct Stack{
	vector<int> v;

	void push(int x){
		v.push_back(x);
	}

	int top(){
		if(v.empty()) return -1;
		else return v.back();
	}

	void pop(){
		if(v.empty()){
			cout << "Stack is empty!! Can't pop.\n";
		}else {
			v.pop_back();
		}
	}

	int size(){
		return v.size();
	}

	bool empty(){
		return v.empty();
	}
};

int main(){
	Stack st;

	st.push(1);
	st.push(2);
	st.push(3);
	cout << st.top() << "\n";
	st.pop();
	cout << st.top() << "\n";
	st.pop();

	st.push(4);
	cout << st.size() << "\n\n";

	st.push(5);

	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << "\n";

	cout << st.empty() << "\n"; // 1(true)

	cout << st.top() << "\n"; // -1
}