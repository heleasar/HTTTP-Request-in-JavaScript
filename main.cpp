#include <iostream>
#include <vector>

std::vector<std::pair<int, int>> SearchEven(std::vector<std::vector<int>> data) {
    std::vector<std::pair<int, int>> locations;
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            if (data[i][j] % 2 == 0) {
                locations.push_back(std::make_pair(i, j));
            }
        }
    }
    if (locations.empty()) {
        locations.push_back(std::make_pair(-1, -1));
    }
    return locations;
}

void Display_Locations(std::vector<std::pair<int, int>> locations) {
    if (locations[0].first == -1) {
        std::cout << "The 2D vector contains no even numbers." << std::endl;
    } else {
        for (int i = 0; i < locations.size(); i++) {
            std::cout << "Row: " << locations[i].first << ", Column: " << locations[i].second << std::endl;
        }
    }
}

int main() {
    std::vector<std::vector<int>> Data1 = { { 1,1,3,1,5 },{ 1,1,3,1,5 },{ 1,1,3,1,5 },{ 1,1,3,1,5 },{ 1,1,3,1,5 } };
    std::vector<std::pair<int, int>> locations1 = SearchEven(Data1);
    Display_Locations(locations1);

    std::vector<std::vector<int>> Data2 = { { 1,2,3,4,5,6,7,8,9,10 },{ -2,-1,2,1},{  },{ 2,2,2 } };
    std::vector<std::pair<int, int>> locations2 = SearchEven(Data2);
    Display_Locations(locations2);
    return 0;
}
