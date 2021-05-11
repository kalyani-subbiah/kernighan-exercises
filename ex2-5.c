#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 30

/* 
Write the function any(s1,s2), which returns the first location 
in a string s1 where any character from the string s2 occurs, 
or -1 if s1 contains no characters from s2. 
(The standard library function strpbrk does the same job
 but returns a pointer to the location.)
*/


int location(char s1[], char s2[])
{
  
  int i,j,k,l;


  for (i = k = 0; s1[i] != '\0'; i++)

  {

    for (j = l = 0; s2[j] != '\0'; j++)
    {
      if (s1[i] == s2[j])
      {
        return i+1;
      }
    }
  }
  return -1;
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


  num = location(line, line2);

  printf("\n------\n");

  printf("%d\n", num);
}