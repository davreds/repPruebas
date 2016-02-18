#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <iomanip>
#include <math.h>

//Prototipos
string cortar(string);

int main(){
    string sFrase1;
    string sFrase2;
    getline(cin, sFrase1);
    sFrase2 = cortar(sFrase1);
    cout << sFrase2;
}

string cortar(string sFra){
    int iCont = 0;
    string sFin;
    int iTam = sFra.length();
    for(int i=0; i<iTam; i++){
        if(sFra[i] == ' '){
            iCont++;
        }
    }
    if(iCont < 2){
        return sFra;
    } else{
        sFin = sFra.substr(sFra.find(' ') + 1);
        int j = sFin.length() - 1;
        int iPos = 0;
        while(iPos == 0){
            if(sFin[j] == ' '){
                iPos = j;
            }
            j--;
        }
        sFin.erase(iPos);
        return sFin;
    }
}
