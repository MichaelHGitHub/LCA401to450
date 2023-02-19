#include "header.h"

vector<string> readBinaryWatch(int turnedOn) {
    vector<string> result;
    vector<int> hour_leds({ 1, 2, 4, 8 });
    vector<int> min_leds({ 1, 2, 4, 8, 16, 32 });
    vector<vector<string>> h_map(5);
    vector<vector<string>> m_map(7);

    for (int i = 0; i < 12; i++) {
        int num = 0;
        int hour = i;
        for (int j = hour_leds.size() - 1; j >= 0; j--) {
            if (hour >= hour_leds[j]) {
                hour -= hour_leds[j];
                ++num;
            }
        }
        h_map[num].push_back(std::to_string(i));
    }

    for (int i = 0; i < 60; i++) {
        int num = 0;
        int min = i;
        for (int j = min_leds.size() - 1; j >= 0; j--) {
            if (min >= min_leds[j]) {
                min -= min_leds[j];
                ++num;
            }
        }
        if (i < 10) {
            m_map[num].push_back("0" + std::to_string(i));
        }
        else {
            m_map[num].push_back(std::to_string(i));
        }
    }

    for (int h_num = 0; h_num < h_map.size() && h_num <= turnedOn; h_num++) {
        int min_num = turnedOn - h_num;
        if (min_num < m_map.size()) {
            for (int i = 0; i < h_map[h_num].size(); i++) {
                for (int j = 0; j < m_map[min_num].size(); j++) {
                    result.push_back(h_map[h_num][i] + ":" + m_map[min_num][j]);
                }
            }
        }
    }

    return result;
}