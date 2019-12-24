#include <iostream>
using namespace std;

int pinfen(int k, int num_of_pingwei) {
    cout << "现在开始为第 " << k+1 << " 位选手打分" << endl;
    int totalScore = 0, maxScore = 0, minScore = 9999;
    for (int i = 0; i < num_of_pingwei; i++)
    {
        cout << "请输入第 " << i + 1 << " 个评委的打分";
        int score = 0;
        cin >> score;
        totalScore += score;
        if (score > maxScore)
            maxScore = score;
        if (score < minScore)
            minScore = score;
    }
    totalScore = totalScore - maxScore - minScore;
    cout << "第" << k+1 << "位选手的平均分为：" << (float)totalScore / (num_of_pingwei - 2) << endl;
    return 0;
}

int main() {
    int num_of_pingwei = 6;
    int num_of_player = 10;

    for (int k = 0; k < num_of_player; k++)
    {
        pinfen(k, num_of_pingwei);
    }
}

