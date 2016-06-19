

#include "PYRAMID.h"

PYRAMID::PYRAMID(){

}


PYRAMID::PYRAMID(int n){

	_nrows = n;

}


void PYRAMID::create(){

	int offset = 1;
	int nspaces = std::sqrt(3)/2 * _nrows + offset;
	
	
	for(int r = 0; r < _nrows; r++){
		add_plaque( PLAQUE() );
		for(int e = 1; e < r; e++){
			add_plaque( PLAQUE() );
		}
		add_plaque( PLAQUE("\n") );

	}
	

}