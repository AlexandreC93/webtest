#ifndef CONFIGPARSER_HPP
#define CONFIGPARSER_HPP

#include <string>
#include <vector>
#include "Server.hpp"

class ConfigParser {
public:
    static void parseConfig(const std::string& filename, std::vector<Server>& servers);
};

#endif // CONFIGPARSER_HPP
