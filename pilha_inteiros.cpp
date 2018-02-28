/*

Programa em C++ que solicita e armazena em uma pilha numeros inteiros
enquanto o usuario deseja. Depois imprime o conteudo da pilha.

*/

#include<stack>
#include<iostream>
using namespace std;
int main(){
stack <int> pilha;
char d;
int x;

    //vai receber os dados inseridos pelo usuario
do{
  cout<<"\nDigite um numero inteiro: ";  cin>>x;
  pilha.push(x);    //armazena o que foi armazenado em x para a pilha
  cout<<"\ndeseja inserir outro <s/n> ?"; cin>>d;
}while(d=='s' || d=='S');

    //imprime os dados inseridos na pilha
while(!pilha.empty()){
  cout<<"\n"<<pilha.top()<<"\n";
  pilha.pop();
}

cout<<"\n\n";
return 0;
}
