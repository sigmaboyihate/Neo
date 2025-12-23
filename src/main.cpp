#include <args.hpp>
#include <cells.hpp>
#include <iostream>

int main(int argc, char* argv[]){
    
    neo::filesy::packagelayout layout("/neo"); // for fs

    if (argc < 2) {
        std::cout << "Incorrect usage, for help do: 'neo --help'\n";
        return 1;
    }

    std::string command = argv[1];
    
    if (command == "--help" || command == "-h" || command == "help"){
        neo::cli::helpme();
        return 0;
    }

    if (command == "init") {


        if (!layout.init()) {
            std::cerr << "Failed to initialize root dir (are you root bitch?)\n";
            return 1;
        }

        std::cout << "neo initialized successfully/ or already initialized\n";
        return 0;

    }


    if (!layout.init()) {
        std::cerr << "Neo is not initialized. Run `neo init` as root.\n";
        return 1;
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