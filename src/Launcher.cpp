#include "Launcher.hpp"
#include "ConfigParser.hpp"
#include <iostream>

void Launcher::loadConfig(const std::string& filename) {
    ConfigParser::parseConfig(filename, servers);
}

void Launcher::testFolderTmp() const {
    // Implémentation de testFolderTmp (voir exemple précédent)
}
