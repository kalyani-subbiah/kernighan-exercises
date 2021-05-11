#include<stdio.h>

#define MAXLINE 1000

int mgetline(char line[],int lim);
void removecomments(char rline[], int len);

int main(void)
{
  int len;
  char line[MAXLINE];
  char reversed[MAXLINE];
  
  while((len=mgetline(line,MAXLINE))>0)
  {
    printf("------------\n");
    removecomments(line, len);
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

void removecomments(char s[], int len)
{
  int i, j, c, comment;

  comment = 0;

  for(i=0;i<len;++i)
  {
    j  = i+1;
    if (s[i] == '/' && s[j] == '*')
    {
      ++i;
      j = i+ 1;
      comment = 1;
    }

    else if (s[i] == '*' && s[j] == '/' && comment == 1)
    {
    	comment = 0;
    	++i;
    	j = i+1;
    }

    else if (comment == 1)
    {
    	;
    }
    
    else 
    { 
      printf("%c", s[i]);
    }
  }

}