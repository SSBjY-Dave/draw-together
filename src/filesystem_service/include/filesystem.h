#pragma once

#include <optional>

#include "resource.h"

class FileSystem {

    public:
        FileSystem()  = default;
        ~FileSystem() = default;

        std::optional<Resource&> get_resource(std::string path);
        Resource& create_reasource(std::string path);

    private:
        
};

