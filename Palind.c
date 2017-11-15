#include <stdio.h>
#include <string.h>
  int j;
  char mid;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
char  *Rever(char *str)
{
	char temp;
	int i=0,j=0;	
	j=strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	return str;
}
void permute(char *a, int l, int r)
{
   int i;
   char temp[100];
   if (l == r)
   {
     printf("%s", a);
     for(i=0;i<strlen(a);i++)
	{
		temp[i]=a[i];
	}
	temp[i]='\0';
     if(j%2!=0)
     {
     	 printf("%c",mid);
	 }
     printf("%s\n",Rever(temp);s
   }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i));
       }
   }
}
 
int main()
{
	
	char original[100],test[100];
	int i,lenth;
	scanf("%s",original);
	j=strlen(original);
	mid=original[j/2];
	for(i=0;i<j/2;i++)
	{
		test[i]=original[i];
	}
	test[i]='\0';
	
    lenth=strlen(test);
    int n = lenth;
    permute(test, 0, n-1);
    return 0;
}