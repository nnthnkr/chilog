#ifndef CHILOG_IMPLEMENTATION
#define CHILOG_IMPLEMENTATION

#include <stdio.h>

/* colors */
#define GREEN   "\e[0;32m"
#define YELLOW  "\e[0;33m"
#define RED     "\e[0;31m"

/* reset */
#define RESET   "\e[0m"


/* logging functions */
void cl_INFO(const char *);
void cl_WARN(const char *);
void cl_ERROR(const char *);

/* implementation */
void cl_INFO(const char *info_msg) {
    if (! *info_msg)    
        return;

    #if defined(CHILOG_COLORS)
        fprintf(stdout, "[" GREEN "INFO" RESET "]: %s\n", info_msg);
    #else
        fprintf(stdout, "[INFO]: %s\n", info_msg);
    #endif
}

void cl_WARN(const char *warn_msg) {
    if (! *warn_msg)    
        return;

    #if defined(CHILOG_COLORS)
        fprintf(stdout, "[" YELLOW "WARNING" RESET "]: %s\n", warn_msg);
    #else
        fprintf(stdout, "[WARNING]: %s\n", warn_msg);
    #endif
}

void cl_ERROR(const char *error_msg) {
    if (! *error_msg)    
        return;
    #if defined(CHILOG_COLORS)
        fprintf(stderr, "[" RED "ERROR" RESET "]: %s\n", error_msg);
    #else
        fprintf(stderr, "[ERROR]: %s\n", error_msg);
    #endif
}

#endif
