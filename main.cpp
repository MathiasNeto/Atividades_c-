#include <iostream>

using namespace std;

//Questao 1
void povoarVetor (int v[], int tam){
    for(int i = 0; i<tam; i ++){
        cout<<i+1<<" Numero ";
        cin>>v[i];
    }
}

//Questao 2
void imprimirVetor(int vet[], int tam){
    for(int i = 0; i < tam; i ++){
        cout<<vet[i]<<" ";
    }

}
//Questao 3
int maiorNumero(int vet[], int tam){
    int maior = 0;
    for(int i = 0; i < tam; i ++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

//Questao 4
void valorepetido(int vet[], int tam){
    for(int i = 0; i < tam; i ++){
        if(vet[i] == vet[i + 1]){
            cout<<"Existe numeros repetidos";
            break;
        }
        cout<<"Nao existe numeros repetidos";
        break;
    }
}
//Questao 5
void hipotenusa(int h, int c1, int c2){
    if(h*h == c1*c1 + c2*c2){
        cout<<"O Quadrado da hipotenusa eh igual a soma dos dois catetos adejacentes";
    }
    else
        cout<<"O Quadrado da hipotenusa nao eh igual a soma dos dois catetos adejacentes";

}
//Questao 6
void imprimirVetorRecursiva(int v[], int tam){
    if(tam == 1){
        cout<<"";
    }
    else
        imprimirVetorRecursiva(v, tam - 1);
        cout<<v[tam-1]<<" ";
}
//Questao 7
void imprimirVetorInverso(int v[], int ini, int fim){
    int aux = 0;
    if(ini < fim){
    aux = v[ini];
    v[ini] = v[fim];
    v[fim] = aux;
    imprimirVetorInverso(v, ini+1, fim-1);
    }

}
//Questao 8
int fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    //Váriaveis
    int tam = 0;
    int c1 = 4;
    int c2 = 3;
    int h = 5;
    cout<<"Qual o tamanho do vetor ";
    cin>>tam;

    int vet[tam];

    povoarVetor(vet, tam);
    imprimirVetor(vet, tam);
    printf("\n");
    cout<<"O maior numero do vetor eh "<< maiorNumero(vet, tam);
    printf("\n");
    valorepetido(vet, tam);
    printf("\n");
    hipotenusa(h, c1 , c2);
    printf("\n");
    imprimirVetorRecursiva(vet, tam);
    printf("\n");
    imprimirVetorInverso(vet, 0 , tam-1);
    imprimirVetor(vet,tam);
    printf("\n");
    cout<<fibonacci(c1);
}
