#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - Function to append text at the end to a file
 * @filename: The filename to open and append in the text
 * @text_content: content to be added to the file
 * The function opens the file specified by filename in append mode and writes
 * the contents of text_content to the end of the file.
 * If the operation is successful.
 * Return: O success, 1, otherwise, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, content_write, count;
/*check if file name is null, if yes, exit*/
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		/*open the file*/
		file_des = open(filename, O_WRONLY | O_APPEND);
		if (file_des == -1)/*exit if there is an error*/
			return (-1);
		count = 0;
		/*ensure that we are not at the null byte & add data*/
		while (*(text_content + count) != '\0')
			count++;
		content_write = write(file_des, text_content, count);
/*if it fails, exit and give an error message*/
		if (content_write == -1)
		{
			close(file_des);
			write(STDOUT_FILENO, "Fails\n", 6);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
