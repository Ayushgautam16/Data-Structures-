class Solution {
public:
    int countPartitions(vector<int>& A) {
        int total = accumulate(A.begin(), A.end(), 0);
        return total & 1 ? 0 : A.size() - 1;
    }

};


class Solution {
public:
    int minOperations(string s, int k) {
        int n = s.length();
        int Z = 0;
        for (char c : s) if (c == '0') Z++;
        if (Z == 0) return 0;

        for (long long t = (Z + k - 1) / k; t <= n; ++t) {
            long long total_needed = t * k;

            
            if ((total_needed - Z) % 2 != 0) continue;

            long long max_possible_selections = 0;
            for (char c : s) {
                if (c == '0') {
                    max_possible_selections += (t % 2 != 0) ? t : t - 1;
                } else {
                    max_possible_selections += (t % 2 == 0) ? t : t - 1;
                }


            }

            if (total_needed <= max_possible_selections) {
                return (int)t;
            }
        }

        return -1;
    }
};
