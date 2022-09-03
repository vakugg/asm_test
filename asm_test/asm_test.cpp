#include <iostream>
#include <time.h>
#include "prot_asm_func.h"

#define moloko_size 5*1024*1024/4    
#define reg_quant 5








int main()
{
    // time vars
    clock_t strt_time, fin_time;     double rslt;
    int* DWN_range;
    int* UP_range;

 

    int* moloko = (int*)malloc(moloko_size * sizeof(int*));
    if (moloko == NULL) exit(911);
    

    //for (int i=0; i < moloko_size-1; i++) DWN_range++;
    //std::cout << DWN_range << " - " << UP_range << std::endl;

    strt_time = clock();
    
    LRD_rand(moloko);// full assembly here

    fin_time = clock();




    rslt = (double)((fin_time - strt_time) / CLOCKS_PER_SEC);

    
}