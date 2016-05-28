#include string

class Cerveza(){
private:
    string descripcion;
    string tipoFermentacion;
    double tiempoFermentacion;
    double temperatura;
    string color;
    string cuerpo;
    double precio;

public:

    Cerveza(){
    }

    Cerveza(string des, string tipoF, double tiempoF, double temp, string pcolor, string pcuerpo, double pPrecio){
        descripcion = des;
        tipoFermentacion = tipoF;
        tiempoFermentacion = tiempoF;
        temperatura = temp;
        color = pcolor;
        cuerpo = pcuerpo;
        precio = pPrecio;
    }

    ~Cerveza(){}

    void setDes(string pDes){
        descripcion = pDes;
    }

    string getDes(){
        return descripcion;
    }

    void setTipo(string pFer){
        tipoFermentacion = pFer;
    }

    string getTipoFer(){
        return tipoFermentacion;
    }

    void setTiempoFer(double ptiempo){
        tiempoFermentacion = ptiempo;
    }

    double getTiempoFer(){
        return tiempoFermentacion
    }

    void setTemp(double pTemp){
        temperatura = pTemp;
    }

    double getTemp(){
        return temperatura;
    }

    void setColor(string pColor){
        color = pColor;
    }

    string getColor(){
        return color;
    }

    void setCuerpo(string pCuerpo){
        cuerpo = pCuerpo;
    }

    string getCuerpo(){
        return cuerpo;
    }

    void setPrecio(double pPrecio){
        precio = pPrecio;
    }

    double getPrecio(){
        return precio;
    }






};
