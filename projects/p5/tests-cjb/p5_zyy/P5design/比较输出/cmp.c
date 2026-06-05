#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *Verilog, *Mars;
	char strv[54], strm[22];
	int i = 0;
	Verilog = fopen("Verilog.txt","r");
	Mars = fopen("Mars.txt","r");
	fgets(strv,54,Verilog);			//消去空格行
	while (fgets(strv, 54, Verilog) != NULL)
	{
		fgets(strm, 22, Mars);
		i++;
		if (strstr(strv, strm) == NULL)
		{
			printf("@Line:%d %s", i, strv);
			getchar();
		}
		if (strchr(strm, '*') != NULL)
		{
			fgets(strm, 22, Mars);
		}
	}
	printf("Pass!");
	getchar();
	return 0;
}