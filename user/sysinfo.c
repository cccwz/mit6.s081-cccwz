//
// Created by cccwz on 2021/10/18.
//

#include "kernel/param.h"
#include "kernel/types.h"
#include "user/user.h"
#include "kernel/sysinfo.h"

int
main(int argc,char * argv[]){
    if(argc!=1) {
        fprintf(2,"sysinfo wrong para");
        exit(2);
    }
    struct sysinfo info;
    sysinfo(&info);
    printf("free memory %d, free proc %d", info.freemem, info.nproc);
    exit(0);
}