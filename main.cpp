#include "Pessoa.h"
#include "Chefe.h"
#include "Funcionario.h"
int main() {

    Pessoa opcao;
    Chefe c;
    Funcionario f;

    int op,op2;

    cout << "------------------------" << endl;
    cout << " 1 - LOGIN " << endl;
    cout << " 2 - SAIR DO SISTEMA " << endl;
    cout << "------------------------" << endl;
    cout << "Informe sua opcao: " ; cin >> op;

    if(op == 1) {
        opcao.informeTipo(); // menu para saber o tipo do usuario
        op2 = opcao.getTipo(); // saber o tipo que o usuario informou
        if(op2 == 1){ // se for chefe
            c.exibirMenu(); // mostra as acoes que o chefe faz
        }
        else{ // se for funcionario
            f.exibirMenu(); // mostra as acoes que funcionario pode fazer
        }
    }
    else return 0;

    return 0;
}