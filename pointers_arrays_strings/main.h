int _putchar(char);

char *_memset(char *l, char a, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *l, char c);

unsigned int _strspn(char *l, char *accept);
char *_strpbrk(char *l, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*b)[8]);

void print_diagsums(int *b, int size);

void set_string(char **l, char *to);

int coincidence(char *b, char *a);
