#include "Coins.hpp"
#include <fstream>
#include <regex>
#include <vector>

std::set<int> getSet(std::string str){

    std::set<int> resp;

    std::regex numRegex("\\d+");
    std::sregex_iterator it(str.begin(), str.end(), numRegex), end;

    for (it; it != end; ++it) {
        resp.insert(std::stoi(it->str()));
    }
    
    return resp;
}


int main(int argc, char const *argv[]) {

    Coins coins;
    std::set<int> respSet;

    std::ofstream outputFile("output.txt");
    std::ifstream inputFile("input.txt");
    std::string input;

    std::regex re("([0-9 ]+);([0-9 ]+)");
    std::smatch match;


    while(getline(inputFile, input)){

        if (!std::regex_search(input, match, re)) continue;
        coins.setCoinsSet(getSet(match[1]));

        outputFile.clear();
        outputFile << "coins: " << match[1] << "\n\n";

        respSet = getSet(match[2]);

        for(int c : respSet){
            outputFile << "value: " << c << "\n";
            outputFile << coins.getResp(c) << "\n\n";
        }

    }


    return 0;
}
