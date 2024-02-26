#include "IElectronics.h"
#include "Appliances.h"
#include "Device.h"
#include "Player.h"
#include "Smartphone.h"
#include "Fridge.h"
#include "TVset.h"
#include "Mixer.h"
#include "Radioset.h"
#include <iostream>

int main() {
    const unsigned ARTICLE_COUNT = 6;
    IElectronics *market[ARTICLE_COUNT];

    market[0] = new Player(10, 600, "Sony", "Walkman");
    market[1] = new Smartphone({2796, 1290}, "Black Titanium", "iOS 17", 1800, "Apple", "IPhone 15 Pro Max");
    market[2] = new Fridge("White", 112, "Samsung", "RB3000RM");
    market[3] = new TVset({3840, 2160}, 32, "Panasonic", "TX-65HZR1000");
    market[4] = new Mixer(50, 40, 1, "Kitfort", "KT-3418");
    market[5] = new Radioset(108, 560, 2, "Hyundai", "H-PSR156");

    std::cout << "Маленький магазин электроники.\n";
    bool working {true};
    while (working) {
        unsigned choice;
        std::cout << "Каталог товаров:\n";
        std::cout << "1. Плеер.\n";
        std::cout << "2. Смартфон.\n";
        std::cout << "3. Холодильник.\n";
        std::cout << "4. Телевизор.\n";
        std::cout << "5. Аккумуляторный миксер.\n";
        std::cout << "6. Аккумуляторный радиоприёмник.\n";
        std::cout << "---------------------------------\n";
        std::cout << "0. Выход.\n";
        std::cout << "\nВыберите товар: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            market[choice-1]->ShowSpecs();
            break;
        case 0:
            working = false;
            break;
        default:
            std::cout << "Выберите товар от 1 до 6 или 0 для выхода!\n";
        }

    }

    for (int i = 0; i < ARTICLE_COUNT; ++i) {
        delete market[i];
    }

    return 0;
}