1. Televisão (2,5 pontos)
Crie uma classe Televisao e uma classe ControleRemoto que pode controlar o volume e trocar os canais da televisão. Nesse programa orientado a objetos, crie métodos que permitam:
aumentar ou diminuir a potência do volume de som em uma unidade de cada vez;
aumentar e diminuir o número do canal em uma unidade;
trocar para um canal indicado;
consultar o valor do volume de som;
consultar o canal selecionado;

#include <iostream>

using namespace std;

class Televisao
{
    private:
        int canal;
        int volume;
    public:
        Televisao(){};
        Televisao(int canal, int volume) : canal(canal), volume(volume){}
        
        int getCanal()
        {
            return canal;
        }
        
        int getVolume()
        {
            return volume;
        }
        
};

class ControleRemoto
{
    private:
        Televisao tv;
    
    public:
        
}
