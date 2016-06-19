#include "PASCAL.h"

PASCAL::PASCAL(){

}

void PASCAL::add_row(int n){

	// Method to add the nth row of pascals triangle
	for(int r = 0; r < n; r++){
		std::vector<int> row;
		row.push_back(1);
		
		for(int e = 1; e < r; e++){
			row.push_back(_triangle[r-1][e-1] + _triangle[r-1][e]);
		}
		if(r > 0) row.push_back(1);
		_triangle.push_back(row);
		
	
	}


}

int PASCAL::get_n_digits(int N){
	
	int digits = 0;
	while(N){
		digits ++;
		N /= 10;
	}
	return digits;

}


void PASCAL::clean(){
	
	_triangle.clear();

}

std::string PASCAL::spaces(int n){

	std::string sp = "";
	for(int i = 0; i <= n; i++) sp += " " ;
	return sp;

}


int PASCAL::max_n_digits_in_row(int row_idx){
	int m = 0;
	for(int e = 0; e < _triangle[row_idx].size()/2; e++){
		int n_digits = get_n_digits(_triangle[row_idx][e]);
		if(n_digits > m) m = n_digits;
	}
	return m;

}

int PASCAL::max_n_digits_in_triangle(){
	
	return get_n_digits( _triangle[ _triangle.size()-1 ][ (_triangle[_triangle.size()-1].size()-1) / 2 ] );

}

std::string PASCAL::to_string(int n){

	std::ostringstream conv;
	conv << n;
	return conv.str();
	

}

std::string PASCAL::gen_plaque(int size, int N){

	std::string plaque;
	std::string padding = spaces( (size - get_n_digits(N))/2 );
	std::string sN = to_string(N);
	
	plaque = "[" + padding + sN + padding + "]";
	
	return plaque;

}

void PASCAL::print(){

	int offset = 1;

	int tot_n_rows = _triangle.size();
	int n_spaces = std::sqrt(3) * tot_n_rows / 2 + offset;
	int max_plaque_size = max_n_digits_in_triangle();
	
	
	std::cout << "nspaces = " << n_spaces << std::endl;
	std::cout << "tot_n_rows = " << tot_n_rows <<std::endl;
	std::cout << "max_n_digits_in_triangle = " << max_plaque_size << std::endl;


	for(int r = 0; r < tot_n_rows; r++){
		std::cout << spaces(n_spaces);
		for(int e = 0; e < _triangle[r].size(); e++){
			std::cout << _triangle[r][e] << " ";
			//std::cout << gen_plaque(max_plaque_size, _triangle[r][e]) << " ";
		}	
		std::cout << std::endl;
		n_spaces --;
	}

	clean();


}