#include <stdio.h>
#include <iostream>
#include "Administrador.hpp"
#include "LinkedList.hpp"
#include "Stack.hpp"
#include "Queue.hpp"
#include "IP.hpp"
#include <iterator>
#include <vector>
#include "UserFila.hpp"
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>

//no se si conexiones sea una herencia de la clase adminsitrador y con el mismo constructor o si deba ser otra dfierente 
class ConexionesComputadoras  {
private:
    vector<UserFila> registros;
    string fileName;
    
    //IP destino = IpBase
    Stack<UserFila> entrantes;
    //Ip origen = IpBase
    vector<UserFila> salientes;
    //1. Ip interna que se esta usando
    string IpBase = "10.152.206";
    string Ip;
    
public:
   
    ConexionesComputadoras(vector<UserFila>, string);
    string getIpInternaNueva();
    void setIp(string);
    string getIp(){return this->Ip;}

    void comp_entrantes();
    
    
    void generarIpInterna(string);
    void ultimaConexion();
    
    void countEntrantes();
    void countSalientes();
    
    //5
    void conexionesSeguidas();
};
