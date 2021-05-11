#include<stdio.h>

#define MAXLINE 1000

int mgetline(char line[],int lim);
void reverse(char rline[], char reversed[]);

int main(void)
{
  int len;
  char line[MAXLINE];
  char reversed[MAXLINE];
  
  while((len=mgetline(line,MAXLINE))>0)
  {
    reverse(line, reversed);
    printf("%s",reversed);
  }

  return 0;
}


int mgetline(char s[],int lim)
{
  int i,c;

  for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    s[i] = c;
  if( c == '\n')
  {
    s[i]=c;
    ++i;
  }
  s[i]='\0';
  
  return i;
}

/* To remove Trailing Blanks,tabs. Go to End and proceed backwards removing */

void reverse(char s[], char t[])
{
  int i;
  int j = 0;

  for(i=0; s[i]!='\n'; ++i)
    ;
  --i;
  for(; i >= 0; --i)   
  {
    t[j] = s[i];
    ++j;
  }

  t[j] = '\n';
  ++j;
  t[j] = '\0';

}