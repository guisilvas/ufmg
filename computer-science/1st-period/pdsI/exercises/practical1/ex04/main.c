#include <stdio.h>

int main(){
	// Conta aberta
	float saldo = 0;
	// Mes 1
	saldo = saldo + 789.54;
	saldo = saldo * 1.56;
	// Mes 2
	saldo = saldo + 303.20;
	saldo = saldo * 1.56;
	// Mes 3
	saldo = saldo - 58.25;
	saldo = saldo * 1.56;
	// Saldo final
	printf("%.2f\n", saldo);
	return 0;
}
