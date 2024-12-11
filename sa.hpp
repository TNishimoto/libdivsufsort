#pragma once
#include <cassert>
#include <string>
#include <vector>
#include <limits>
#include <cstdint> 

namespace libdivsufsort
{

std::vector<uint64_t> construct_suffix_array(const std::vector<uint8_t> &text, bool show_message = true);
std::vector<uint64_t> construct_suffix_array(const std::vector<char> &text, bool show_message = true);
std::vector<uint64_t> construct_suffix_array(const std::string &text, bool show_message = true);

} // namespace stool