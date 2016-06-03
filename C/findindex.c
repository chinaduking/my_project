#include "stdio.h"
#include "string.h"

int strStr(char* source,char* target)
{
	if (source == NULL || target == NULL) return -1;

	const int len_s = strlen(source);
	const int len_t = strlen(target);

	for(int i=0;i<len_s-len_t+1;i++)
	{
		int j =0;
		for(;j<len_t;j++){
			if(source[i+j] != target[j])
			{
				break;
			}
		}
		if (j == len_t) return i;
	}

	return -1;
}

void main(void)
{
	char *source;
	char *target;
	int num;
	printf("please input your source:");
	scanf("%s",source);
	printf("please input your target:");
	scanf("%s",target);
	num = strStr(source,target);
	printf("Output:");
	printf("%d\n",num);
	
}
