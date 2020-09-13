#include <iostream>
using std::cout;
using std::cin;
using std::endl;

enum Food{
    Honey,
    Grass,
    Carrot
};

class Animal {
    private:
    int hunger = 100;
    public:
        virtual void eat(Food food);
        int getHunger() {return hunger;}
        void setHunger(int value){hunger = value;}
        void changeHunger(int value){hunger+=value;}
};

class Puh : public Animal {
    public:
        void eat(Food food){
            switch(food){
                case Food::Honey:
                    cout << "Puh likes a honey. He's happy" << endl;
                    changeHunger(-30);
                    break;
                case Food::Grass:
                    cout << "Puh doesn't like grass. He's angry" << endl;
                    changeHunger(-10);
                    break;
                case Food::Carrot:
                    cout << "Puh is neutral to carrot. He's calm" << endl;
                    changeHunger(-20);
                    break;
            }
        }
};

class Rabbit : public Animal {
    public:
        void eat(Food food){
            switch(food){
                case Food::Honey:
                    cout << "Rabbit doesn't like a honey. He's sad" << endl;
                    changeHunger(-10);
                    break;
                case Food::Grass:
                    cout << "Rabbit likes grass. He's happy" << endl;
                    changeHunger(-30);
                    break;
                case Food::Carrot:
                    cout << "Rabbit likes a carrot. He's very happy" << endl;
                    changeHunger(-50);
                    break;
            }
        }
};

int main(){
    Puh puh;
    puh.eat(Honey);
    cout << puh.getHunger() << endl;
    Rabbit rabbit;
    rabbit.eat(Carrot);
    cout << rabbit.getHunger() << endl;
}