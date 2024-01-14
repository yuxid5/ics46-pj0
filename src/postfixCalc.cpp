#include "postfixCalc.hpp"

#include "LinkedListStack.hpp"

namespace shindler::ics46::project0 {

unsigned postfixCalculator(const std::vector<std::string>& entries) {
    // TODO: Implement Function
    // stub, not the correct answer
    LinkedListStack<unsigned> number_stack;
    for(std::string i : entries)
    {
        if ((i == "+" || i == "-" || i == "*" || i == "/") && number_stack.size() < 2){
            throw CannotEvaluateException{"Not Have Enough Value to Calculate"};
        }
        if (i == "+"){
            unsigned first_number = number_stack.top();
            number_stack.pop();
            unsigned second_number = number_stack.top();
            number_stack.pop();
            unsigned result_number = first_number + second_number;
            number_stack.push(result_number);
        }
        else if (i == "-"){

            unsigned first_number = number_stack.top();
            number_stack.pop();
            unsigned second_number = number_stack.top();
            number_stack.pop();
            unsigned result_number = second_number - first_number;
            number_stack.push(result_number);
        }
        else if (i == "*"){

            unsigned first_number = number_stack.top();
            number_stack.pop();
            unsigned second_number = number_stack.top();
            number_stack.pop();
            unsigned result_number = first_number * second_number;
            number_stack.push(result_number);
        }
        else if (i == "/"){

            unsigned first_number = number_stack.top();
            number_stack.pop();
            unsigned second_number = number_stack.top();
            number_stack.pop();
            unsigned result_number = second_number / first_number;
            number_stack.push(result_number);
        }
        else{
            number_stack.push(std::stoul(i));
        }
    }
    if (number_stack.size() == 1){
        return number_stack.top();
    }
    else{
        throw CannotEvaluateException{"Error!"};
    }
}
}  // namespace shindler::ics46::project0
