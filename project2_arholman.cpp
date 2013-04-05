/******************************************************************
I understand and have abided by the UNCG Academic Integrity
Policy:	Andrew Holman
CSC 330-01
Spring 2010
Dr. Lixin Fu
*******************************************************************
*******************************************************************
The following program will perform a Huffman compression based 
upon user input and frequencies given in the text book.
******************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

#include "d_except.h"
#include "d_pqueue.h"
#include "d_hnode.h"
#include "d_hdcomp.h"
#include "d_hcomp.h"
#include "d_bitvec.h"
#include "d_heap.h"

using namespace std;


int main()
{
	string user_input;
	int factor;

	fstream myFile;
	myFile.open("huf.dat");

	cout << "Please input factor: ";
	cin >> factor;

	cout << "Please input user characters: ";
	cin >> user_input;

	myFile << user_input;
	myFile.close();

	hCompress comp("huf.dat");
	

//	comp.freqAnalysis();
//	comp.buildTree();
//	comp.generateCodes();
//	comp.writeCompressedData();
	hDecompress("huf.huf", "huf_new.dat");

	return 0;
}