#include "PLAQUE.h"


PLAQUE::PLAQUE(){

	_init();
	_blank = false;

}

PLAQUE::PLAQUE(std::string content){

	_init();
	set_content(content);

	if(content == "--n"){
		_nl = true;
	}
	if(content == "--b"){
		_blank = true;
	}

}


void PLAQUE::_init(){
	_blank = false;
	_nl = false;
	_left_edge = "[";
	_right_edge = "]";
	set_content("");
	set_padding(0);

}


void PLAQUE::set_content(std::string content){

	_content = content;

}

void PLAQUE::set_padding(int padding){
	std::string pd = "";
	for(int i = 0; i < padding; i++){
		pd += " ";
	}
	_padding = pd;

}

std::string PLAQUE::get(){

	if(_blank){
		return "   ";
	}
	else if(_nl){
		return "--n";
	}
	else
		return _left_edge + _padding + _content + _padding + _right_edge;


}
