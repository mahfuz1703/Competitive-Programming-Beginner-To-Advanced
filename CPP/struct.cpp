#include <bits/stdc++.h>
using namespace std;

struct Student{
	int id, intake;
	string name, dept;

	Student(int _id, string _name, string _dept, int _intake){
		id = _id;
		intake = _intake;
		name = _name;
		dept = _dept;
	}

	void display(){
		cout << "ID: " << id << "\n";
		cout << "Name: " << name << "\n";
		cout << "Dept: " << dept << "\n";
		cout << "Intake: " << intake << "\n";
	}
};

int main(){
	Student mahfuz(58, "Mahfuz Mia", "CSE",  49);
	Student shaker(356, "AI Shaker", "EEE", 50);

	mahfuz.display();
	cout << "\n";

	shaker.display();
}