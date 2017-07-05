//
// Created by aleda on 29/06/2017.
//
#include"Motherboard.h"
#include "Case.h"
#include <string>



    bool Case::CompatibilityCheck(Motherboard* motherboard){
        int sizeMB = 0;
        int sizeCase=0;
        if(motherboard->getSize()=="ATX")
             sizeMB = 3;
        else if(motherboard->getSize()=="mATX")
             sizeMB = 2;
        else if(motherboard->getSize()=="mini-ITX")
             sizeMB = 1;

        if(this->getSize()=="ATX")
            sizeCase = 3;
        else if(this->getSize()=="mATX")
            sizeCase = 2;
        else if(this->getSize()=="mini-ITX")
            sizeCase = 1;


        if(sizeMB==sizeCase || sizeMB+1==sizeCase)
            return 1;
        else
            return 0;
       /* if(motherboard->getSize()==this->getSize())
            std::cout<<"dimensioni coincidenti";

        else
            std::cout<<"dimensioni non coincidenti";
       */
    }


const std::string &Case::getSize() const {
    return size;
}

Case::~Case() {

}

Case::Case(const std::string &name, float price, int power, const std::string &size) : Component(name, price, power),
                                                                                       size(size) {};
