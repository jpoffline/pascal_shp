
#include "PLAQUE_COLLECTION.h"

PLAQUE_COLLECTION::PLAQUE_COLLECTION(){

}

void PLAQUE_COLLECTION::add_plaque(PLAQUE p){

	_plaques.push_back(p);

}

void PLAQUE_COLLECTION::print(){

	for(int i = 0; i < _plaques.size(); i++){
		std::string pl = _plaques[i].get();
		if(pl == "--n"){
				std::cout << std::endl;
		}
		else{
				std::cout << pl;
		}
	}


}
