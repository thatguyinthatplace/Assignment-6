#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;


//file in/output stream definitions
ifstream file_1;
ifstream file_2;

file_1.open("firstFile.txt");       //opening input file

if (file_1.fail())     //file-input error messages
{
    cout << "Well, this is embarrassing.  I wasn't able to open your first INPUT file. :(\n";
    exit(1);

}


file_2.open("secondFile.txt") // opens second


if (file_2.fail())        //file-output error messages
{
    cout << "Well, this is embarrassing.  I wasn't able to open your second INTPUT file. :(\n";
    exit(1);

}

/closing the files

file_1.close();
file_2.close();
