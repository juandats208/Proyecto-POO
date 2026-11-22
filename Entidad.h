#ifndef Entidad_H
#define Entidad_H
#include <string>

class Entidad {
protected:

    std::string nombre;
    int vidaAct;
    int vidaMax;
    int ataque;
    int turnosEnvenenado;
    int turnosQuemado;
    bool congelado;

public:

    //Metdodos

    virtual void atacar() const = 0;
    virtual void recibirDanio();
    void curar();
    bool estaVivo();
    void congelar();
    void quemar(int turnos);
    void envenenar(int turnos);
    void quitardebilidades();
    bool activarDebilidades();
    void subirAtaque(int catidad);

    //Constructor

    Entidad(std::string nombre, int vida, int ataque);

    //Destructor

    virtual ~Entidad();

    //Getters

    getNombre() const;
    getVidaAct() const;
    getVidaMax() const;
    getAtaque() const;
};


