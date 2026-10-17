
class Solution {
public:
    int check(vector<int>& piles, int mid, int h) {
        int time = 0;

        for (int i = 0; i < piles.size(); i++) {
            time += piles[i] / mid;
            if (piles[i] % mid != 0) {
                time++;
            }

            if (time > h)
                return 1;
        }

        return 0;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left <= right) {
            int mid = left + (right - left) / 2;

            int c = check(piles, mid, h);

            if (c == 1) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return left;
    }
};
