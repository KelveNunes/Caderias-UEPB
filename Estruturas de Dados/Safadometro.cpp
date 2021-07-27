#include <iostream>
using namespace std;



int main(){
    string nomes[6];
    float dia[6], mes[6], ano[6];

    cout<<"  SAFADOMENTRO"<<endl<<"-----------------"<<endl<<endl;
    cout<< "digite as seguintes informacoes"<<endl;
    for(int i = 0; i < 6; i++){

       cout<<"Nome:";
       cin>>nomes[i];
       cout<<"Data de nascimento"<<endl<<"---------------"<<endl;
       cout<<"dia: ";
       cin>>dia[i];
       cout<<"mes: ";
       cin>>mes[i];
       cout<<"ano: ";
       cin>>ano[i];
       cout<<endl;
    }

    for(int i = 0; i < 6; i++){

        int somatoria[] = {0,0,0,0,0,0};
        for(int j = 1; j<= mes[i]; j++){
            somatoria[i] += j;
        }

        float safadeza[6], anjo[6];
        safadeza[i] = somatoria[i] + (ano[i]/100) * (50-dia[i]);
        if(safadeza[i]>100){
            safadeza[i]=100;
        }
        anjo[i] = 100 - safadeza[i];
        if(anjo[i]<0){
           anjo[i]=0;
        }

        int idade[6];
        idade[i] = 2020 - ano[i];

        if(idade[i] <18){
            cout<<"nome: "<<nomes[i]<<" -> ";
            cout<<"Menores de Idade nao podem jogar"<<endl;
        }
        else{
            cout << "nome: " << nomes[i] << " safadeza: "<< safadeza[i] << "%" << " Anjo: " <<anjo[i]<< "%" <<endl;
        }

    }

}
