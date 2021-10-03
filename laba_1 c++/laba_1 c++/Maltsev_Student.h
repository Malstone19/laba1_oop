#include <string>
#include <iostream>
using namespace std;

#pragma once
class Maltsev_Student
{
public:
	string name;
	string last_name;
	float avg_score;
	int age;
	void input();
	void output();
	void input_file(ifstream& file);
	void output_file(ofstream& file);
};