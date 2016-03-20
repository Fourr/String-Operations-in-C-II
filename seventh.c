#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



int  main(int argc,char** argv){
	int i = 1;
	int len;
	if(argc ==1)
	{
	printf("error");
	}
	for(i=1;i<argc;i++){
		len = strlen(argv[i]);
		printf("%c", argv[i][len-1]);
	}
	printf("\n");
return 0;
}
