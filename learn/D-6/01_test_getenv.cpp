/*
 * 01_test_getenv.cpp
 *
 *  Created on: 2013/01/24
 *      Author: iwabuchiken
 */
#include <stdlib.h>
#include <iostream>
#include <stdio.h>

int main(int argc, char **argv) {

	char *home = getenv("HOME");
	char *mecabrc = getenv("MECABRC");

	std::string s("abcdef");

	std::cout << "HOME=" << *home << std::endl;
	std::cout << "HOME=" << home << std::endl;

	//debug
	std::cout << "[" << __FILE__ << ":" << __LINE__ << "]: " << std::endl;

	///


	printf("MECABRC=%s\n", mecabrc);

//	if (*mecabrc) {
	if (mecabrc) {

		//debug
		std::cout << "[" << __FILE__ << ":" << __LINE__ << "]: " << std::endl;

		///

		std::cout << "MECABRC=" << *mecabrc << std::endl;

	} else {//if (*mecabrc)

		std::cout << "MECABRC=>null" << std::endl;

	}//if (*mecabrc)

//	std::cout << "MECABRC=" << *mecabrc << std::endl;

	std::cout << "s=" << s << std::endl;

//	printf("printf: s=%s\n", s);
	printf("printf: s=%s\n", s.c_str());

	return 0;
}



