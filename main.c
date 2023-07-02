#include "main.h"

/**
 * main - factorize as many numbers as possible into a product of two smaller
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success and 1 on failuer
 */
int main(int argc, char **argv)
{
	FILE *f;
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	unsigned long long numero;

	if (argc != 2)
		fprintf(stderr, "Usage <file_name>\n"), exit(EXIT_FAILURE);
	f = fopen(argv[1], "r");
	if (!f)
		fprintf(stderr, "Can't open file\n"), exit(EXIT_FAILURE);
	while (!feof(f))
	{
		getline(&line_buf, &line_buf_size, f);
		numero = atol(line_buf);
		factors((unsigned __int128)numero);
	}
	fclose(f);
	free(line_buf);
	return (1);
}
