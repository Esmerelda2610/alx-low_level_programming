#include "main.h"

/**
 * Append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of file.
 * @text_content: The string to add to end of file.
 *
 * Return: If function fails or filename is NULL.
 * @text_content: The string to add to end of file.
 *
 * Return: If function fails or filename is NULL - -1.
 	   If file does not exist the user lacks right permission - -1.
 * 	   Otherwise  - 1.
 */
int append_text_to_file(const char *filename, char  *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONGLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);

}