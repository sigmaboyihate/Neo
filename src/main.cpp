#include <args.hpp>
#include <iostream>

int main(int argc, char* argv[]){
    
    if (argc < 2) {
        std::cout << "Incorrect usage, for help do: 'neo --help'\n";
        return 1;
    }

    std::string command = argv[1];
    
    if (command == "--help" || command == "-h" || command == "help"){
        neo::cli::helpme();
        return 0;
    }


    if (command == "get" || command == "conjure"){
        if (argc < 3) {
            std::cout << "No package specified. Usage: neo get <package>\n";
            return 1;
        }
        
        neo::cli::gethandler(argv[2]);
        return 0;
    }

    if (command == "remove" || command == "rm" || command == "delete"){
        if (argc < 3) {
            std::cout << "No package specified. Usage: neo remove/rm <package>\n";
            return 1;
        }
        neo::cli::rmhandler(argv[2]);
        return 0;
    }

    if (command == "sync" || command == "synchronize"){
        neo::cli::synchandler();
        return 0;
    }
    
    if (command == "update" || command == "upgrade"){
        neo::cli::updatehandler();
        return 0;
    }

    return 0;
}