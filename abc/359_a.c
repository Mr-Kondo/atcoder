#include <stdio.h>
#include <string.h>

int main(){
	int N;
	char str[100];
	int res = 0;
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%s", str);
		// printf("%s\n", str);
		if(strcmp(str, "Takahashi") == 0) res++;
	}
	
	printf("%d", res);
	return 0;
}
