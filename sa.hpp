#pragma once
#include <cassert>
#include <string>
#include <vector>
#include <limits>
#include <cstdint> 

namespace stool
{

std::vector<uint64_t> construct_suffix_array(const std::vector<uint8_t> &text);
std::vector<uint64_t> construct_suffix_array(const std::vector<char> &text);
std::vector<uint64_t> construct_suffix_array(const std::string &text);

} // namespace stool