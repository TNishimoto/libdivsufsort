#include "sa.hpp"
#include "divsufsort.h"
#include "divsufsort64.h"
#include <iostream>
#include <chrono>

namespace libdivsufsort
{

std::vector<uint64_t> construct_suffix_array(const std::vector<uint8_t> &text, int message_paragraph)
{
    if(message_paragraph >= 0 && text.size() > 0){
        std::cout << std::string(' ', message_paragraph * 2) << "Constructing Suffix Array... " << std::flush;
    }

    std::chrono::system_clock::time_point st1, st2;
    st1 = std::chrono::system_clock::now();



    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    st2 = std::chrono::system_clock::now();


    if(message_paragraph >= 0 && text.size() > 0){
        uint64_t sec_time = std::chrono::duration_cast<std::chrono::milliseconds>(st2 - st1).count();
        uint64_t ms_time = std::chrono::duration_cast<std::chrono::milliseconds>(st2 - st1).count();
        uint64_t per_time = ((double) ms_time / (double)text.size()) * 1000000;

        std::cout  << "[END] Elapsed Time: " << sec_time << " sec (" << per_time << " ms/MB)" << std::endl;
    }

    return sa;


}

std::vector<uint64_t> construct_suffix_array(const std::vector<char> &text, int message_paragraph)
{    
    if(message_paragraph >= 0 && text.size() > 0){
        std::cout << std::string(' ', message_paragraph * 2) << "Constructing Suffix Array... " << std::flush;
    }
    std::chrono::system_clock::time_point st1, st2;
    st1 = std::chrono::system_clock::now();


    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    st2 = std::chrono::system_clock::now();

    if(message_paragraph >= 0 && text.size() > 0){
        uint64_t sec_time = std::chrono::duration_cast<std::chrono::milliseconds>(st2 - st1).count();
        uint64_t ms_time = std::chrono::duration_cast<std::chrono::milliseconds>(st2 - st1).count();
        uint64_t per_time = ((double) ms_time / (double)text.size()) * 1000000;

        std::cout  << "[END] Elapsed Time: " << sec_time << " sec (" << per_time << " ms/MB)" << std::endl;
    }


    return sa;
}
std::vector<uint64_t> construct_suffix_array(const std::string &text, int message_paragraph){
    if(message_paragraph >= 0 && text.size() > 0){
        std::cout << std::string(' ', message_paragraph * 2) << "Constructing Suffix Array... " << std::flush;
    }
    std::chrono::system_clock::time_point st1, st2;
    st1 = std::chrono::system_clock::now();

    std::vector<uint64_t> sa;

    uint64_t n = text.size();
    sa.resize(n);

    divsufsort64((const unsigned char *)&text[0], (int64_t *)&sa[0], n);

    st2 = std::chrono::system_clock::now();
    if(message_paragraph >= 0 && text.size() > 0){
        uint64_t sec_time = std::chrono::duration_cast<std::chrono::milliseconds>(st2 - st1).count();
        uint64_t ms_time = std::chrono::duration_cast<std::chrono::milliseconds>(st2 - st1).count();
        uint64_t per_time = ((double) ms_time / (double)text.size()) * 1000000;

        std::cout  << "[END] Elapsed Time: " << sec_time << " sec (" << per_time << " ms/MB)" << std::endl;
    }
    

    return sa;

}


} // namespace stool