#include "verifySol.hpp"

#include <string>
#include <unordered_map>

namespace shindler::ics46::project0 {

bool verifySolution(const std::string& addend1, const std::string& addend2,
                    const std::string& result,
                    const std::unordered_map<char, unsigned>& mapping) {
    // TODO: Implement
    int addend1_number = 0;
    for (char i : addend1){
        int current_number = mapping.at(i);
        addend1_number = addend1_number * 10 + current_number;
    }

    int addend2_number = 0;
    for (char i : addend2){
        int current_number = mapping.at(i);
        addend2_number = addend2_number * 10 + current_number;
    }

    int result_number = 0;
    for (char i : result){
        int current_number = mapping.at(i);
        result_number = result_number * 10 + current_number;
    }

    int real_result = addend1_number + addend2_number;

    if (real_result != result_number){
        return false;
    }
    else{
        return true;
    }
}

}  // namespace shindler::ics46::project0
