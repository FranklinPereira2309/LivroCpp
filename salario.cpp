#include <iostream>
#include <iomanip>

using namespace std;
float valorHorasTrabalhadas, qtdHorasTrabalhadas, qtdHorasExtra, totalHorasExtra, totalHorasTrabalhadas, salarioFinal;
float salarioBase, valorBeneficioPorDependente, valorTotalBeneficioPorFilho, valorTotalBeneficioPorSalario;
float impostoSalario;
int qtdDependentes;

int main() {
    cout << "Digite o salario do empregado por h/trab: \n";
    cin >> valorHorasTrabalhadas;
    cout << "Digite o numero de horas trabalhadas: \n";
    cin >> qtdHorasTrabalhadas;
    cout << "Digite o numero horas extras trabalhadas: \n";
    cin >> qtdHorasExtra;
    cout << "Digite o numero de dependentes: \n";
    cin >> qtdDependentes;

    valorBeneficioPorDependente = 128;

    totalHorasExtra = qtdHorasExtra * valorHorasTrabalhadas; 

    valorTotalBeneficioPorFilho = qtdDependentes * valorBeneficioPorDependente;
    
    salarioBase = (valorHorasTrabalhadas * qtdHorasTrabalhadas) + totalHorasExtra + valorTotalBeneficioPorFilho;

    if(salarioBase > 3582.01) {
        impostoSalario =  salarioBase - (salarioBase * 0.275) ;
    }else if(salarioBase >= 2866.71 && 3582.00) {
        impostoSalario = salarioBase - (salarioBase * 0.225);

    }else if(salarioBase >= 2150.01 && salarioBase <= 2866.70) {
        impostoSalario = salarioBase - (salarioBase * 0.15);
    }else if(salarioBase >= 1434.60 && salarioBase <= 2150) {
        impostoSalario = salarioBase - (salarioBase * 0.075);
    }else {
        impostoSalario = salarioBase;
    }

    salarioBase = impostoSalario;
    
    if(salarioBase > 1000) {
        valorTotalBeneficioPorSalario = salarioBase + 100;

    }else if(salarioBase >= 500 && salarioBase <= 1000) {
        valorTotalBeneficioPorSalario = salarioBase + 120;
    }else {
        valorTotalBeneficioPorSalario = salarioBase + 180;
    }
    salarioFinal = valorTotalBeneficioPorSalario;
    system("cls");

    cout << "O salario final do empregado e: R$" << fixed << setprecision(2) 
    << salarioFinal << endl;
}