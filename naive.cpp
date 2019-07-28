#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void search(char *t,char *pat)
{
int n=strlen(t);
int m=strlen(pat);
int i,j;
for(i=0;i<=n-m;i++)
{
for(j=0;j<m;j++)
if(t[i+j]!=pat[j])
break;

if(j==m)
cout << "Pattern found at index";
}
return;
}

int main()
{
char pat[10];
char *text;
int n,m,i=0;
size_t size = 0;

FILE *fp = fopen("C.csv", "r");
fseek(fp, 0, SEEK_END);
size = ftell(fp);
rewind(fp);
text = (char*)malloc((size + 1) * sizeof(*text));
fread(text, size, 1, fp);
text[size] = '\0';

cin >> pat;
int lenp=strlen(pat);
cout << "Enter pattern:";
cin >> text;

search(text,pat);

return 0;
}
