#include <stdio.h>

#define MAX_LENGHT 10000

int main(void)
{
	char a[],b,c;
	FILE *file_handle;
	
	if((file_handle=fopen("light.html","r"))==NULL)
	{
		printf("\nerror, could not open file for read!!\n");
	}
	
	while(!feof(file_handle))
	{
		
	}
	

}
