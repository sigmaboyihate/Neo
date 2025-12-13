#include "args.hpp"
#include <iostream>

namespace neo {
    namespace cli{
        
        void helpme() { // help menu
            std::cout << "You can read more in https://github.com/sigmaboyihate/Neo\n";
            std::cout << "----------------------\n";
            std::cout << "neo get <package>\n";
            std::cout << "neo sync\n";
            std::cout << "neo update\n";
            std::cout << "neo remove <package>\n";
            std::cout << "----------------------\n";
        }
        
        bool confirm(const std::string& message) { // js confirm logic
            char answer;
            std::cout << message << " (y/n): ";
            std::cin >> answer;
    
            if (answer == 'y' || answer == 'Y') {
                return true;
            } else if (answer == 'n' || answer == 'N') {
                return false;
            } else {
                std::cout << answer << " was not recognized as an option.\n";
                return false;
            }
        }

        void gethandler(const std::string& package) { // bro i need to add so much logic :sob:
            std::string msg = "Are you sure you want to install " + package + "?";
    
            if (confirm(msg)) {
                std::cout << "Installing package " << package << "...\n";
            } else {
                std::cout << "Package installation aborted\n";
            }
        }

        void synchandler(){
            std::cout<<"Syncing..\n";
            // BROOOOOOOOOOOO 
            // ok we are gonna make a index.json file for syncing yeah?
        }

        void updatehandler(){
            std::cout << "Checking repository for updates...\n";
            std::cout << "Updates found, redownloading binaries to cells...\n";
        }

        void rmhandler(const std::string& package){
            std::string remsg = "Are you sure you actually want to delete " + package + "?";

            if (confirm(remsg)) {
                std::cout << "Deleting package " << package << "...\n";
            } else {
                std::cout << "Package removal aborted";
            }
        }


    }
}
