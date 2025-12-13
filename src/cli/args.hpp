#ifndef ARGS_HPP
#define ARGS_HPP
#include <iostream>

namespace neo {
    namespace cli {
        void helpme();
        bool confirm(const std::string& message);
        void gethandler(const std::string& package);
        void synchandler();
        void updatehandler();
        void rmhandler(const std::string& package);
    }
}

#endif