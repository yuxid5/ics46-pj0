#include "verifySol.hpp"

#include <string>
#include <unordered_map>

namespace shindler::ics46::project0 {

bool verifySolution(const std::string& addend1, const std::string& addend2,
                    const std::string& result,
                    const std::unordered_map<char, unsigned>& mapping) {
    // TODO: Implement
    std::string addend1_str;
    for (int i{0}; i < addend1.length(); i++){
        std::string number = std::to_string(mapping.at(addend1[i]));
        addend1_str += number;
    }
    int addend1_num = stoi(addend1_str)

    std::string addend2_str;
    for (int i{0}; i < addend2.length(); i++){
        std::string number = std::to_string(mapping.at(addend2[i]));
        addend2_str += number;
    }
    int addend2_num = stoi(addend2_str)

    std::string result_str;
    for (int i{0}; i < result.length(); i++){
        std::string number = std::to_string(mapping.at(result[i]));
        result_str += number;
    }
    int result_num = stoi(addend2_str)

    int real_result = addend1_num + addend2_num;

    if (real_result != result_num){
        retrun false;
    }
    else{
        return true;
    }
}

}  // namespace shindler::ics46::project0
