#include <iostream> 

class Vetor{
    private:
        float x, y;




    public:
        void SetX(float x_){ // cria um metodo Set que recebe uma variavel x_
        
            x = x_; // atribui o valor de x_ a variavel x 
        
            
        }

        float getX(){ // o metodo Get recupera o valor da variavel x
            return x; 
        }





};



int main(){
    Vetor v;                               // cria um objeto dentro da classe vetor


    v.SetX(3);                              // chama o metodo Set, que "Seta" o valor tres na propriedade x do Objeto v
    
    
    std::cout << v.getX();          // mostra a saida do get



    return 0;
}

