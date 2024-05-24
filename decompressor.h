#pragma once

#include <string>

// напишите эту функцию
inline bool DecodeRLE(const std::string& src_name, const std::string& dst_name) {
    using namespace std;
    ifstream in(src_name, ios::binary);
    if (!in) {
        return false;
    }

    ofstream out(dst_name, ios::binary);

    size_t source_size = 0;

    do {
        char buff[1024];
        in.get(buff, sizeof buff);
        size_t read = in.gcount();
        source_size += read;

    } while (in);

    return true;
}