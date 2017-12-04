//
// Created by gusta on 30/11/2017.
//

#include "Chefe.h"
#include <vector>
void Chefe::exibirMenu(){
    int op;
    cout << "----------------------------------------" <<endl;
    cout << "1 - CADASTRAR FUNCIONARIO"<<endl;
    cout << "2 - FUNCIONARIOS CADASTRADOS"<<endl;
    cout << "3 - CHECAR PONTO"<<endl;
    cout << "4 - CALCULO DO SALARIO(HORAS TRABALHADAS)"<<endl;
    cout << "5 - RETORNAR A TELA PRINCIPAL"<<endl;
    cout << "-----------------------------------------" <<endl;
    cout << "INFORME SUA OPCAO: "; cin >> op;
    this->acao = op;
}
void Chefe::controle() {
    if(acao==5) return ;
    else if(acao==1){//cadastrar funcionario
        cadastrarFuncionario();
    }
    else if(acao==2){//imprime os funcionarios cadastrados
        funcionariosCadastrados();
    }
}
void Chefe::cadastrarFuncionario() {
    string nome,funcao,tipo,usuario,senha;
    double salarioPorHora; int horasTrabalhadas,qtd;
    cout << "Informe a quantidade de funcionarios que deseja cadastrar: "; cin>>qtd;
    vector <Funcionario*> func(qtd);
    for(int i=0;i<qtd;i++){
        cout << "Informe seu nome: "; cin >>nome;
        cout << "Informe sua funcao: "; cin >> funcao;
        cout << "Informe seu tipo: "; cin >> tipo;
        cout << "Informe seu usuario: "; cin >> usuario;
        cout << "Informe sua senha: "; cin >> senha;
        cout << "Informe seu salario por hora: "; cin >>salarioPorHora;
        cout << "Informe a quantidade de horas trabalhadas: "; cin >> horasTrabalhadas;
        func[i] = new Funcionario(nome,funcao,tipo,usuario,senha,salarioPorHora,horasTrabalhadas);
    }
}
void Chefe::funcionariosCadastrados() {
    int x ;
}
double Chefe::calcularSalario() {

}