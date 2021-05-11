#include<stdio.h>

#define MAXLINE 1000
#define FOLD 5

int mgetline(char line[],int lim);
void foldline(char rline[], int len);

int main(void)
{
  int len;
  char line[MAXLINE];
  char reversed[MAXLINE];
  
  while((len=mgetline(line,MAXLINE))>0)
  {
    printf("------------\n");
    foldline(line, len);
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

void foldline(char s[], int len)
{
  int i, c, f;
  f = 0;

  if (len > FOLD) 
  { 
    for(i=0;i<len;++i)
    {
      printf("%c", s[i]);
      ++f;
      if ((f > FOLD) && (s[i] == '\t' || s[i] == ' '))
      {
        printf("\n");
        f = 0;
      }
    }

  }

}