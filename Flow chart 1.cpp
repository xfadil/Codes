/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Thu Oct 12 2023
 *  File : Flow chart 1.cpp
 *******************************************/



#include <iostream>

int main() {
    #include <iostream>
#include <string>

int main() {
    // Get user's choice for making apple or banana pie
    std::string pie_choice;
    std::cout << "Do you want to make an apple pie or a banana pie? (Enter 'apple' or 'banana'): ";
    std::cin >> pie_choice;

    // Check if bananas are available
    bool bananas_available;
    std::cout << "Are bananas available? (Enter '1' for Yes, '0' for No): ";
    std::cin >> bananas_available;

    if (bananas_available) {
        std::cout << "Buy bananas." << std::endl;
    } else {
        std::cout << "Buy apples." << std::endl;
    }

    // Check if pie spice mix is on sale
    bool pie_spice_on_sale;
    std::cout << "Is pie spice mix on sale? (Enter '1' for Yes, '0' for No): ";
    std::cin >> pie_spice_on_sale;

    if (pie_spice_on_sale) {
        std::cout << "Buy 1 jar of pie spice mix." << std::endl;
    } else {
        // Check for the available sizes of cinnamon jars
        double cinnamon_available_oz;
        std::cout << "Enter the size of available cinnamon jars (in oz): ";
        std::cin >> cinnamon_available_oz;

        if (cinnamon_available_oz >= 2.0) {
            std::cout << "Buy 2 jars of cinnamon." << std::endl;
        } else if (cinnamon_available_oz >= 1.5) {
            std::cout << "Buy 2 jars of cinnamon." << std::endl;
        } else if (cinnamon_available_oz >= 1.0) {
            std::cout << "Buy 3 jars of cinnamon." << std::endl;
        } else {
            std::cout << "Cinnamon jars are too small; cannot purchase." << std::endl;
        }
    }

    // Check for the availability of 1 pint containers of whipping cream
    bool whipping_cream_available;
    std::cout << "Is whipping cream available in 1 pint containers? (Enter '1' for Yes, '0' for No): ";
    std::cin >> whipping_cream_available;

    if (pie_choice == "apple") {
        if (whipping_cream_available) {
            std::cout << "Buy 1 container of whipping cream for the apple pie." << std::endl;
        } else {
            std::cout << "Whipping cream is not available in 1 pint containers; cannot purchase for the apple pie." << std::endl;
        }
    } else if (pie_choice == "banana") {
        if (whipping_cream_available) {
            std::cout << "Buy 3 containers of whipping cream for the banana pie." << std::endl;
        } else {
            std::cout << "Whipping cream is not available in 1 pint containers; cannot purchase for the banana pie." << std::endl;
        }
    }

    return 0;
}


    return 0;
}