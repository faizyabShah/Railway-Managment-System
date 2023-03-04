#include <iostream>
#include <ctime>

int main() {
	time_t timeinterval = 701729943;
	std::cout << ctime(&timeinterval) << std::endl;

}