#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - function will create a file
 * @filename: name of file to be created
 * @text_content: text to be written in new file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
    int z, n_write;

    if (filename == NULL)
        return (-1);
    if (text_content == NULL)
        text_content = "";

    z = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
    if (z == -1)
        return (-1);

    n_write = write(z, text_content, strlen(text_content));
    if (n_write == -1)
    {
        close(z);
        return (-1);
    }

    close(z);
    return (1);
}

