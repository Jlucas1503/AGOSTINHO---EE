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
        
        
        float soma_simples(){
            return x + y;
            
            
            
        }
        
        
        float produtoescalar(Vetor v1, Vetor v2){
            float valor;
           // std::cout << "valores de v1: " << v1.print() << std::endl;
           // std::cout << "valores de v1: " << v2.print() << std::endl;
            
            valor = v1.getX() * v2.getX() + v1.getY() * v2.getY();
            
            return valor;
            
        }
};



int main(){
 /*   Vetor v, u;    // cria um objeto dentro da classe vetor


    v.SetX(3);  // chama o metodo Set, que "Seta" o valor tres na propriedade x do Objeto v
    
    v.SetY(4);
    
    //std::cout << v.getX();          // mostra a saida do get

   std:: cout <<"norma é: "  << v.norma() << std:: endl;    // chama a função norma

    std:: cout <<"arco tangente em rad é: "  << v.angulo() << std:: endl;


    /*std:: cout <<"vetor unitario é: "  << v.unitario() << std:: endl; // não funciona, pois cout só mostra int, char e seus derivados
    , não mostra um valor FLOAT*/
/*
    u = v.unitario();
    
    u.print();
    
    
    

    return 0; */
    
        
    Vetor v1; // criei um objeto da classe Vetor
    Vetor v2; // objeto que sera usado para subtração simples
    Vetor v3; // objeto que será criado para produtoescalar
    
    
    int x1, x2; // armazena o valor do GET das funções(facilmente removivel pois só serve pra deixar bonitinho)
    
    v1.SetX(3); // objeto v1 recebe o metodo SetX e SetY
    v1.SetY(4);
    
    x1 = v1.getX();
    x2 = v1.getY();
    
    
   std::cout << "A soma simples entre "<< x1 <<" e " << x2 << " é " << v1.soma_simples() << std::endl;
    
/***************************/

int xx1, xx2; // armazena o valor do GET das funções(facilmente removivel pois só serve pra deixar bonitinho)
    
    v2.SetX(3); // objeto v1 recebe o metodo SetX e SetY
    v2.SetY(-4);
    
    xx1 = v2.getX();
    xx2 = v2.getY();
    
    
   std::cout << "A subtração simples entre "<< xx1 <<" e " << xx2 << " é " << v2.soma_simples() << std::endl;
    
    /*****************************/
    
    std::cout << "A produtoescalar é " << v3.produtoescalar(v1, v2) << std::endl;
    
    
    
    /*DEU CERTOOOOOOOOOOOOO*/
    

    
    
    
}





