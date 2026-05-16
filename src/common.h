#pragma once 
#include <linux/types.h>
#define TASK_COMM_LEN 16
#define MAX_FILENAME_LEN 256 

enum event_type{
    EVEN_EXEC = 1,
    EVENT_CONNECT = 2,
    EVENT_OPEN = 3
};

struct event{
    __u32 type;
    __u32 pid;
    __u32 ppid;
    __u32 uid;
    char comm[TASK_COMM_LEN];
    char filename[MAX_FILENAME_LEN];
    __u32 daddr;
    __u32 dport;
    __u64 ts_ns;
};
