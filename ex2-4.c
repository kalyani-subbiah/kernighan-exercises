#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 30

/* Write an alternative version of squeeze(s1,s2) 
that deletes each character in
s1 that matches any character in the string s2.
*/

void squeeze(char s1[], char s2[])
{
	
	int i,j,k,l;

	bool valid;

	for (i = k = 0; s1[i] != '\0'; i++)

	{

		valid = true;
		for (j = l = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				valid = false;
			}
		}

		if (valid == false)
		{
			;
		}
		else
		{
			s1[k++] = s1[i];
		}
	}
	s1[k] = '\0';
}

int main()
{ 
  int num, i = 0;
  char line[MAXLINE];
  char line2[MAXLINE];
  char c;

  while ((c = getchar()) != EOF && i < MAXLINE && c != ':')
  {
  	line[i] = c;
  	++i;
  }

  line[i] = '\0';

  i = 0;

  while ((c = getchar()) != EOF && i < MAXLINE)
  {
  	line2[i] = c;
  	++i;
  }

  line2[i] = '\0';


  squeeze(line, line2);

  printf("\n------\n");

  for (i = 0; line[i] != '\0'; i++)
  {
  	printf("%c", line[i]);
  }

  i = 0;

  printf("\n");
}