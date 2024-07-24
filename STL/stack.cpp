/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FASTER

    stack<int> st; // declare a stack
    st.push(10); // push element in a stack
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.top() << "\n"; // access top element from a stack
    st.pop(); // remove top element from stack
    cout << st.top() << "\n";
    cout << st.size() << "\n"; // print size of stack

    stack<int> st2;
    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);

    swap(st, st2); // swap two stack

    cout << st.top() << "\n";
    cout << st2.top() << "\n\n";

    while(!st.empty()){ // access all element of stack top to bottom
    	cout << st.top() << " ";
    	st.pop();
    }cout << "\n";

    return 0;
}

/// Alhamdulilla for everything
	   		 			 		  		  	 	  	     	