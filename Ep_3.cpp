#include <iostream>

// Namespaces
namespace first{
	int x = 1;
}

namespace second{
	int x = 2;
}


int main(){
	// using one namespace in all classes
	using namespace first;
	
	int x = 0;
	
	// wen we nead to work with spichial name space
	std::cout << x;
	std::cout << first::x;
	std::cout << second::x;
	
}
