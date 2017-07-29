#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main()
{
char s[1000];
int t,l,p;
scanf("%s",s);
//printf("%s",s);
char str1[strlen(s)],str2[strlen(s)];
strcpy(str1,s);
strcpy(str2,s);
str1[strlen(s)]='\0';
str2[strlen(s)]='\0';

//printf("debug%s\n%s",str1,str2);
scanf("%d",&t);
//printf("%d",t);
//printf("%d",p);
for(int i=0;i<t;i++)
{
	scanf("%d%d",&l,&p);
	
	
	for(int j=0;j<(int)strlen(s);j++)
	{	
		char temp[l];
		int count=0;
		char *poda=malloc(sizeof(char)*strlen(s));
		strncpy(temp,str1+j,l);
		temp[l]='\0';
		//printf("vada  %s\n",temp);
		strcpy(poda,str1);
		poda[strlen(s)+1]='\0';
		//printf("%s",poda);
		while(poda=strstr(poda,temp))
		{
			//printf("%s",poda);
			count++;
			poda++;
		if(count==2&&(int)strlen(temp)==l)
			{
			printf("%s\n",temp);
			break;		
			}
			
		}
			
		
		
	}
}
return 0;
}
