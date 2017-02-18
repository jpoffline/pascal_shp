#include <iostream>
#include "PASCAL.h"
#include "PYRAMID.h"
#include "PLAQUE_COLLECTION.h"
#include "PLAQUE.h"


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
	
	//std::cout << p.get() << std::endl;
/*
	PLAQUE_COLLECTION plaques;
	plaques.add_plaque(PLAQUE("WQ"));
	plaques.add_plaque(PLAQUE("WQq"));
	plaques.print();
*/
	return 0;
}
