/* 
 * File:   main.cpp
 * Author: ellioth
 *
 * Created on February 10, 2016, 1:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Bola.h"
#include <pthread.h>
#include <string.h>
#include <random>
#include "servidor.h"
#include "controlador.h"
#include "lista.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    /*
    ThreadData datos;
    datos._Tplyr=1234;
    datos._Tsockfd=5678;
    metodoPrueba(&datos);
     
    string dato="{2,1,64;Bo:200,300;Bo:100,500;Pl:200,10;}";
    string temp=dato;
    //cout<<dato.find(",")<<endl;
    int n=1,i,pos=dato.find(";");
    int pBola, pPlyrs, pBolcks;
    ----bloque para econtrar cantidad de datos----
    i=temp.find(",",n);
    pBola=stoi(dato.substr(n,i));
    cout<<pBola<<endl;
    n=i+1;
    i=temp.find(",",n);
    pPlyrs=stoi(dato.substr(n,i));
    cout<<pPlyrs<<endl;
    n=i+1;
    i=temp.find(";",n);
    pBolcks=stoi(dato.substr(n,i));
    cout<<pBolcks<<endl;
    n=i+1;
    
    ----bloque para encontrar datos de una bola----
    cout<<"---bola---"<<endl;
    for(int f=0; f<pBola; f++){
        n=dato.find(":",n)+1;
        i=dato.find(",",n);
        int x=stoi(dato.substr(n,i));
        n=i+1;
        i=dato.find(";",n);
        int y=stoi(dato.substr(n,i));
        cout<<x<<endl;
        cout<<y<<endl;
    }
    cout<<"---player----"<<endl;
    for(int f=0; f<pPlyrs; f++){
        n=dato.find(":",n)+1;
        i=dato.find(",",n);
        int x=stoi(dato.substr(n,i));
        n=i+1;
        i=dato.find(";",n);
        int y=stoi(dato.substr(n,i));
        cout<<x<<endl;
        cout<<y<<endl;
    }
    int i=temp.find(",");
    cout<<stoi(dato.substr(n,i))<<endl;
    n=i+1;*/
    /*
    /*prueba para server
    servidor * server= new servidor(5000);
    for(;;){
        if(server->getScreens()>0)
            server->sendMSG("hola_mundo",10);
    }
    cin.ignore();*/
    controlador * pruebaControlador = new controlador(5001);
    
    /*prueba de coliciones
    Bola * pBola= new Bola(180,150);
    BarraDes * pBloque = new BarraDes(130,160,1);
    int y=0,x=0;
    bool bandera;
    if(pBola->getPy()==(pBloque->getPosY()+50)&&
            (pBola->getPx()+20)>=pBloque->getPosX()&&
            pBola->getPx()<=(pBloque->getPosX()+50)){
        y=1;
        bandera=true;
    }
    //choque de pelota en la parte superior de la barra
    else if(pBola->getPy()+20==pBloque->getPosY() &&
            (pBola->getPx()+20)>=pBloque->getPosX() &&
            pBola->getPx()<=(pBloque->getPosX()+50)){
        y=-1;
        bandera=true;
    }
    //choque de pelota en la parte izquierda de la barra
    else if((pBola->getPx()+20)==pBloque->getPosX() &&
            (pBola->getPy()+20)>=pBloque->getPosY() &&
            pBola->getPy()<=(pBloque->getPosY()+50)){
        x=-1;
        bandera=true;
    }
    //choque de pelota en la parte derecha de la barra
    else if(pBola->getPx()==(pBloque->getPosX()+50) &&
            (pBola->getPy()+20)>=pBloque->getPosY() &&
            pBola->getPy()<=(pBloque->getPosY()+50)){
        x=1;
        bandera=true;
    }
    pBola->move(x,y);
    cout<<"posX: "<<pBola->getPx()<<endl;
    cout<<"posY: "<<pBola->getPy()<<endl;
     * */
    return 0;
}

