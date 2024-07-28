#include <iostream>  // Para entrada e sa�da de dados
#include <iomanip>   // Para manipula��o de formato
#include <locale.h>  // Para trabalhar com acentos

using namespace std;

void calcularSalario() {
    double valorHora, horasTrabalhadasMes, salarioBruto, descontoIR, descontoINSS, descontoSindicato, salarioLiquido;

    // Solicita o valor ganho por hora
    cout << "Digite quanto voc� ganha por hora trabalhada (R$): ";
    cin >> valorHora;

    // Solicita o n�mero de horas trabalhadas no m�s
    cout << "Digite quantas horas voc� trabalhou neste m�s: ";
    cin >> horasTrabalhadasMes;

    // Calcula o sal�rio bruto
    salarioBruto = valorHora * horasTrabalhadasMes;

    // Calcula os descontos
    descontoIR = salarioBruto * 0.11;         // 11% de IR
    descontoINSS = salarioBruto * 0.08;       // 8% de INSS
    descontoSindicato = salarioBruto * 0.05;  // 5% de Sindicato
    salarioLiquido = salarioBruto - (descontoIR + descontoINSS + descontoSindicato);

    // Exibe o resultado
    cout << "\nDetalhamento do Sal�rio:\n";
    cout << fixed << setprecision(2); // Formata n�meros para duas casas decimais
    cout << "Sal�rio Bruto: R$ " << salarioBruto << "\n";
    cout << "Desconto IR (11%): R$ " << descontoIR << "\n";
    cout << "Desconto INSS (8%): R$ " << descontoINSS << "\n";
    cout << "Desconto Sindicato (5%): R$ " << descontoSindicato << "\n";
    cout << "Sal�rio L�quido: R$ " << salarioLiquido << "\n";
}

int main() {
    // Biblioteca respons�vel pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    do {
        // Exibe a interface inicial
        cout << "=========================================\n";
        cout << "       Calculadora de Sal�rio\n";
        cout << "=========================================\n";

        // Calcula o sal�rio
        calcularSalario();

        // Pergunta se o usu�rio deseja calcular novamente ou sair
        cout << "\nDeseja calcular novamente? (s/n): ";
        cin >> opcao;
        cin.ignore(); // Ignora o caractere de nova linha deixado pelo cin

    } while (opcao == 's' || opcao == 'S');

    // Mensagem de agradecimento ao sair
    cout << "\nObrigado por usar o servi�o! At� a pr�xima.\n";

    // Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
    cout << "\nPressione Enter para sair...";
    cin.get(); // Espera o usu�rio pressionar Enter

    return 0;
}

