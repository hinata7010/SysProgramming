#include <stdio.h>
#include <stdlib.h>
int main(){
	char str=' ', str2;
	while(1)
	{
		printf("\n문자 입력:");
		scanf("%c", &str);
	    if(str>='A' && str<='Z'){
			str2=str+32;
			printf("%c의 소문자는 %c입니다.", str, str2);
		}
		else if(str >='a' && str <='z'){
			str2 = str - 32;
			printf("%c의 대문자는 %c입니다.", str, str2);
		}
		

		if(str == '0')
		{
			exit(1);
		}

		getchar();
	}

}
