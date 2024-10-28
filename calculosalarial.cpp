#include <iostream> 
#include <iomanip>   
#include <locale.h> 

using namespace std;

void calcularSalario() {
    double valorHora, horasTrabalhadasMes, salarioBruto, descontoIR, descontoINSS, descontoSindicato, salarioLiquido;

    
    cout << "Digite quanto você ganha por hora trabalhada (R$): ";
    cin >> valorHora;

    
    cout << "Digite quantas horas você trabalhou neste mês: ";
    cin >> horasTrabalhadasMes;

    
    salarioBruto = valorHora * horasTrabalhadasMes;

    
    descontoIR = salarioBruto * 0.11;        
    descontoINSS = salarioBruto * 0.08;       
    descontoSindicato = salarioBruto * 0.05;  
    salarioLiquido = salarioBruto - (descontoIR + descontoINSS + descontoSindicato);

    
    cout << "\nDetalhamento do Salário:\n";
    cout << fixed << setprecision(2); 
    cout << "Salário Bruto: R$ " << salarioBruto << "\n";
    cout << "Desconto IR (11%): R$ " << descontoIR << "\n";
    cout << "Desconto INSS (8%): R$ " << descontoINSS << "\n";
    cout << "Desconto Sindicato (5%): R$ " << descontoSindicato << "\n";
    cout << "Salário Líquido: R$ " << salarioLiquido << "\n";
}

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    do {
        
        cout << "=========================================\n";
        cout << "       Calculadora de Salário\n";
        cout << "=========================================\n";

        
        calcularSalario();

       
        cout << "\nDeseja calcular novamente? (s/n): ";
        cin >> opcao;
        cin.ignore(); 

    } while (opcao == 's' || opcao == 'S');

   
    cout << "\nObrigado por usar o serviço! Até a próxima.\n";

    
    cout << "\nPressione Enter para sair...";
    cin.get(); 

    return 0;
}

