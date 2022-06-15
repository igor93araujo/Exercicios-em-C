#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n,cont;
    double soma, media, percentual;


    cout << "Quantas pessoas serao digitadas?";
    cin >> n;

    double altura[n];
    string nome[n];
    int idade [n];


    for (int i=0; i<n; i++){
        cout << "Dados da " << i+1<< "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout <<"Idade: ";
        cin>>idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }
    soma = 0;
    media = 0;

    for (int i=0; i<n; i++){
        soma = soma + altura[i];
    }
    media = soma/n;
    cout << fixed <<setprecision (2);
    cout <<"Altura media: " << media << endl;

    cont = 0;
    for (int i=0; i<n; i++){
        if (idade[i]<16){
            cont++;
        }
    }
    percentual =  cont *100.0 / n;
    cout << fixed <<setprecision (1);
    cout <<"Pessoas com menos de 16 anos: " << percentual << "%" << endl;

    for (int i=0; i<n; i++){
        if (idade[i] < 16)
        {
            cout << nome [i] << endl;
        }
    }
    return 0;
}
