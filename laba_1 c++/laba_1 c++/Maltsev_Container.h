#include "Maltsev_Student.h"
#include <vector>

#pragma once
class Container
{
private:
	vector<Maltsev_Student*> array_of_students;
public:
	void input();
	void output();
	void input_file(ifstream& infile);
	void output_file(ofstream& outfile);
	void delete_smth();
};