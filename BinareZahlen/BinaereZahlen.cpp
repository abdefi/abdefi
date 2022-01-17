#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include "BinaereZahlen.hpp"


BinaerZahlen::BinaerZahlen(){
    bits;
}

BinaerZahlen::BinaerZahlen( std::vector<bool>& newbits){
    bits=newbits;
}

BinaerZahlen operator!(BinaerZahlen& num1){
    std::vector<bool> vek= num1.getVektor();
    for (size_t i = 0; i <vek.size() ; i++)
    {
       if(vek.at(i)==true)
           vek.at(i)=false;
        else vek.at(i)=true;
    }
    num1.getVektor()=vek;
    return num1;

}

BinaerZahlen operator&( BinaerZahlen& num1, BinaerZahlen& num2){
    std::vector<bool> vek1=num1.getVektor();
    std::vector<bool> vek2=num2.getVektor();
    std::vector<bool> vek_und (std::max(vek1.size(),vek2.size(),false));
    int n= std::min(vek1.size(),vek2.size());
    
    for(size_t i=1;i<=n;i++){
        if(vek1.at((vek1.size()-i))&&vek2.at(vek2.size()-i))
        vek_und.at(vek_und.size()-i)=true;
        else
        vek_und.at(vek_und.size()-i)=false;
    }
    
    return vek_und;
}

BinaerZahlen operator|( BinaerZahlen& num1, BinaerZahlen& num2){
    std::vector<bool> vek1=num1.getVektor();
    std::vector<bool> vek2=num2.getVektor();
    std::vector<bool> vek_oder (std::max(vek1.size(),vek2.size(),false));
    int n= std::min(vek1.size(),vek2.size());
    
    for(size_t i=1;i<=n;i++){
        if(vek1.at((vek1.size()-i))||vek2.at(vek2.size()-i))
        vek_oder.at(vek_oder.size()-i)=true;
        else
        vek_oder.at(vek_oder.size()-i)=false;
    }
    
    return vek_oder;
}

std::ostream& operator<<(std::ostream& out, BinaerZahlen& Zahl) {
    out << Zahl.to_str(Zahl);
    return out;
}

std::string BinaerZahlen::to_str(BinaerZahlen& bin){
        std::vector<bool> vek= bin.getVektor();
        std::string stream;
    for (size_t i=0; i<vek.size();) {
        if (vek.at(i)==0)
            stream.push_back('1');
        else
            stream.push_back('0');
    }
    return  ;
    }

    