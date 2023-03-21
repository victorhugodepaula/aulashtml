#include<iostream>
using namespace std;

int main(){
	int n1, n2, n3, n4;
	char op;
	cout<<"opcoes de operacoes: "<<endl;
	cout<<" 1. soma"<<endl;
	cout<<" 2. subtracao "<<endl;
	cout<<" 3. divisao"<<endl;
	cout<<" 4. multiplicacao"<<endl;
	cout<<" escolha uma das operacoes:+, -, /, * "<<endl;
	cin>> op;
	cout<<"digite um numero: "<<endl;
	cin>>n1;
	cout<<" digite o segundo numero: "<<endl;
	cin>>n2;
	
	//estrutura de soma
	if(op=='+'){
		n1=n1+n2;
		cout<<"o resultado da soma eh: "<<n1<<endl;	
		int opcao;
do{
	cout<<" digite um numero: (0 para sair)";
	cin>>opcao;
}
	while(opcao!=0);
		
	}
	//estrutura de subtracao
	if(op=='-'){
		n2=n1-n2;
		cout<<"o resultado da subtracao eh: "<<n2<<endl;
		int opcao;
do{
	cout<<" digite um numero: (0 para sair)";
	cin>>opcao;
}
	while(opcao!=0);	
	}
	//estrutura de multiplicacao
	if(op=='*'){
		n3=n1*n2;
		cout<<"o resultado da multiplicacao eh: "<<n3<<endl;
		int opcao;
do{
	cout<<" digite um numero: (0 para sair)";
	cin>>opcao;
}
	while(opcao!=0);
	}
	//estrutura de divisao
	if(op=='/'){
		n4=n1/n2;
		cout<<"o resultado da divisao eh: "<<n4<<endl;
		int opcao;
do{
	cout<<" digite um numero: (0 para sair)";
	cin>>opcao;
}
	while(opcao<=1000);
	}

}
