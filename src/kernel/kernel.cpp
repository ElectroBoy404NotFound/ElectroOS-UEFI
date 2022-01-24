#include "kernel.h"

extern "C" int _start(BootInfo* bootinfo){
    UtilClasses utils = initlize(bootinfo);
    Print print = utils.print;

    while(1);
    return 0;
}