#include "Coins.hpp"

Coins::Coins(){
}


Coins::~Coins(){

}

void Coins::setCoinsSet(std::set<int> coinsStr){
    coins = coinsStr;

}   

std::vector<int> Coins::getPermutationVector(int val){

    std::vector<int> resp;
    size_t index = 0;

    for(int c : coins){
                
        resp.resize(resp.size() + val/c);
        std::fill_n((resp.begin() + index), val/c, c);

        index += val/c;
    }

    return resp;
}

std::string formatVector(std::vector<int> vec){

    int current = vec.at(0);
    int count = 1;
    std::string resp = "";

    for(int c = 1; c < vec.size(); c++){

        if(current == vec.at(c)){
            count++;
        }else{

            resp += std::to_string(current) + ": " + std::to_string(count) + "\n";

            current = vec.at(c);
            count = 1;
        }
    }
            
            
    resp += std::to_string(current) + ": " + std::to_string(count) + "\n";
    return resp;

}

std::string Coins::permutate(const int val) {

    std::vector<int> permutationVec = getPermutationVector(val);
    std::vector<int> evaluation;
    std::vector<int> resp;
    int sum = 0;
    int index = 0;

    resp.resize(permutationVec.size());

    do{

        while(sum < val){

            evaluation.push_back(permutationVec.at(index));
            sum += permutationVec.at(index);;

            index++;
        }

        if(sum == val && evaluation.size() < resp.size()){
            resp = evaluation;
        }

        index = 0;
        sum = 0;
        evaluation.clear();

    }while(std::next_permutation(permutationVec.begin(), permutationVec.end()));
    

    return formatVector(resp);

}

std::string Coins::greedy(int val){

    std::string resp = "";
    auto it = coins.lower_bound(val);
    int count;

    if(it == coins.end()) --it;

    while ((it != coins.begin()) || (val > 0)) {

        count = val / *it;
        
        if(count > 0){
            resp += std::to_string(*it) + ": " + std::to_string(count) + "\n";
        }

        val -= count * *it;
        --it;
    }

    return resp;
}