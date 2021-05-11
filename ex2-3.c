#include <stdio.h>
#define MAXLINE 10
/* ascii codes
A = 65
a = 97
convert string of hexadecimal digits into equivalent integer value */
int htoi(char hex[], int len);
int power(int base, int n);

/* power raise base to n-th power; n >= 0 */
int power(int base, int n)
{
  int i, p;

  p = 1;
  for (i = 1; i <= n; ++i)
    p = p * base;
  return p;
}

int htoi(char hex[], int len)
{	
	int i, j = 0;
	int num = 0;

	for (i = len; hex[i] >= 0; --i)
	{
		if (i == 0 && hex[i] == '0')
		{
			;
		}
		else if (i == 1 && (hex[i] == 'x' || hex[i] == 'X'))
		{
			;
		}
		else if (hex[i] >= '0' && hex[i] <= '9')
		{
			num = num + power(16, j)*(hex[i] - '0');
			printf("\n%d\n", num);
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			num = num + power(16, j)*((int) hex[i] - 87);
			printf("\n%d\n", num);
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			num = num + power(16, j)*((int) hex[i] - 55);
			printf("\n%d\n", num);
		}
		else
		{
			return num;
		}

		++j;
	}

	return num;
}


int main()
{ 
  int num, i = 0;
  char line[MAXLINE];
  char c;

  while ((c = getchar()) != EOF && i < MAXLINE && c != '\n')
  {
  	line[i] = c;
  	++i;
  }
  num = htoi(line, i-1);
  printf("\n------\n");
  printf("%d", num);
}