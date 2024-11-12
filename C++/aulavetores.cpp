#include <iostream> 
#include <cmath>


class Vetor{
    private:
        float x, y;




    public:
        void SetX(float x_){ // cria um metodo Set que recebe uma variavel x_
        
            x = x_; // atribui o valor de x_ a variavel x 
        
            
        }
        
        void SetY(float y_){ // cria um metodo Set que recebe uma variavel x_
        
            y = y_; // atribui o valor de x_ a variavel x 
        
            
        }
        

        float getX(){ /* o metodo Get recupera o valor da variavel x | a funcao Get não precisa de um valor/parametro */
            return x; 
        }
        
        
        float getY(){ /* o metodo Get recupera o valor da variavel x | a funcao Get não precisa de um valor/parametro */
            return y; 
        }

    
        float norma(){
            return sqrtf(pow(x,2) + pow(y,2));       

        }


      //  float angulo(){}



     //   Vetor unitario(){}
};



int main(){
    Vetor v;                               // cria um objeto dentro da classe vetor


    v.SetX(3);// chama o metodo Set, que "Seta" o valor tres na propriedade x do Objeto v
    
    v.SetY(4);
    
    //std::cout << v.getX();          // mostra a saida do get

    v.norma();

    return 0;
}

