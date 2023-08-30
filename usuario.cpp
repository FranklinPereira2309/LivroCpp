#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    int opcao, senha;
    cout << "Digite o numero de usuario: \n";
    cin >> opcao;
    cout << "Digite sua senha: \n";
    cin >> senha;
    
    switch (opcao)
    {
    case 982753:
        if(senha == 83928) {cout << "Login do usuário(982753) efetuado com sucesso!\n" << endl;}
        break;
    case 263572:
        if (senha == 49582) {cout << "Login do usuário(263572) efetuado com sucesso!\n" << endl;}
        break;
    
    case 275493:
        if (senha == 72648) {cout << "Login do usuário(275493) efetuado com sucesso!\n" << endl;}
        break;
    
    default:
        cout << "Usuário inválido!\n";
        break;
    }

    return 0;
}