#include "mainprueba.h"
#include "ui_mainprueba.h"
#include "string.h"

/* incluyendo listas */
#include "listasimple.h"
#include "listadoble.h"

/* otras librerias */
#include <QFileDialog>
#include <QMessageBox>


using namespace std;
char* unido = (char*)malloc(sizeof(char));
void mostrar(NODO *cima);
void mostrardoble(NODOD *cima);

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
    NODOD *lista = NULL;

    char* dato1 = (char*)malloc(sizeof(char));
    strcpy(dato1,"algo");
    char* dato2 = (char*)malloc(sizeof(char));
    strcpy(dato2,"otro");
    char* dato3 = (char*)malloc(sizeof(char));
    strcpy(dato3,"gato");

    insertardoble(&lista,dato1);
    insertardoble(&lista,dato2);
    insertardoble(&lista,dato3);

    mostrardoble(lista);
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

void mostrardoble(NODOD *cima){
    if(cima == NULL){
        strcpy(unido,"lista doble vacia.");
    }else{
        NODOD *primero = cima;
        char* dato = (char*)malloc(sizeof(char));
        while(primero != NULL){
            strcpy(dato,primero->nombre);
            strcat(unido,dato);
            primero = primero->siguiente;
        }
    }
}

void MainPrueba::on_btnReprod_clicked()
{
    QString nombrearchivo =
            QFileDialog::getOpenFileName(
                this,
                tr("elija un archivo"),
                "/home/eduardo/",
                "All files (*.*)"
                );

    QMessageBox::information(this,tr("File name"),nombrearchivo);
    char* ruta = (char*)malloc(sizeof(char));
    /* convertimos el string de la ruta a char */
    strcpy(ruta,nombrearchivo.toLatin1().constData());
    ui->lblnombre->setText(ruta);
}
