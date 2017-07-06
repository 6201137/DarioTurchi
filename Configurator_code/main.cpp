#include <iostream>



#include "CPU.h"
#include "GraphicCard.h"
#include "Motherboard.h"
#include "PSU.h"
#include "Case.h"
#include "RAM.h"
#include "Storage.h"
#include "AssembledPC.h"
#include "AssembledPCDecorator.h"

//CPU List

CPU STDCPU("Standard CPU",0,0,"Standard CPU Socket",0);
CPU AMD_FX4100("AMD Fx 4100",45,95,"AM3+",1);
CPU Intel_i76700("Intel i7 6700",300,65,"lga1151",0);



//GraphiCCard List

GraphicCard STDGraphicCard("Standard GraphicCard",0,0,0);
GraphicCard Asus7750("Asus 7750",33,80,1);
GraphicCard MSI_GTX1070("MSI Nvidia GTX1070",477,150,8);
GraphicCard MSI_GTX1080("MSI Nvidia GTX1080",594,180,8);





//Motherboard List

Motherboard STDMotherboard("Standard Motherboard",0,"Standard Motherboard socket","Standard Motherboard chipset",0,
                           "Standard Motherboard Size","Standard Ramtype");
Motherboard Asus_M5a78l3_0("Asus M5A78L3.0",32,"AM3+","AMD 760G",1,"mATX","DDR3");
Motherboard Gigabyte_GA_H270_HD3("Gigabyte H270 HD3",110,"lga1151","H270",0,"ATX","DDR4");






//PSU List

PSU STDPSU("Standard PSU",0,0);
PSU XFX_550TS("XFX 550 TS",65.50,500);
PSU Antec_VP_400P("Antec VP 400P",39.99,350);



//RAM List

RAM STDRAM("Standard RAM",0,0,"Standard Ramtype",0);
RAM Kingston_HyperX_Fury_2x4("Kingston HyperX Fury 2x4 GB",67, 10, "DDR3",8);
RAM Kingston_HyperX_Fury_HX421C14FB2("Kingston_HyperX_Fury_HX421C14FB2",63, 10, "DDR4",8);



//Storage List
Storage STDStorage("Standard Storage",0, 0, 0,0);
Storage WD_Blue_1TB("HDD WD Blue 1 TB",53.10, 10, 1,0);
Storage Samsung_850_EVO_250GB("SSD Samsung 850 EVO 250 GB",89.99, 10, 250,1);


//Case List
Case Corsair_Spec_01("Corsair Spec 01",55.99, 10,"ATX");
Case Thermaltake_Core_V1("Thermaltake Core V1",43.99,10,"mini-ITX");
Case Corsair_Carbide_Air_540("Corsair Carbide Air 540", 149.01, 10,"ATX");





int main() {
    std::cout<<STDCPU.isOc()<<std::endl;
    std::cout<<Asus_M5a78l3_0.CompatibilityCheck(&AMD_FX4100)<<std::endl;
    std::cout<<Corsair_Carbide_Air_540.CompatibilityCheck(&Asus_M5a78l3_0);
    std::cout<<Kingston_HyperX_Fury_2x4.CompatibilityCheck(&Asus_M5a78l3_0);
    AssembledPC ASS(&AMD_FX4100,&Asus7750,&Asus_M5a78l3_0,&Corsair_Carbide_Air_540, &Kingston_HyperX_Fury_2x4, &WD_Blue_1TB);
    AssembledPCDecorator COSO(&ASS);
    COSO.setPSU1(&XFX_550TS);
    std::cout<<COSO.totalCost()<<std::endl;
    std::cout<<COSO.totalWatt()<<std::endl;

}