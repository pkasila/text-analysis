//
// Created by Ivan  Hontarau on 11/1/2021.
//

#include "../src/interjections_counter.h"
#include "../src/utils.h"

int main(int, char **) {
    std::vector<std::pair<std::string, std::size_t>> res = count_interjections(
            "��, ��� ��������� �� �������������, � ����������� ����. "
            "����, ��� � �������. "
            "���������, ����������, ��� ��������� ����� ���������. "
            "������ � ������ �� �����, �����!");


    if (res.size() != 3) {
        return -1;
    }
    for (const std::pair<std::string, std::size_t>& p: res) {
        if (p.second != 1) {
            return -2;
        }
    }
    res = count_interjections(
            "��, ��, ��, ");
    if (res.size() != 1) {
        return -3;
    }
    if (res[0].second != 3) {
        return -4;
    }
    return 0;
}

