#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{	
 	ifstream fin;
 	ofstream fout;

	// check if there are enough arguments
	if (argc != 3){
		cerr << "error" << endl;
		return 1;
	}
	else
	{
		cout << "OK" << endl;
	}
	
	// open the first file
	cout << argv[1] << endl;
	fin.open(argv[1]);
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	cout << argv[2] << endl;
	fout.open(argv[2]);
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		cout << c;
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 
