#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

// ---main type defult---
typedef std::string text_t;
typedef int number_t;


int main(){
	// typedef = reserved keyword used to create an additional name
	
	text_t firstName = "Amiroo";
	number_t age = 'amiran';                                 
	
	std::cout << firstName << '\n';
	std::cout << age << '\n';
	
	return 0;
}
