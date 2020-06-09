#include <iostream>
#include <cmath>
#include <locale.h>
//feito por Jo�o Carlos! 
//Programa utilizado: Dev C++
//1� m�dulo desenvolvimento de sistemas Turma A
double soma(double a, double b) {
	return a+b;
}

double mult(double a, double b) {
	return a*b;
}

double div(double a, double b) {
	return a/b;
}
double sub(double a, double b) {
	return a-b;
}
double pot(double a, double b){
	return pow(a,b);
}
double e(double a){
	return pow(2.718281828459045235360287471352662497757,a);
}


int main(int argc, char **argv) {
	
    setlocale(LC_ALL, "Portuguese");

	char operacao,ajuda;
	double numA, numB;
	double resultados;
	
    std::cout << "Para ver o guia de usu�rio da calculadora, digite (h) e d� enter, se n�o digite qualquer coisa e d� enter " << std::endl;
    std::cin >> ajuda;
    switch (ajuda) {
	case 'h':
    std::cout << "Para usar a opera��o soma, digite +"<< std::endl;
    std::cout << "Para usar a opera��o subtra��o, digite -"<< std::endl;
    std::cout << "Para usar a opera��o divis�o, digite /"<< std::endl;
    std::cout << "Para usar a opera��o multiplica��o, digite *"<< std::endl;
    std::cout << "Para usar a opera��o de pot�ncia, digite ^"<< std::endl;
    std::cout << "Para usar a opera��o de pot�ncia com o valor (e), digite e"<< std::endl;
    std::cout << "Obs: O valor do segundo n�mero n�o interfir� na opera��o de pot�ncia com o valor (e)" << std::endl;
}

	std::cout << "Digite um N�mero:";
	std::cin >> numA;
	std::cout << "Digite a opera��o:";
	std::cin >> operacao;
	std::cout << "Digite outro N�mero:";
	std::cin >> numB;
	
		switch (operacao) {
		case '+':
		    resultados = soma(numA, numB);
		    break;
		case '/':
		    resultados = div(numA, numB);
		    break;
		case '*':
		    resultados = mult(numA, numB);
		    break;
		case '-':
		    resultados = sub(numA, numB);
		    break;
		case '^':
		    resultados = pot(numA, numB);
		    break;
		case 'e':
		    resultados = e(numA);
		    break;
		default:
			break;
		      
	}
	
	std::cout << resultados << std::endl;
	
	return 0;
}
