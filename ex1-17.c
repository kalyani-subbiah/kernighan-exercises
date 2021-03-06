#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);

/* print input lines greater than 80 */
main()
{
  int len; /* current line length */
  char line[MAXLINE]; /* current input line */

  while ((len = get_line(line, MAXLINE)) > 0)
  {
    if (len > 10)
      printf(">>>>>>>>>\n%s", line);
  }

  return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
  int c, i, cur_start;

  
  
    for (i=0; i < lim - 1 && (c=getchar())!=EOF && c!='\n'; ++i)
    {
     	s[i] = c;
    }
    
    if ((c == '\n') && (c!=EOF))
    {
      s[i] = c;
      ++i;
      s[i] = '\0';
    }

    else if (c!=EOF && c!='\n')
    {
      s[i] = '\0';
      while ((c=getchar())!=EOF && c!='\n')
      {
        ++i;
      }
    }

  return i;
}
