#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct pstat {
   int inuse[NPROC]; //Wheter this slot of the process table is in use (1 or 0)
   int pid[NPROC];   //The PID of each process
   int hticks[NPROC];//The number of tickets each process at priority 2
   int lticks[NPROC];//THe number of tickets each process at priority 1
};


#endif // _PSTAT_H
