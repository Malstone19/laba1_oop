#include "Maltsev_Container.h"
#include <fstream>
using namespace std;

void Container::input()
{
	Maltsev_Student* student = new Maltsev_Student;
	student->input();
	array_of_students.push_back(student);
}

void Container::output()
{
	if (array_of_students.size() > 0)
	{
		for (auto iter = array_of_students.begin(); iter != array_of_students.end(); iter++)
				(*iter)->output();
	}
	else cout << "κυκυκυκ" << endl;
}

void Container::delete_smth()
{
	if (array_of_students.size() > 0)
	{
		for (auto iter = array_of_students.begin(); iter != array_of_students.end(); iter++)
			delete* iter;
		array_of_students.clear();
	}
	else cout << "κυκυκυκυ" << endl;
}

void Container::input_file(ifstream& infile)
{
	int size;
	infile >> size;
	for (int i = 0; i != size; i++)
	{
		Maltsev_Student* student = new Maltsev_Student;
		student->input_file(infile);
		array_of_students.push_back(student);
	}
}

void Container::output_file(ofstream& outfile)
{
	outfile << array_of_students.size() << endl;
	for (auto iter = array_of_students.begin(); iter != array_of_students.end(); iter++)
			(*iter)->output_file(outfile);
}