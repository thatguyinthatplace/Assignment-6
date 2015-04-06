#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;


//file in/output stream definitions
ifstream fin;
ofstream fout;

fin.open("firstFile.txt");       //opening input file


if (fin.fail())     //file-input error messages
{
    cerr << "Well, this is embarrassing.  I wasn't able to open your INPUT file. :(\n";
    exit(1);

}


fout.open("firstFile.txt");    //opening output file


if (fout.fail())        //file-output error messages
{
    cerr << "Well, this is embarrassing.  I wasn't able to open your OUTPUT file. :(\n";
    exit(1);

}

/closing the files

fin.close();
fout.close();
