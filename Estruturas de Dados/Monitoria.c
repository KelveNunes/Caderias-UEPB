#include <stdio.h>

int soma(int num1, int num2) {
	int adicao = 0;
	int i;

	// num1 sera a quantidade de numeros somados e idica tbm se � par ou impar,
	// ja num2 � so o primeiro numero da sequencia de somas

	//             |-------num1-------|
	// num1 = 4 --> 6 + 8 + 10 + 12 = 36
	//             |
	//             num2 = 5, logo come�a do 6

    // Verfica se o num1 � par
	if (num1 % 2 == 0) {
            // Nesse caso o num1 vai servir como condi��o de parada
		for (i=0; i<num1; i++) {
            // Caso o num2 seja impar ele incrementa a condi��o de parada e incrementa o num2;
           if(num2 % 2 != 0){
                num1++;
                num2++;
           }
           // Caso o num2 seja par adi��o recebe num2 e incrementa num2;
           else{
            adicao+=num2;
            num2++;
           }
		}
     // caso o num 2 seja impar
	}else {
	    //num1 condi��o de parada
		for (i=0; i<num1; i++) {
                //caso num2 seja par ele incrementa a condi��o de parada e incrementa o num2;
			if (num2 % 2 == 0) {
				num1++;
				num2++;
			}
               // caso num2 impar adi��o recebe num2 e incrementa num2;
			else{
                adicao+=num2;
                num2++;
			}
		}
	}

	return adicao;
}

int main() {
    int num1, num2;
    printf("Quantos numeros deseja somar? ");
    scanf("%d", &num1);
	printf("A partir de qual numero deseja somar? ");
    scanf("%d", &num2);

	printf("Total da Soma: %d", soma(num1, num2));

	return 0;
}
