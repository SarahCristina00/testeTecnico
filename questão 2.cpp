/******************************************************************************

Escreva um programa que verifique, em uma string, a existência da letra ‘a’, 
seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela
ocorre.
*******************************************************************************/
#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int tamanho;
    int vezes = 0;
    cout<<"Informe a quantidade de caracteres da string: "<<endl;
    cin>>tamanho;
    char str[tamanho];
    cout<<"Digite uma String: "<<endl;
    cin.ignore();
    cin.getline(str,tamanho);

    for(int i = 0; i<tamanho; i++){
        if(str[i]!='\0'&& str[i] == 'A' || str[i] == 'a'){
              vezes++;
        }
    }
    
    if(vezes > 0){
        cout<<"A letra 'A' ou a letra 'a' aparecem "<<vezes<<" vezes"<<endl;
    }

    return 0;
}