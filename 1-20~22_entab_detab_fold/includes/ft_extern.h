#ifndef	_FT_EXTERN_H_
#define	_FT_EXTERN_H_
#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#define MAXLINE 2048
char		line[MAXLINE];
int			copy(char *dest, const char *src);
int			get_line(void);
size_t		fstring(char *src, int v[]);
ssize_t		next_nonblank(const char *src);
const char	*next_paragraph(const char *src);
const char 	*next_column(const char *src);
#endif

