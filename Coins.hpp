#include <set>
#include <string>
#include <algorithm>

class Coins {

    private:
        std::set<int> coins;
        std::vector<int> getPermutationVector(int val);

    public:
        void setCoinsSet(std::set<int> coinsSet);
        std::string greedy(int val);
        std::string permutate(int k);
        Coins();
        ~Coins();
};
