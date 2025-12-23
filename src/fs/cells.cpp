#include "cells.hpp"
#include <iostream>
#include <fstream>

namespace neo {
    namespace filesy {

        packagelayout::packagelayout(const std::string& basepath)
            : rootdirec(basepath) {}

        bool packagelayout::init() {
            const fs::path sentinel = rootdirec / ".initialized"; // makes a .init file in the root dir

            if (fs::exists(sentinel)) {
                return true; 
            }

        try {
            fs::create_directories(rootdirec / "bin");
            fs::create_directories(rootdirec / "cache");
            fs::create_directories(rootdirec / "cells");

       
            std::ofstream(sentinel) << "neo initialized yayyyyyyy\n";

            return true;
        } catch (const fs::filesystem_error&) {
        return false;
    }
}

    }
}
