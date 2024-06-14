#ifndef LAUNCHER_HPP
#define LAUNCHER_HPP

#include <vector>
#include "Server.hpp"

class Launcher {
public:
    std::vector<Server> servers;

    void loadConfig(const std::string& filename);
    void testFolderTmp() const;
};

#endif // LAUNCHER_HPP
