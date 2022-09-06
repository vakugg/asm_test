#include <iostream>
#include <time.h>
#include "prot_asm_func.h"

#define moloko_size 5*1024*1024/4    
#define reg_quant 5








int main()
{
    // time vars
    clock_t strt_time, fin_time;     double rslt;
    uint32_t* DWN_range;
    uint32_t* UP_range;

 

    uint32_t* moloko = (uint32_t*)malloc(moloko_size * sizeof(uint32_t*));
    if (moloko == NULL) exit(911);
    
    DWN_range = moloko;
    UP_range = moloko + moloko_size - 1;

    std::cout << DWN_range << " - " << UP_range<< std::endl;
    
    //for (int i=0; i < moloko_size-1; i++) DWN_range++;
    //std::cout << DWN_range << " - " << UP_range << std::endl;


    



    strt_time = clock();
    
    for (int i = 0; i < moloko_size; i++)
    {
        uint32_t* strt_rmbrr = DWN_range;
        static uint32_t adr_hldr = (uint32_t)DWN_range;
        uint32_t temp = LRD_rand(adr_hldr)% moloko_size ;// получаем интовое смещение - temp ведёт себя непонятно как


        for (uint32_t j = 0; j < temp; j++) // смещаемся
        {
            strt_rmbrr++;
        }

        std::cout << strt_rmbrr << std::endl;
        __asm
        {
            //JMP adr_hldr;
        };

    }

    __asm 
    {
        //RET ???
    }

    fin_time = clock();




    rslt = (double)((fin_time - strt_time) / CLOCKS_PER_SEC);

    
}