#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <rtthread.h>

#include "thread_schedule.h"
#include "thread_create_sample.h"
#include "thread_timeslice.h"


MSH_CMD_EXPORT(scheduler_hook, scheduler_hook sample);
MSH_CMD_EXPORT(timeslice_sample, timeslice sample);

int main(void)
{
    printf("hello rt-thread\n");
    // thread_sample();

    return 0;
}

