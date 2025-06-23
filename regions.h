#pragma once
#include "provinces.h"
/* THIS IS A REGIONS FILE */

// Luzon Regions ===================================================
void reg_i() {
        
}
void reg_ii() {
        
}
void reg_iii() {
        
}
void reg_ivA() {
        
}

// Kenjie the great
void reg_ivB() {
    std::cout << "\n======= Region IV-B (MIMAROPA) =======\n";
    std::string prov;
    std::string provinces[] = {"Occidental Mindoro", "Oriental Mindoro", "Marinduque", "Romblon", "Palawan"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "occidental mindoro" || prov == "Occidental Mindoro"|| prov == "OCCIDENTAL MINDORO") {
            occid_mind();
        } else if (prov == "oriental mindoro" || prov == "Oriental Mindoro"|| prov == "ORIENTAL MINDORO") {
            orin_mind();
        } else if (prov == "marinduque" || prov == "Marinduque"|| prov == "MARINDUQUE") {
            mrndq();
        } else if (prov == "romblon" || prov == "Romblon"|| prov == "ROMBLON") {
            rombl();
        } else if (prov == "palawan" || prov == "Palawan"|| prov == "PALAWAN") {
            palwn();
        }  else if (prov == "back" || prov == "Back" || prov == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }

}
void reg_v() {
    std::cout << "\n======= Region V (Bicol Region) =======\n";    
}

// rochelle
void reg_ncr() {
    std::cout << "\n======= NATIONAL CAPITAL REGION (NCR) =======\n";
    std::string prov;
    std::string provinces[] = { "Caloocan","Las Piñas","Makati","Malabon","Mandaluyong","Manila","Marikina","Muntinlupa",
"Navotas","Parañaque","Pasay","Pasig","Quezon City","San Juan","Taguig","Valenzuela"};
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "caloocan" || prov == "Caloocan"|| prov == "CALOOCAN") {
            cloocn();
        } else if (prov == "las Piñas" || prov == "Las Piñas"|| prov == "LAS PIÑAS") {
            ls_pnas();
        } else if (prov == "makati" || prov == "Makati"|| prov == "MAKATI") {
            makti();
        } else if (prov == "malabon" || prov == "Malabon"|| prov == "MALABON") {
            mlabon();
        } else if (prov == "mandaluyong" || prov == "Mandaluyong"|| prov == "MANDALUYONG") {
            mndluyong();
        } else if (prov == "manila" || prov == "Manila"|| prov == "MANILA") {
            mnila();
        } else if (prov == "marikina" || prov == "Marikina"|| prov == "MARIKINA") {
            markina();
        } else if (prov == "muntinlupa" || prov == "Muntinlupa"|| prov == "MUNTINLUPA") {
            muntilp();
        } else if (prov == "navotas" || prov == "Navotas"|| prov == "NAVOTAS") {
            navtas();
        } else if (prov == "parañaque" || prov == "Parañaque"|| prov == "PARAÑAQUE") {
            parnque();
        } else if (prov == "pasay" || prov == "Pasay"|| prov == "PASAY") {
            psay();
        } else if (prov == "pasig" || prov == "Pasig"|| prov == "PASIG") {
            pasg();
        } else if (prov == "quezon City" || prov == "Quezon City"|| prov == "QUEZON CITY") {
            quezn_cty();
        } else if (prov == "san Juan" || prov == "San Juan"|| prov == "SAN JUAN") {
            sn_juan();
        } else if (prov == "taguig" || prov == "Taguig"|| prov == "TAGUIG") {
            tagig();
        } else if (prov == "valenzuela" || prov == "Valenzuela"|| prov == "VALENZUELA") {
            valnzla();
            


        }  else if (prov == "back" || prov == "Back" || prov == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }

}
        
}
void reg_car() {
        
}

// Visayas Region ==================================================
void reg_vi() {
        
}
void reg_vii() {
        
}
//kenjie the great 
void reg_viii() {
    std::cout << "\n====== Region VIII (Eastern Visayas) =======\n";
    
}

// Mindanao Region =================================================
void reg_ix() {
        
}
void reg_x() {
        
}
void reg_xi() {
        
}
void reg_xii() {
        
}
void reg_xiii() {
        
}

void reg_barmm() {
        
}
