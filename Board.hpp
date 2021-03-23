#pragma once
#include "Direction.hpp"
#include <string>
#include <iostream>
#include<unordered_map>
namespace ariel {
	class Board{
		private:
		std::unordered_map<int, std::unordered_map<int,char>> msg_board;
		public:
	// Defines the board
	void post (unsigned int row , unsigned int col , Direction d,std::string s);
    std::string read (unsigned int row , unsigned int col , Direction d,unsigned int size);
	void show();
	// Board(){
	// 	// for (int i = 0; i < msg_board.size(); i++)
	// 	// {
	// 	// 	for (int j = 0; i < msg_board.at(0).size(); i++)
	// 	// 	{
	// 	// 		msg_board.at(i).at(j)='_';
	// 	// 	}
						
			
	// 	// }
		
	// }
};
};