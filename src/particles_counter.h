//
// Created by Ivan Hontarau on 11/1/2021.
//

#ifndef TEXT_ANALYSIS_PARTICLES_COUNTER_H
#define TEXT_ANALYSIS_PARTICLES_COUNTER_H

#include <vector>
#include <utility>
#include <string>

std::vector<std::pair<std::string, std::size_t>> count_particles(const std::string &text);

#endif //TEXT_ANALYSIS_PARTICLES_COUNTER_H
