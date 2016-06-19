#ifndef _PLAQUE_COLLECTION_h
#define _PLAQUE_COLLECTION_h


#include <vector>
#include <iostream>

#include "PLAQUE.h"

class PLAQUE_COLLECTION{

	protected:
	
		std::vector<PLAQUE> _plaques;
	
	public:
		PLAQUE_COLLECTION();
		void add_plaque(PLAQUE);
		
		void print();


};

#endif