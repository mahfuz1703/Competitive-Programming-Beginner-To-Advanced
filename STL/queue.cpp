/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FASTER

    queue<int> q; // declare a queue
    q.push(10); // push value in queue
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.size() << "\n"; // print size of queue
    cout << q.front() << "\n"; // access front element of queue
    q.pop(); // delete front element of queue
    cout << q.front() << "\n";
    cout << q.back() << "\n"; // access back element of queue

    if(q.empty()){ // check queue is empty or not
        cout << "Yes, Queue is empty!!\n\n";
    }else{
        cout << "No, Queue is not empty!!\n\n";
    }

    while(!q.empty()){ // access all element of queue
        cout << q.front() << " ";
        q.pop();
    }cout << "\n";

    return 0;
}

/// Alhamdulilla for everything
	   		 			 		  		  	 	  	     	