#include <iostream>

using namespace std;

class CRender{
    public:
        void mRenderizar(const char* obj){cout<<"renderizando "<<obj<<endl;};
};
/////////////////////////////////////////////////
/////////////////////////////////////////////////
template<class T>
class Pareja
{
    T a, b;

public:
    T getA(){ return a; }
    T getB(){ return b; }
    void   setA(double n);
    void   setB(double n);
    
};

void Pareja::setA(T n) { a = n; }
void Pareja::setB(T n) { b = n; }

class Suma::Public Pareja{
    double resultado;
public:
    double calcular();
};
double Suma::calcular() { return p.getA() + p.getB(); }
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
class base {
public:
  virtual void quien() {cout << "Base" << endl;} // especificar una clase virtual
};

class primera_d : public base {
public:
  void quien() {cout << "Primera derivacion" << endl;}
};
///////////////////////////////////////////////////
///////////////////////////////////////////////////
class figura {
protected:
 double x, y;
public:
  void set_dim(double i, double j=0) {
   x = i;
   y = j;
  }
  virtual void mostrar_area() = 0; // pura
};

class triangulo : public figura {

public:
  void mostrar_area() {
    cout << "Triangulo con alto ";
    cout << x << "  y base " << y;
    cout << " tiene un area de ";
    cout << x * 0.5 * y << ".\n";
  }
};
class conjuntofiguras
{
private:
    string color;
    figura *ptr;
public:
    conjuntofiguras();
};
conjuntofiguras::conjuntofiguras()
{
    color="NULL";
    ptr = new figura[0];
}

int main()
{
    CRender render1,render2;
    render1.mRenderizar("triangulo");
    render2.mRenderizar("cuadrado");
    return 0;
}
