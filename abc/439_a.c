#include <stdio.h>
#include <math.h>
int main(){
	int N;
	int res;
	scanf("%d", &N);
  res = (int)(pow(2, N) - 2*N);
  printf("%d", res);
  return 0;
}
