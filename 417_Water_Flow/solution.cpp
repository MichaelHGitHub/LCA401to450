#include "header.h"

void static checkFlow(vector<vector<int>>& matrix, vector<vector<int>>& flow, int r, int c, int ocean);

vector<vector<int>> pacificAtlantic(
    vector<vector<int>>& heights) {
    int m = heights.size();
    int n = heights[0].size();
    // Mark the state of cell in a two-D array
    vector<vector<int>> flow(m, vector<int>(n, 0));
    int pacific = 0x0001, atlantic = 0x0002;

    // Must search from the edges inwards. Because the edge cells
    // are the ones we know that can reach the ocean.
    for (int i = 0; i < m; i++) {
        checkFlow(heights, flow, i, 0, pacific);
        checkFlow(heights, flow, i, n - 1, atlantic);
    }
    for (int j = 0; j < n; j++) {
        checkFlow(heights, flow, 0, j, pacific);
        checkFlow(heights, flow, m - 1, j, atlantic);
    }

    vector<vector<int>> result;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((flow[i][j] & (pacific | atlantic)) == (pacific | atlantic)) {
                result.push_back({ i, j });
            }
        }
    }
    return result;
}

void checkFlow(vector<vector<int>>& matrix, vector<vector<int>>& flow, int r, int c, int ocean) {
    int m = matrix.size();
    int n = matrix[0].size();

    if ((flow[r][c] & ocean) == ocean) {
        return;
    }

    // If the cell is reachable, it can also reach the ocean
    flow[r][c] |= ocean;

    // Search the source of the water
    if (r > 0 && matrix[r - 1][c] >= matrix[r][c]) {
        checkFlow(matrix, flow, r - 1, c, ocean);
    }
    if (r < m - 1 && matrix[r + 1][c] >= matrix[r][c]) {
        checkFlow(matrix, flow, r + 1, c, ocean);
    }
    if (c > 0 && matrix[r][c - 1] >= matrix[r][c]) {
        checkFlow(matrix, flow, r, c - 1, ocean);
    }
    if (c < n - 1 && matrix[r][c + 1] >= matrix[r][c]) {
        checkFlow(matrix, flow, r, c + 1, ocean);
    }
}