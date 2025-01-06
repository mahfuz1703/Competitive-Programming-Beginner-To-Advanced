#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int value;
	Node *next;

	Node(int value){
		this->value = value;
		this->next = NULL;
	}
};

void insert_at_head(Node* &head, int value){ // O(1)
	Node *newnode = new Node(value);
	newnode->next = head;
	head = newnode;
}

void insert_at_tail(Node* &head, int value){ // O(n)
	Node *newnode = new Node(value);

	if(head == NULL) {
		head = newnode;
		return;
	}

	Node *tmp = head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newnode;
}

void optimize_insert_at_tail(Node* &head, Node* &tail, int value){ // O(1)
	Node *newnode = new Node(value);

	if(head == NULL) {
		head = newnode;
		return;
	}
	tail->next = newnode;
	tail = newnode; // or tail = tail->next;
}

void insert_at_any_pos(Node* &head, int indx, int value){ // O(indx)
	Node *newnode = new Node(value);
	Node *tmp = head;
	for(int i = 1; i < indx; i++){
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
}

void print(Node *head){ // O(n)
	Node *tmp = head;
	while(tmp != NULL){
		cout << tmp->value << "\n";
		tmp = tmp->next;
	}
}

int main(){
	// Node a(10), b(20), c(30);

	// a.value = 10;
	// b.value = 20;
	// c.value = 30;

	// a.next = &b;
	// b.next = &c;
	// c.next = NULL;


	// dynamic node create
	Node *head = new Node(10);
	Node *a = new Node(20);
	Node *b = new Node(30);
	Node *c = new Node(40);

	head->next = a;
	a->next = b;
	b->next = c;

	// cout << head->value << "\n";
	// cout << head->next->value << "\n";
	// cout << head->next->next->value << "\n";

	// print all values uisng loop
	// print(head); // print linkedList
	// cout << "\n";


	// insert new node at heat
	// insert_at_head(head, 50);
	// insert_at_head(head, 60);


	// Node* neww = NULL;
	// // insert new node at tail
	// insert_at_tail(neww, 50);
	// insert_at_tail(neww, 60);
	// print(neww); // print linkedList


	
	insert_at_any_pos(head, 2, 25);
	insert_at_any_pos(head, 4, 35);
	print(head); // print linkedList
}