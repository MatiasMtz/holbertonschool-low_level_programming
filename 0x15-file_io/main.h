#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
int cp(int argc, char *argv[]);
void doesnt_exist(ssize_t aux_check, char *filename, int fd_from, int fd_to);
void cant_create(ssize_t aux_check, char *filename, int fd_from, int fd_to);
void cant_close(int aux_check, int fd_value);
#endif
