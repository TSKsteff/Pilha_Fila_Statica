#include <iostream>
#define tam 7
using namespace std;

struct PILHA{
    char vtr[tam];
    int topo;
};

struct FILA{
    char vtr[tam];
    int comeco,fim;
};


void InizializarPhilha(PILHA &pi){
    pi.topo = -1;
}

bool TestarVaziaPilha(PILHA &pi){
    if(pi.topo < 0) return false;
    return true;
}

bool InserirPilha(PILHA &pi, char letra){

    if(pi.topo == tam ) return false;
    pi.topo++;
    pi.vtr[pi.topo] = letra;
    return true;
}

bool RetirarPilha(PILHA &pi, char &letra){

    if(!TestarVaziaPilha(pi)) return false;
    letra = pi.vtr[pi.topo];
    pi.topo--;
    return true;
}

void MostrarPilha(PILHA &pi){

    for(int i=0; i<=pi.topo; i++){
        cout << " PILHA "<<i<<": "<<pi.vtr[i]<<endl;
    }

}

void InizializarFila(FILA &fi){
    fi.comeco = -1;
    fi.fim = -1;
}

bool TestarVaziaFila(FILA &fi){
    if(fi.fim < 0) return false;
    return true;
}

bool InserirFila(FILA &fi, char letra){
    if(fi.fim > tam) return false;

    fi.fim++;

    if(fi.fim== 0){
        fi.comeco++;
    }
    fi.vtr[fi.fim] = letra;
    return true;
}

bool RetirarFila(FILA &fi, char &letra){

    if(!TestarVaziaFila(fi))return false;

    letra = fi.vtr[fi.fim];
    fi.fim--;
    return true;
}

void MostrarFila(FILA &fi){

    for(int i=fi.comeco; i<=fi.fim; i++){
        cout<<"FILA "<<i<<" :"<<fi.vtr[i]<<endl;
    }
}

int main()
{

/**PILHA*/{
    PILHA pi;
    char letra;
    InizializarPhilha(pi);
    InserirPilha(pi,'s');
    InserirPilha(pi,'t');
    InserirPilha(pi,'e');
    InserirPilha(pi,'f');
    InserirPilha(pi,'f');
    InserirPilha(pi,'K');

    cout<<endl<<endl;
    RetirarPilha(pi,letra);
    cout<<letra;

    }


cout<<endl<<endl;

/**FILA*/{
    FILA fi;
    char letra;
    InizializarFila(fi);
    InserirFila(fi,'s');
    InserirFila(fi,'t');
    InserirFila(fi,'e');
    InserirFila(fi,'f');
    InserirFila(fi,'f');
    InserirFila(fi,'K');
    RetirarFila(fi,letra);
    cout<<letra;
}

    return 0;
}
