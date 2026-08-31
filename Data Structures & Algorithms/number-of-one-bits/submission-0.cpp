class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ctr{0};
        for (int i = 0; i < 32; i++) {
            uint32_t num = 1u << i; // left shift
            uint32_t res = (n & num); // and with num
            if (res > 0) ctr++;
        }
        return ctr;
    }
};