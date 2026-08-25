class Solution {
public:
    bool isHappy(int n) {
        int sum = sumDigitSq(n);
        if (sum == 1) return true;
        else if (s.insert(sum).second == false) { // has that num in set
            return false;
        } else {
            s.insert(sum);
            return isHappy(sum);
        }
    }

private: 
    int sumDigitSq(int num) {
        int sum = 0;
        while (num > 0) {
            sum += (num % 10)*(num % 10); // last digit square
            num = num / 10;
        }
        return sum;
    }

    unordered_set<int> s; // to store sum
};
