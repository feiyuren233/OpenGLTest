/*
 * fileLoader.cpp
 *
 *  Created on: Oct 24, 2015
 *      Author: feiyu
 */
#include "Utility/fileLoader.h"
#include <iostream>
#include <string>
#include <sstream>
string loadFile(char* filename) {
	string str, line;
	ifstream file(filename);
	while(!file.eof()){
		getline(file, line);
		//std::cout<<line<<std::endl;
		str += line;
		str += '\n';
	}
	return str;
}
