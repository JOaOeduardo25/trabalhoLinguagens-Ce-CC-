#include <iostream>
using namespace std;

int main() {
    char nome[30];
    char endereco[30];
    int idade;
    
    cout << "Nome: ";
    cin.getline(nome, 30);
    
    cout << "Endereco: ";
    cin.getline(endereco, 30);
    
    cout << "Idade: ";
    cin >> idade;
    
    cout << "\nNome: " << nome;
    cout << "\nEndereco: " << endereco;
    cout << "\nIdade: " << idade;
    
    return 0;
}
