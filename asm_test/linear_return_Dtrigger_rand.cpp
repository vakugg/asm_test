#include <math.h>
#include <iostream>
#include <windows.h>


#define milk 5 * 1024 * 1024 / 4 -1
uint32_t LRD_rand(uint32_t our_arr)
{

	//Я собирался хранить всё, что нагенерит lfsr за период в одной "переменной", а потом как-то приводить этого монстра с 6к нулями к диапазону.
	//Даже дек реализовал средствами си, вынес в заголовок и сидел биты перекладывал в структуре - я чувствую себя идиотом.
	
	 static uint32_t seed_holder = our_arr;

	//if (our_arr != seed_holder) //я фиг-знает; пусть будет
	//{
	//	exit(21);
	//};

	std::cout << std::dec<<seed_holder<< " - ";

	// Algorithm "xor" from p. 4 of Marsaglia, "Xorshift RNGs" 
	
	seed_holder ^= seed_holder << 13;

	seed_holder ^= seed_holder >> 17;

	seed_holder ^= seed_holder << 5;
	

	

	std::cout <<std::dec <<seed_holder << std::endl;

	


	

	return(seed_holder);// вот как они разные каждый раз, а temp - нет
};