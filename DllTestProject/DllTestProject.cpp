// DllTestProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "OBJReader.h"

using namespace std;

int main()
{
	int a = 2;
	int b = 3;

	cout << "a + b = "
		<< OBJReaderDLL::OBJReader::Test(a, b)
		<< endl;

	string s = "diamond.obj";
	OBJReaderDLL::OBJReader::ReadFile(s);

	cin.get();

    return 0;
}
