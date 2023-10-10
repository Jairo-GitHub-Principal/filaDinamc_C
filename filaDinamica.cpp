#include <iostream>
#include "filaDinamica.h"

using namespace std;

    FilaDinamica::FilaDinamica() // construtor
        {
            primeiro = NULL;
            ultimo = NULL;
           
        }
    FilaDinamica::~FilaDinamica()// destrutor
    {
       No* NoTemporario;
        while (primeiro != NULL)
        {
            NoTemporario = primeiro;
            primeiro = primeiro->proximo;
            delete NoTemporario;
        }
        ultimo = NULL;

    }
    bool FilaDinamica::  estavazio()// isempty
    {
        return(primeiro == NULL);

    }
    bool FilaDinamica:: estacheio()// isfull
    {
        No* NoTemporario;
        try
        {
            NoTemporario = new No;
            delete NoTemporario;
            return false;
        }
        catch(bad_alloc exception)
        {
            return true;
        }
        
        

    }
    void FilaDinamica:: inserir(TipoItem item)// push //enqueue
    {
        if(estacheio()==true){
            cout<<"a fila esta cheia\n";
            cout << "Esse elemento não pode ser inserido\n";
        }else{
            No* NoNovo = new No;
            NoNovo->valor=item;
            NoNovo->proximo = NULL;
            if(primeiro == NULL){
                primeiro = NoNovo;
            }else{
                ultimo->proximo=NoNovo;
            }
           ultimo = NoNovo;
        }
    }
    TipoItem FilaDinamica:: remover()//pop//dequeue
    {
        if(estavazio()==true){
            cout << "a fila esta vazia\n";
            cout << "nenhum elemento foi removido\n";
            return 0;
        }else{
            No* NoTemporario = primeiro;
            TipoItem item = primeiro->valor;
            primeiro = primeiro->proximo;
            if(primeiro==NULL){
                ultimo = NULL;
            }
            delete NoTemporario;
            return item;
        
        }



    }
    void FilaDinamica:: imprimir()// print
    {
        No* NoTemporario = primeiro;
             cout << "Fila: [";
                while (NoTemporario != NULL)
                {
                cout << NoTemporario->valor << " ";
                NoTemporario = NoTemporario->proximo; 
                }
            cout << "]\n";
            }
            

        
    