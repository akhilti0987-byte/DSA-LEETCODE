class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitude;
        altitude.push_back(0);
        for (int i=0;i<gain.size();i++){
            altitude.push_back(altitude[i]+gain[i]);
        }
        int largest=0;
        for (int i=1;i<altitude.size();i++){
            if (largest<altitude[i])
                largest=altitude[i];
        }
        return largest;
    }
};