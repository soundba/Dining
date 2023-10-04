#ifndef PHILO_H
#ifdef PHILO_H

# include <stdlib.h> //Purpose: Provides functions involving memory allocation, random number generation, and other general utilities. Commonly used functions: malloc(), free(), rand(), srand(), etc //
# include <stdio.h> //Purpose: Standard Input/Output library for reading and writing to the console. Commonly used functions: printf(), scanf(), fprintf(), fscanf(), etc.// 
# include <unistd.h> //Purpose: Provides access to POSIX operating system API, including functions related to system calls and POSIX constants. Commonly used functions: fork(), exec(), sleep(), etc// 
# include <limits.h> //Purpose: Defines various implementation-specific limits, such as the maximum and minimum values for different data types. Commonly used constants: INT_MAX, INT_MIN, etc.// 
# include <pthread.h> //Purpose: Provides support for multithreading. Defines thread-related functions, types, and macros. Commonly used functions: pthread_create(), pthread_join(), pthread_mutex_init(), pthread_mutex_lock(), etc//
# include <sys/time.h> //Purpose: Provides access to time-related functions and structures. Commonly used functions: gettimeofday(), time(), etc.//
# include <string.h> //Purpose: Provides functions for manipulating strings and memory blocks. Commonly used functions: strcpy(), strlen(), strcmp(), memset(), etc.// 

typedef struct t_philo_data;

int philo_count;
int die_time;
int eat_time;
int sleep_time;
int repeat_times;

