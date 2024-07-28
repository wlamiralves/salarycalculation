#include <iostream>  // Para entrada e saída de dados
#include <iomanip>   // Para manipulação de formato
#include <locale.h>  // Para trabalhar com acentos

using namespace std;

void calcularSalario() {
    double valorHora, horasTrabalhadasMes, salarioBruto, descontoIR, descontoINSS, descontoSindicato, salarioLiquido;

    // Solicita o valor ganho por hora
    cout << "Digite quanto você ganha por hora trabalhada (R$): ";
    cin >> valorHora;

    // Solicita o número de horas trabalhadas no mês
    cout << "Digite quantas horas você trabalhou neste mês: ";
    cin >> horasTrabalhadasMes;

    // Calcula o salário bruto
    salarioBruto = valorHora * horasTrabalhadasMes;

    // Calcula os descontos
    descontoIR = salarioBruto * 0.11;         // 11% de IR
    descontoINSS = salarioBruto * 0.08;       // 8% de INSS
    descontoSindicato = salarioBruto * 0.05;  // 5% de Sindicato
    salarioLiquido = salarioBruto - (descontoIR + descontoINSS + descontoSindicato);

    // Exibe o resultado
    cout << "\nDetalhamento do Salário:\n";
    cout << fixed << setprecision(2); // Formata números para duas casas decimais
    cout << "Salário Bruto: R$ " << salarioBruto << "\n";
    cout << "Desconto IR (11%): R$ " << descontoIR << "\n";
    cout << "Desconto INSS (8%): R$ " << descontoINSS << "\n";
    cout << "Desconto Sindicato (5%): R$ " << descontoSindicato << "\n";
    cout << "Salário Líquido: R$ " << salarioLiquido << "\n";
}

int main() {
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    do {
        // Exibe a interface inicial
        cout << "=========================================\n";
        cout << "       Calculadora de Salário\n";
        cout << "=========================================\n";

        // Calcula o salário
        calcularSalario();

        // Pergunta se o usuário deseja calcular novamente ou sair
        cout << "\nDeseja calcular novamente? (s/n): ";
        cin >> opcao;
        cin.ignore(); // Ignora o caractere de nova linha deixado pelo cin

    } while (opcao == 's' || opcao == 'S');

    // Mensagem de agradecimento ao sair
    cout << "\nObrigado por usar o serviço! Até a próxima.\n";

    // Impede o fechamento da tela após execução do código para dar tempo de testarmos e ver o resultado
    cout << "\nPressione Enter para sair...";
    cin.get(); // Espera o usuário pressionar Enter

    return 0;
}

