#ifndef _PYRAMID_h
#define _PYRAMID_h

#include "PLAQUE_COLLECTION.h"
#include <cmath>

class PYRAMID : public PLAQUE_COLLECTION {

	private:
	
		int _nrows;
		
	public:
	
		PYRAMID();
		PYRAMID(int);
		void create();

};

#endif