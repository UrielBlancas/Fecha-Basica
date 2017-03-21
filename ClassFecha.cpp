#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Fecha{

private:

    int dia;
    int mes;
    int anio;
    void verificaDatos(void){
        while(dia<=0||dia>30||mes<=0||mes>12||anio<0||anio>2117){
            if(dia<=0||dia>30){
                dia = 1; 
            }
            else if(mes<=0||mes>12){
                mes = 1; 

            }
            else if(anio<0||anio>2117){
                anio = 2017; 
            }
        }
    };

public:
    Fecha(void){
        dia = 1;
        mes = 1;
        anio = 2017;
    };
    Fecha(int d, int m, int a){
        dia = d;
        mes = m;
        anio = a;
    };
    void pideleAlUsuarioTusDatos(void){
        cout<<"Dame mi dia: ";
        cin>>dia;
        cout<<endl<<"Dame mi mes: ";
        cin>>mes;
        cout<<endl<<"Dame mi anio: ";
        cin>>anio;
        verificaDatos();
    };
    void muestraTusDatos(void){
        cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
        
    };
    int dameTuDia(void){
        return dia;
    };
    void modificaTuDia(int d){
        dia = d;
        verificaDatos();
    };
    int dameTuMes(void){
        return mes;
    };
    void modificaTuMes(int m){
        mes = m;
        verificaDatos();
    };
     int dameTuAnio(void){
        return anio;
    };
    void modificaTuAnio(int a){
        anio = a;
        verificaDatos();
    };
};

int main(void){
    Fecha A, B;
    A.pideleAlUsuarioTusDatos();
    cout<<"H1:"<<endl;
    A.muestraTusDatos();
    B.pideleAlUsuarioTusDatos();
    cout<<"H2:"<<endl;
    B.muestraTusDatos();

    if(A.dameTuAnio() < B.dameTuAnio()) {
        cout<<endl<<"La primer fecha fue primero"<<endl;
    }
    else if (A.dameTuAnio() > B.dameTuAnio()){
        cout<<endl<<"La segunda fecha fue primero"<<endl;
    }
    else if(A.dameTuAnio()==B.dameTuAnio()){
        if(A.dameTuMes()<B.dameTuMes()){
            cout<<endl<<"La primer fecha fue primero"<<endl;
        }
        else if (A.dameTuMes()>B.dameTuMes())
            cout<<endl<<"La segunda fecha fue primero"<<endl;
        else if (A.dameTuMes() == B.dameTuMes()){
                if (A.dameTuDia()<B.dameTuDia()){
                    cout<<endl<<"La primer fecha fue primero"<<endl;
                }
                else if (A.dameTuDia()>B.dameTuDia()){
                    cout<<endl<<"La segunda fecha fue primero"<<endl;
                }
                else if (A.dameTuDia()==B.dameTuDia()){
                    cout<<endl<<"Ambas fechas son simultaneas"<<endl;
                }
        }
    }

    return 0;

}
