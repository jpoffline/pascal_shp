#include "PLAQUE.h"


PLAQUE::PLAQUE(){

	_init();
	_blank = false;

}

PLAQUE::PLAQUE(bool blank){
	if(blank)
		_blank = true;
	else
		_init();	

}

PLAQUE::PLAQUE(std::string content){
	
	_init();
	_blank = false;
	set_content(content);

}


void PLAQUE::_init(){
	_nl = false;
	_left_edge = "[";
	_right_edge = "]";
	_content = "";
	_padding = "";
	
}


std::string PLAQUE::set_content(std::string content){
	
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

	if(_blank)
		return "";
	if(_nl)
		return "\n";
	return _left_edge + _padding + _content + _padding + _right_edge;
	

}
