#include "extras.h"
#include <sstream>
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include <cstdlib>
#include <ctime>

Extras::Extras()
{

}
void Extras::logCsv(std::string data, std::string filename, std::string header) {
    std::ofstream myfile;

    while(true){
        myfile.open(filename.c_str(), std::ios::in);
        if (myfile.is_open() && myfile.good()) {
            myfile.close();
            myfile.open(filename.c_str(), std::ios::app);
            myfile << data <<std::endl;
            return;
        }
        else {
            myfile.open(filename.c_str(), std::ios::app);
            if (myfile.is_open() && myfile.good()) {
                myfile << header << std::endl;
                myfile.close();
            }
        }
    }
}

void Extras::loadFigures(std::string fileName, int sizeScreen[], std::vector<FiguraGeometrica *> &data, std::vector<char> &brush){

    srand(time(0));
    int figura;
    int vetorDeCaracteristicas[4];
    std::string aux; // variavel auxiliar
    std::string cell; // represeta uma celula de uma linha pro exemplo a palavra "retangle" da linha: retangle,10,20,30,40,50
    std::ifstream file (fileName.c_str());
    char brushTemp;

    if (!file.is_open() && !file.good()) {
        std::cout << "Erro to read: " << fileName << std::endl;
        return;
    }

    getline(file,aux);
    std::stringstream lineStreamHeader( aux );

    for (int i =0; getline(lineStreamHeader,cell,','); i++ ){
        sizeScreen[i] = std::stoi(cell);
    }

    while( getline(file,aux) ){
        std::stringstream lineStream(aux);

        for (int contCell = 0; getline(lineStream, cell, ','); contCell++) {
            if(contCell == 0){

                if(cell == "line"){
                    figura = 1;
                }
                else if (cell == "rectangle"){
                    figura = 2;
                }
                else if (cell == "circle"){
                    figura = 3;
                }
            }
            else if (contCell < 5){
                vetorDeCaracteristicas[contCell -1] = std::stoi(cell);
            }
            else{
                brushTemp =  std::stoi(cell) ;
                brush.push_back(brushTemp);
            }

          }

        switch (figura) {
        case 1:
            data.push_back( new Reta(vetorDeCaracteristicas[0],vetorDeCaracteristicas[1],
                    vetorDeCaracteristicas[2],vetorDeCaracteristicas[3]) );
            break;

        case 2:
            data.push_back( new Retangulo(vetorDeCaracteristicas[0],vetorDeCaracteristicas[1],
                    vetorDeCaracteristicas[2],vetorDeCaracteristicas[3]) );
            break;

        case 3:
            data.push_back( new Circulo(vetorDeCaracteristicas[0],vetorDeCaracteristicas[1],
                    vetorDeCaracteristicas[2], vetorDeCaracteristicas[3]) );
            break;

        }
    }
}

void Extras::randFigures(std::string fileName, int size){
    std::string data;
    std::string header = "30,30";
    int figura;
    int caracteristicasAleatorias[4];
    unsigned int brushAleatorio;

    for(int i =0; i<size; i++){

        figura = rand() % 3 + 1; // gera um valor entre 1 e 3;

        switch (figura) {
        case 1:
            data = "line";
            break;

        case 2:
            data = "rectangle";
            break;

        case 3:
            data = "circle";
            break;
        }

        // gera pontos, largura e altura,  aleatórios
        for(int i =0; i<4; i++){
            if(i<2){
                caracteristicasAleatorias[i] = rand() % 20;
            }
            else{
                 caracteristicasAleatorias[i] = rand() % 10 + 1;
            }

            if(i==3 and figura == 3){
                if(caracteristicasAleatorias[3] >= 20){
                    caracteristicasAleatorias[3] = 1;
                }
                else{
                    caracteristicasAleatorias[3]= 0;
                }
                data+= "," + std::to_string(caracteristicasAleatorias[3]) ;
            }
            else{
                data+= "," + std::to_string(caracteristicasAleatorias[i]) ;
            }
        }

        brushAleatorio = 'A' + (random() % 26);
        data+= "," + std::to_string(brushAleatorio);
        logCsv(data.c_str(),fileName.c_str(),header.c_str());
    }
    std::cout << "Done!" <<std::endl;
}

