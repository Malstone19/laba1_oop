#include "Maltsev_Student.h"
#include <fstream>

void Maltsev_Student::input()
{
	cout << "name: ";
	cin >> name;
	cout << "surename: ";
	cin >> last_name;
	cout << "avg_score: ";
	cin >> avg_score;
	cout << "age: ";
	cin >> age;
}

void Maltsev_Student::output()
{
	cout << endl;
	cout << "name: ";
	cout << name << endl;
	cout << "surename: ";
	cout << last_name << endl;
	cout << "avg_score: ";
	cout << avg_score << endl;
	cout << "age: ";
	cout << age << endl;
	cout << endl;
}

void Maltsev_Student::input_file(ifstream& file)
{
	file >> name >> last_name >> avg_score >> age;
}

void Maltsev_Student::output_file(ofstream& file)
{
	file << name << endl << last_name << endl << avg_score << endl << age << endl;
}
