#ifndef CELLS_HPP
#define CELLS_HPP

#include <filesystem>
#include <string>

namespace neo {
    namespace filesy {

        namespace fs = std::filesystem;

        class packagelayout {
        private:
            fs::path rootdirec;

        public:
            explicit packagelayout(const std::string& basepath);

            bool init();
        };

    }
}

#endif