#include "sa.hpp"
#include "divsufsort.h"
#include "divsufsort64.h"
#include <iostream>

namespace libdivsufsort
{

std::vector<uint64_t> construct_suffix_array(const std::vector<uint8_t> &text, int message_paragraph)
{
    if(message_paragraph >= 0){
        std::cout << std::string(' ', message_paragraph * 2) << "Constructing Suffix Array..." << std::flush;
    }
    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    if(message_paragraph >= 0){
        std::cout  << " [END]" << std::endl;
    }

    return sa;


}

std::vector<uint64_t> construct_suffix_array(const std::vector<char> &text, int message_paragraph)
{
    if(message_paragraph >= 0){
        std::cout << std::string(' ', message_paragraph * 2) << "Constructing Suffix Array..." << std::flush;
    }

    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    if(message_paragraph >= 0){
        std::cout << " [END]" << std::endl;
    }

    return sa;
}
std::vector<uint64_t> construct_suffix_array(const std::string &text, int message_paragraph){
    if(message_paragraph >= 0){
        std::cout << std::string(' ', message_paragraph * 2) << "Constructing Suffix Array..." << std::flush;
    }

    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    if(message_paragraph >= 0){
        std::cout << " [END]" << std::endl;
    }

    return sa;

}


} // namespace stool