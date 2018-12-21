#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double rnd1() {
	return (double)rand()/((double)RAND_MAX+1);
}

int main(){
	int cnt = 0;
	int div = -1;
	int hit = 0;
	srand(time(NULL));
	
	while(cnt != div){
		cnt = cnt + 1;
		double x = rnd1();
		double y = rnd1();
		if(sqrt(x*x+y*y) <= 1) hit = hit + 1;
		double pi = 4.0*hit/cnt;
		printf("pi=%f\n",pi);
	};
	double pi = 4.0*hit/cnt;
	printf("pi=%f\n",pi);
	getchar();
}
