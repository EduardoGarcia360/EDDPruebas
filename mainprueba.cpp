#include "mainprueba.h"
#include "ui_mainprueba.h"
#include "listasimple.h"
#include "string.h"
using namespace std;
char* unido = (char*)malloc(sizeof(char));
void mostrar(NODO *cima);

MainPrueba::MainPrueba(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPrueba)
{
    ui->setupUi(this);
}

MainPrueba::~MainPrueba()
{
    delete ui;
}



void MainPrueba::on_pushButton_clicked()
{
    NODO *lista = NULL;

    char* dato1 = (char*)malloc(sizeof(char));
    strcpy(dato1,"algo");
    char* dato2 = (char*)malloc(sizeof(char));
    strcpy(dato2,"otro");
    char* dato3 = (char*)malloc(sizeof(char));
    strcpy(dato3,"gato");

    insertar(&lista,dato1);
    insertar(&lista,dato2);
    insertar(&lista,dato3);
    mostrar(lista);
    ui->lblnombre->setText(unido);
}

void mostrar(NODO *cima){
    if(cima == NULL){
        strcpy(unido,"lista vacia");
    }else{
        NODO *primero = cima;
        char* dato = (char*)malloc(sizeof(char));
        while(primero != NULL){
            strcpy(dato,primero->nombre);
            strcat(unido,dato);
            primero = primero->siguiente;
        }
    }
}
