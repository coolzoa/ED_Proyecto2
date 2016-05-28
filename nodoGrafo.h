#include "LinkedList.h"

class nodoGrafo(){
private:
    LinkedList <Cerveza> listaCervezas;
    string nombre;

public:
    nodoGrafo(){
    }

    ~nodoGrafo(){
    }

    void addCerveza(Cerveza pCerveza){
        listaCervezas.append(pCerveza);
    }

    void borrarCerveza(Cerveza pCerveza){
        int posicion = 0;
        for (int i = 0; i < listaCervezas.getSize(); i++){
            listaCervezas.goToPos(i);
            if (listaCervezas.getElement == pCerveza){
                posicion = i;
                break;
            }
        }
        listaCervezas.goToPos(posicion);
        listaCervezas.remove();
    }


};
