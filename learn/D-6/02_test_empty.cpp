/*
 * 02_test_empty.cpp
 *
 *  Created on: 2013/01/24
 *      Author: iwabuchiken
 */
#include <stdlib.h>
#include <iostream>
#include <stdio.h>

int main(int argc, char **argv) {

	//debug
	std::cout << "[" << __FILE__ << ":" << __LINE__ << "]: " << std::endl;

	///

	std::string s("abcdef");

//	std::string mecab(getenv("MECABRC"));
	std::string mecab;

	char *c_mecab = getenv("MECABRC");

	if (c_mecab) {

		mecab.assign(c_mecab);

	} else {//if (c_mecab)

		mecab.assign("NULL!");

	}//if (c_mecab)


	//debug
	std::cout << "[" << __FILE__ << ":" << __LINE__ << "]: " << std::endl;

	///

//	if (s) {
	if (s.empty()) {

		std::cout << "s=>empty" << std::endl;

	} else {//if (s)

		std::cout << "s=" << s << std::endl;

	}//if (s)

//	if (mecab) {
	if (mecab.empty()) {

		std::cout << "mecab=>empty" << std::endl;

	} else {//if (mecab)

		std::cout << "mecab=" << mecab << std::endl;

	}//if (mecab)

}



