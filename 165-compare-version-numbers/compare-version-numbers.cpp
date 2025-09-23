class Solution {
public:
    int compareVersion(string v1, string v2) {
        int n = v1.length(), m = v2.length();
        int i = 0, j = 0;

        while (i < n || j < m) {
            string v1temp = "";
            string v2temp = "";

            // while (v1[i] != '.' && v2[j] != '.') {
            //     v1temp.push_back(v1[i++]);
            //     v2temp.push_back(v2[j++]);
            // }
            while (i < n && v1[i] != '.') {
                v1temp.push_back(v1[i++]);
            }

            while (j < m && v2[j] != '.') {
                v2temp.push_back(v2[j++]);
            }

            if (i < n && v1[i] == '.')
                i++;

            if (j < m && v2[j] == '.')
                j++;

            int temp1 = v1temp.empty() ? 0 : stoi(v1temp);
            int temp2 = v2temp.empty() ? 0 : stoi(v2temp);

            if (temp1 < temp2) {
                return -1;
            }
            if (temp2 < temp1) {
                return 1;
            }
        }
        return 0;
    }
};