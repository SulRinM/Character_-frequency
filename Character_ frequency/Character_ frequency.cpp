#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>


int main() {
	std::string text = "Hello world!!";
	std::unordered_map<char, int> freq_map;

	std::cout << "[IN]: ";
	for (const auto& t : text)
	{
		std::cout << t;
	}
	std::cout << std::endl;

	for (const auto &c : text) 
	{
		freq_map[c]++;
	}

	std::vector<std::pair<char, int>> freq_vec(freq_map.begin(), freq_map.end());
	std::sort(freq_vec.begin(), freq_vec.end(),
		[](const std::pair<char, int>& a, const std::pair<char, int>& b) 
		{
			return a.second > b.second;
		});

	std::cout << "[OUT]: " << std::endl;
	for (const auto &p : freq_vec) 
	{
		std::cout << p.first << ": " << p.second << std::endl;
	}

	return 0;
}