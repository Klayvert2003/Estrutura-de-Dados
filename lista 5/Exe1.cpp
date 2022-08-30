#include<iostream>
#include<cstdlib>
#include<Locale>
using namespace std;


int main(){
    
    struct pessoa{
        char nome[50];
        char posicao[30];
        int idade;
        float altura;
    };

    struct pessoa atleta[5];

    for(int i=0; i < 5; i++){
        cout << "Insira o nome do atleta " << i+1 << ": ";
        cin >> atleta[i].nome;
        cout << "Insira a posicao do atleta " << i+1 << ": ";
        cin >> atleta[i].posicao;
        cout << "Insira a idade do atleta " << i+1 << ": ";
        cin >> atleta[i].idade;
        cout << "Insira a altura do atleta " << i+1 << ": ";
        cin >> atleta[i].altura;
        cout << endl;
    }


    struct pessoa atletaaux[5];

    for(int i=0; i < 5; i++){
        for(int j=i; j < 5; j++){
            if(atleta[j].idade > atleta[i].idade){
                atletaaux[i] = atleta[i];
                atleta[i] = atleta[j];
                atleta[j] = atletaaux[i];
            } else{
                atletaaux[i] = atleta[i];
            }
        }
    }

    cout << "Dados ordenados por idade:" << endl;
    for(int i=0; i < 5; i++){
        cout << "O nome do atleta " << i+1 << " foi: " << atleta[i].nome << endl;
        cout << "A posicao escolhida do atleta " << i+1 << " foi: " << atleta[i].posicao << endl;
        cout << "A idade do atleta " << i+1 << " corresponde: " << atleta[i].idade << endl;
        cout << "A altura corresponde: " << atleta[i].altura << endl << endl;
    }

    return 0;
}