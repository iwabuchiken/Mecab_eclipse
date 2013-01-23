//  MeCab -- Yet Another Part-of-Speech and Morphological Analyzer
//
//
//  Copyright(C) 2001-2006 Taku Kudo <taku@chasen.org>
//  Copyright(C) 2004-2006 Nippon Telegraph and Telephone Corporation
#include "mecab.h"
#include "winmain.h"

//debug
#include <iostream>
///

int main(int argc, char **argv) {

	//debug
//	std::cout << "[" <<;
//	std::cout << __LINE__ <<;
//	std::cout << "]: " <<;
//	std::cout << __FILE__ << std::endl;
	std::cout << "[" << __LINE__ << "]: " << __FILE__ << std::endl;

	///

  return mecab_do (argc, argv);
}
