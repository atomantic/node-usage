#ifndef SOLARIS_PS_H
#define SOLARIS_PS_H

#include <stdlib.h>
#include <procfs.h>
#include <string.h>
#include <uv.h>

typedef struct ps_usage {
    float cpu;
    long memory;
} ps_usage_t;

using namespace v8;
struct UsageData {

    int pid;
    Persistent<Function> callback;
    ps_usage_t ps_usage;
    bool failed;
};

extern int get_usage(int pid, ps_usage_t* ps_usage);

#endif