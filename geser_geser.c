#include<stdio.h>
#include <stdlib.h>
#include <string.h>
char * shiftStr (char str[], int offset)
{
  unsigned int i,k;
  char* kataAkhir;
  char temphuruf[1];
	for (k = 0; k < offset; k++)
	{
		
		for (i = 0; str[i] != '\0'; i++) {
	  	if(i==0){
	  		temphuruf[0]=str[i];
	  	}
	  	if(str[i]!='\0'){
	  		str[i] = str[i+1];
	  	}
	  	if(str[i]=='\0'){
	  		str[i] = temphuruf[0];
	  	}
	  }
	  if(k==0){
	  	strcpy(kataAkhir, str);
	  }else{
	  	strcat(kataAkhir,str);
	  }
	}
  return kataAkhir;
}

int main(){
	int i=0, j=0;
	int arr[20];

	char tempChar[1000];
	char hasil[1000][1000];
	char temp;
	do{
		scanf("%d%c", &arr[i], &temp);
		i++;
	}while(temp != '\n');
	
	for (j=0; j<arr[0]; j++){
		scanf("%s", tempChar);
		strcpy(hasil[j], shiftStr(tempChar,arr[1]));
	}
	for (j=0; j<arr[0]; j++){
		printf("%s\n",hasil[j] );
	}
	return 0;
}
