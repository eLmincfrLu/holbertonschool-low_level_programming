#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
