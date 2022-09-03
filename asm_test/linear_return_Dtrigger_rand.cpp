#include <math.h>
#include <windows.h>


#define milk 5 * 1024 * 1024 / 4 -1
int* LRD_rand(int* our_arr)
{
	/*if (seed > 31 || seed == 0) return(NULL); - не правильно но пусть пока лежит
	static int seedo[5];
	int seedo_tmp[5];

	int* DWN_rng;
	int* UP_rng;

	DWN_rng = &our_arr[0];
	UP_rng = &our_arr[milk];


	for (int i = 0; i < 5; i++) 
	{
		seedo[i] = seed % 2;
		seedo_tmp[i] = seedo[i];
		seed /= 2;
	}*/
	


	//github stuff for single procedure 

	int cntr = 0;
	int fin_cond = milk;
	_asm
	{
		

		DWORD adressRET;
	LOOP:
		MOV ax, cntr;
		MOV bx, fin_cond;

		CMP ax, bx;
		
		JL a1
		JE a2

	a1:
		/*  генерим адрес тут не знаю пока как, и mov в adressRET
		* 
		* 
		* //github stuff for single procedure 
		* 
		* 
		* xor ecx,ecx
			mov ebx,0FFFFFFFFh ; S
			mov eax,095324C57h ; taps (32,31,30,28,26,22,21,18,15,12,11,8,6,4,1)

			and ebx,eax
			lahf
			mov cl,ah ; [0-7] bits
			sar ebx,08h
			lahf
			xor cl,ah ; [8-15] bits
			sar ebx,08h
			lahf
			xor cl,ah ; [16-23] bits
			sar ebx,08h
			lahf
			xor cl,ah ; [24-31] bits

			sar cl,02h
			and cl,01h
		* 
		*/

		JMP adressRET;
		JMP LOOP


	a2:
		RET;
	}


};