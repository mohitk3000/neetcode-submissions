class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 =="0" || num2 == "0") return "0";
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> res(n1 + n2, 0);
        for (int i = n1 - 1; i >=0; i--) {
            for (int j = n2 - 1; j >=0; j--) {
                int mul = toInt(num1[i]) * toInt(num2[j]);
                // Add to the existing value at this position
                int sum = mul + res[i + j + 1];

                // Set the current position to the remainder digit, 
                // and carry over the rest
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }

        // Convert the result back into a readable string
        std::string product = "";
        for (int num : res) {
            // Skip leading zeros
            if (!(product.empty() && num == 0)) {
                product += std::to_string(num);
            }
        }

        return product.empty() ? "0" : product;
    }

    int toInt(char c) {
        return c - '0';
    }
};
