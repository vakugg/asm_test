#include <math.h>
#include <iostream>
#include <windows.h>


#define milk 5 * 1024 * 1024 / 4 -1
uint32_t LRD_rand(uint32_t our_arr)
{

	//� ��������� ������� ��, ��� ��������� lfsr �� ������ � ����� "����������", � ����� ���-�� ��������� ����� ������� � 6� ������ � ���������.
	//���� ��� ���������� ���������� ��, ����� � ��������� � ����� ���� ������������ � ��������� - � �������� ���� �������.
	
	 static uint32_t seed_holder = our_arr;

	//if (our_arr != seed_holder) //� ���-�����; ����� �����
	//{
	//	exit(21);
	//};

	std::cout << std::dec<<seed_holder<< " - ";

	// Algorithm "xor" from p. 4 of Marsaglia, "Xorshift RNGs" 
	
	seed_holder ^= seed_holder << 13;

	seed_holder ^= seed_holder >> 17;

	seed_holder ^= seed_holder << 5;
	

	

	std::cout <<std::dec <<seed_holder << std::endl;

	


	

	return(seed_holder);// ��� ��� ��� ������ ������ ���, � temp - ���
};