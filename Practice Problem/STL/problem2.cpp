// Problem: You are given an expression consisting only of the characters '(' adn ')', determine weather the expression is balanced or not. Example, (()()) is balanced and ())(() is not balanced

#include <bits/stdc++.h>
using namespace std;

int main(){
	string str; cin >> str;
	stack<char> st;

	for(auto u : str){
		if(u == '('){
			st.push(u);
		}else{
			if(st.empty()){
				cout << "Not balanced!!\n";
				return 0;
			}else st.pop();
		}
	}

	if(st.empty()) cout << "Balanced!!\n";
	else cout << "Not balanced!!\n";

	return 0;
}