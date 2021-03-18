#pragma once

#include <vector>

#include "filesystem.h"

class Resource {

    public:
        std::uint8_t read() const;
        //... read_all() const;
        void write(const std::uint8_t);
        void write_all(...);
        void flush();

    private:
        Resource() = default;

        std::vector<uint8_t> vec;

        friend class FileSystem;
};

