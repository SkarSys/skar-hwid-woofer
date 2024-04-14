#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>

struct Kernel {

    bool setup() {
        file.open("C:\\skar.skar", std::ios::out);
        return file.is_open();
    }

    bool changeDisk(const std::string& text) {
        if (file.is_open()) {
            file << text << std::endl;
            return true;
        }
        else { return false; }
    }

    std::ofstream file;
};

Kernel* Memory = new Kernel;

