#include <iostream>
//#include "utils.h"

#include "problem001.h"
#include "problem002.h"


int main(int argc, const char* argv[]) 
{
    // auto t0 = std::chrono::high_resolution_clock::now();
    // std::cout << "Answer: " << problem50::getAnswer() << std::endl;
    // auto t1 = std::chrono::high_resolution_clock::now();
    // std::cout << "Elapsed time: " << static_cast<std::chrono::duration<float>>(t1 - t0).count() << " seconds" << std::endl;
	
	std::cout << "Answer to problem 001: " << problem001::getAnswer() << std::endl;
	std::cout << "Answer to problem 002: " << problem002::getAnswer() << std::endl;

    return 0;
}