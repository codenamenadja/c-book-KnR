#include <assert.h>
#include <stdio.h>
#define MAXLINE 2048

char	line[MAXLINE];
int		readline(void);
int		copy(char *dest, const char *src);
int		detab(char *src, int nth);
int		get_line(void);

int 	main(void)
{
	extern char line[];
	int	i;
	
	while (get_line()) {
		i = 0;
		while (*(line + i)) {
			if (*(line + i) == '\t')
				detab(line, i);
			i++;
		}
		i = 0;
		while (*(line + i))
			assert(*(line + i++) != '\t');
	}
}

int		detab(char *src, int nth)
{
	char	buf[MAXLINE];
	int		i;

	assert(*(src + nth) == '\t');
	copy(buf, (const char *)(src + nth + 1));
	copy(src + nth, "    \0");
	copy(src + nth + 4, (const char *)buf);
	i = 4;
	while (i--)
		assert(*(src + nth + i) == ' ');
	return (nth);
}

int		get_line(void)
{
	int				c;
	int				i;
	extern char		line[];

	i = 0;
	c = getchar();
	while (i < MAXLINE - 1 && c != EOF && c != '\n') {
		line[i] = c;
		i += 1;
		c = getchar();
		if (c == EOF)
			return (0);
	}

	if (c == '\n')
		line[i++] = c;

	line[i] = '\0';
	return (i);
}

int		copy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while ((*(dest + i) = *(src + i)))
		i++;

	*(dest+i) = '\0';
	return (i);
}

