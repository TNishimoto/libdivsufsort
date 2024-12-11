#include "sa.hpp"
#include "divsufsort.h"
#include "divsufsort64.h"
#include <iostream>

namespace stool
{

std::vector<uint64_t> construct_suffix_array(const std::vector<uint8_t> &text)
{
    if(text.size() > 1000000){
        std::cout << "Constructing Suffix Array..." << std::flush;
    }
    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    if(text.size() > 1000000){
        std::cout << " [END]" << std::endl;
    }

    return sa;


}

std::vector<uint64_t> construct_suffix_array(const std::vector<char> &text)
{
    if(text.size() > 1000000){
        std::cout << "Constructing Suffix Array..." << std::flush;
    }

    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    if(text.size() > 1000000){
        std::cout << " [END]" << std::endl;
    }

    return sa;
}
std::vector<uint64_t> construct_suffix_array(const std::string &text){
    if(text.size() > 1000000){
        std::cout << "Constructing Suffix Array..." << std::flush;
    }

    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    if(text.size() > 1000000){
        std::cout << " [END]" << std::endl;
    }

    return sa;

}


} // namespace stool