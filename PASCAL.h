#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

#ifndef _PASCAL_h
#define _PASCAL_h


class PASCAL{

	private:
		std::vector<std::vector<int> > _triangle;
	
	
	public:
		PASCAL();
		void add_row(int);
		void print();
		void clean();
		std::string spaces(int);
		int get_n_digits(int);
		
		int max_n_digits_in_row(int);
		int max_n_digits_in_triangle();
		
		std::string to_string(int);
		
		std::string gen_plaque(int, int);
		

};


#endif