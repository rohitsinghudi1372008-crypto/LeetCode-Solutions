class Solution {
public:
    int calPoints(vector<string>& operations) {
    //     vector<int> record;
        
    //     for (string op : operations) {
    //         if (op == "+") {
    //             int n = record.size();
    //             record.push_back(record[n - 1] + record[n - 2]);
    //         } 
    //         else if (op == "D") {
    //             record.push_back(2 * record.back());
    //         } 
    //         else if (op == "C") {
    //             record.pop_back();
    //         } 
    //         else {
    //             record.push_back(stoi(op));
    //         }
    //     }
        
    //     int ans = 0;
    //     for (int x : record) {
    //         ans += x;
    //     }
        
    //     return ans;
    // }
    stack<int> points;

for (auto s : operations) {
    if (s == "+") {
        int op1 = points.top();
        points.pop();

        int op2 = points.top();

        points.push(op1);
        points.push(op1 + op2);
    }
    else if (s == "D") {
        points.push(2 * points.top());
    }
    else if (s == "C") {
        points.pop();
    }
    else {
        points.push(stoi(s));
    }
}

int sum = 0;
while (!points.empty()) {
    sum += points.top();
    points.pop();
}

return sum;
    }
};
