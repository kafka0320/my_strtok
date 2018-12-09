#include <stdio.h>
#include <string.h>

void m_strtok(char *strp);

int main(){
	// char mstring[100] = "I love you";
	char mstring[10000];
	printf("enter String (Until 9990 words(include space)) :");
	int count = 0;
	while(count<9998){
		char input;
		scanf("%c", &input);
		if(input == '\n'){
			break;
		}
		else{
			mstring[count] = input;
		}
		count++;
	}
	m_strtok(mstring);
}

void m_strtok(char *strp){
	while(*strp != '\0'){
		if(*strp == ' '){
			printf("\n");
		}
		else{
			printf("%c", *strp);
		}
		strp++;
	}
	printf("\n");
}