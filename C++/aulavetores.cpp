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
        
        
        void print(){
            std::cout << "(" << x << "," << y << ")" << std::endl;
            
            
        }

    
        float norma(){
            return sqrtf(x * x + y * y);       

        }


        float angulo(){
            return atan2f(y,x);
        }
            


        Vetor unitario(){
            Vetor unit;
            
            unit.x = x / norma();
            
            unit.y = y / norma();
            
            
            
            
            return unit;
        }
};



int main(){
    Vetor v, u;    // cria um objeto dentro da classe vetor


    v.SetX(3);  // chama o metodo Set, que "Seta" o valor tres na propriedade x do Objeto v
    
    v.SetY(4);
    
    //std::cout << v.getX();          // mostra a saida do get

   std:: cout <<"norma é: "  << v.norma() << std:: endl;    // chama a função norma

    std:: cout <<"arco tangente em rad é: "  << v.angulo() << std:: endl;


    /*std:: cout <<"vetor unitario é: "  << v.unitario() << std:: endl; // não funciona, pois cout só mostra int, char e seus derivados
    , não mostra um valor FLOAT*/

    u = v.unitario();
    
    u.print();
    
    
    

    return 0;
}





