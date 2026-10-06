#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::cout;

// Lab 7 — Jayde MB
// CIS 5 Week 07 · Two arrays

int main() {

	int quiz[5] = { 75, 41, 82, 23, 100 };
	int sum = 0;
	int hi = quiz[0];
	int lab[5] = { 64, 64, 64, 64, 64 };
	int Hi = lab[0];

	cout << "Quiz Scores: " << endl;
	for (int i = 0; i < 5; i++) {
		
		cout << quiz[i] << endl;
		sum += quiz[i];
		if (quiz[i] > hi) {
			hi = quiz[i];
		
		}
	}
	cout << "Total: " << sum << endl;
	cout << "Highest: " << hi << endl;
	cout << " " << endl;
	cout << "Lab Scores: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << lab[i] << endl;
		sum += lab[i];
		if (lab[i] > Hi) {
			Hi = lab[i];
		}
	}
	cout << "Total: " << sum << endl;
	cout << "Highest: " << Hi << endl;

	return 0;
}
