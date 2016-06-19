#include <iostream>
#include "PASCAL.h"
#include "PYRAMID.h"
	



int main(){

	std::cout << "hello world"<<std::endl;

/*
	PASCAL pascal;
	pascal.add_row(4);
	pascal.print();
	
	pascal.add_row(10);
	pascal.print();
*/
//	std::cout << pascal.get_n_digits(1) <<std::endl;
//	std::cout << pascal.get_n_digits(5) <<std::endl;
//	std::cout << pascal.get_n_digits(50) <<std::endl;
//	std::cout << pascal.get_n_digits(10000001) <<std::endl;	

	PYRAMID pyramid(10);
	pyramid.create();
	pyramid.print();


	return 0;
}