#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

 int var1(int numInList, int countVars);

int var2(std::string name, int countVars);
 
 //Для 3го варианта то же самое, что для 2го

int main (){
    int countVars;
    int numInList;
    std::string name;
    cout << "Enter to numInList: " << endl;
    cin >> numInList;
    cout << "Enter to count of variants: " << endl;
    cin >> countVars;
    cout << "Enter to name: " << endl;
    cin >> name;
    cout <<var1( numInList, countVars)<< endl;
    cout << var2(name, countVars) << endl;
    return 0;
}

 int var1(int numInList, int countVars){
     return numInList % countVars;

 }

  int var2(std::string name, int countVars){
     return name[0] % countVars;

 }

