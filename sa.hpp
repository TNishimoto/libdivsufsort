#pragma once
#include <cassert>
#include <string>
#include <vector>
#include <limits>
#include <cstdint> 

namespace libdivsufsort
{

std::vector<uint64_t> construct_suffix_array(const std::vector<uint8_t> &text, int message_paragraph = 0);
std::vector<uint64_t> construct_suffix_array(const std::vector<char> &text, int message_paragraph = 0);
std::vector<uint64_t> construct_suffix_array(const std::string &text, int message_paragraph = 0);

} // namespace stool