#pragma once

float mean(std::vector<float>& v);
float div_mean(std::vector<std::vector<float>>& M);
float dim_mean(std::vector<std::vector<float>>& M);
float dim_mean2(std::vector<std::vector<float>>& M);
float dec_mean(std::vector<float>& v, int begin, int end);
float div_mean(std::vector<float>& v, int begin, int end);
float basicaoMean(std::vector<std::vector<float>>& M);
float divMean(std::vector<std::vector<float>>& M, int bl, int el, int bc, int ec);
float dimMean(std::vector<std::vector<float>>& M);
