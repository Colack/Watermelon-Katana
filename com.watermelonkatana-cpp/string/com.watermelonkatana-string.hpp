#ifndef COM_WATERMELONKATANA_STRING_HPP
#define COM_WATERMELONKATANA_STRING_HPP

using namespace std;

#include <sstream>
#include <map>
#include <cassert>
#include <unordered_map>
#include <algorithm>

std::string com_watermelonkatana_string_replace_copy(std::string str, const std::string& from, const std::string& to);
std::string com_watermelonkatana_string_to_lower(std::string str);
std::string com_watermelonkatana_string_to_upper(std::string str);
std::string com_watermelonkatana_string_trim(std::string str);
std::string com_watermelonkatana_string_join(std::vector<std::string> vec, char delim);
std::string com_watermelonkatana_string_removeNewlines(std::string str);

std::vector<std::string> com_watermelonkatana_string_split(std::string str, char delim);

#endif