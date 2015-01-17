//
//  logger.c
//  C-Template
//
//  Created by Karsten Groll on 13.12.14.
//  Copyright (c) 2014 Karsten Groll. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

#include "logger.h"

#define PREFIX_ERROR   "[E]"
#define PREFIX_WARNING "[W]"
#define PREFIX_INFO    "[I]"
#define PREFIX_VERBOSE "[V]"
#define PREFIX_DEBUG   "[D]"

// Helper function for printing a prefix that consists of a given
// tag and an automatically retrieved timestamp
void printPrefix(FILE*, const char*);


void loge(const char* msg, ...)
{
    va_list args;
    printPrefix(stderr, PREFIX_ERROR);
    va_start(args, msg);
    vfprintf(stderr, msg, args);
    fprintf(stderr, "\n");
    va_end(args);    va_end(args);
}

void logw(const char* msg, ...)
{
    va_list args;
    printPrefix(stdout, PREFIX_WARNING);
    va_start(args, msg);
    vfprintf(stdout, msg, args);
    fprintf(stdout, "\n");
    va_end(args);    va_end(args);
}

void logi(const char* msg, ...)
{
    va_list args;
    printPrefix(stdout, PREFIX_INFO);
    va_start(args, msg);
    vfprintf(stdout, msg, args);
    fprintf(stdout, "\n");
    va_end(args);    va_end(args);
}

void logv(const char* msg, ...)
{
    va_list args;
    printPrefix(stdout, PREFIX_VERBOSE);
    va_start(args, msg);
    vfprintf(stdout, msg, args);
    fprintf(stdout, "\n");
    va_end(args);    va_end(args);
}

void logd(const char* msg, ...)
{
    va_list args;
    printPrefix(stdout, PREFIX_DEBUG);
    va_start(args, msg);
    vfprintf(stdout, msg, args);
    fprintf(stdout, "\n");
    va_end(args);    va_end(args);
}

void printPrefix(FILE* file, const char *prefix)
{
    const char* dateStr = "01.01.2014 12:13:55";
    fprintf(file, "%s", dateStr);
    fprintf(file, " %s ", prefix);
}
