#include <stdio.h>

int main(){
	float ha = 1.84, hb = 1.76;
	int wa = 122, wb = 45;
	float mmca = wa/(ha*ha);
	float mmcb = wb/(hb*hb);
	printf("%.1f\n", mmca);	
	return 0;
}
