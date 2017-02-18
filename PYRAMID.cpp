

#include "PYRAMID.h"

PYRAMID::PYRAMID(){

}


PYRAMID::PYRAMID(int n){

	_nrows = n;

}


void PYRAMID::create(){

	int offset = 1;
	int nspaces = std::sqrt(3)/2 * _nrows * 3 + offset;
	nspaces = nspaces / 2;

	for(int r = 0; r < _nrows; r++){
		for(int s = 0; s < nspaces;s++){
			add_plaque(PLAQUE("--b"));
		}
		for(int e = 1; e < r; e++){
			add_plaque( PLAQUE("Q") );
		}
		add_plaque( PLAQUE("--n") );
		nspaces--;
	}


}
