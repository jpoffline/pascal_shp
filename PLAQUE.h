
#ifndef _PLAQUE_h
#define _PLAQUE_h

#include <string>
#include <iostream>



class PLAQUE{

	private:
		std::string _left_edge;
		std::string _right_edge;
		std::string _content;

		std::string _plaque;
		std::string _padding;

		bool _blank;
		bool _nl;
		void _init();
	public:
		PLAQUE();
		PLAQUE(std::string);
		//PLAQUE(bool);
		void set_content(std::string);
		std::string get();
		void set_padding(int);


};



#endif
