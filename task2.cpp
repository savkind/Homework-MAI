#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void PrintRectangle(int width, int height);
void PrintTriangle(int height);

int main(){
    PrintRectangle(5,4);
    PrintTriangle(11);
}

void PrintRectangle(int width, int height){
    for (int i = 0; i< height; i++ ){
        for (int j = 0; j<width;j++)
            cout << '*';
        cout << endl;
    }
}

void PrintTriangle(int height){
    int space = 100; 
    int countSym = 1;
    for (int i = 0;i < height; i++ ){
        for (int j = 0; j < space; j++){
            cout << " ";
        }
        for (int j = 0; j < countSym; j++)
            cout << "*";
        countSym+=2;
        space-=1;
        cout << endl;
    
}
}

