/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:08:00 by mgur              #+#    #+#             */
/*   Updated: 2023/11/08 15:08:01 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceAllOccurrences(std::string& source, const std::string& search, const std::string& replace) {
	size_t pos = 0;
	while ((pos = source.find(search, pos)) != std::string::npos)
	{
		source.erase(pos, search.length());
		source.insert(pos, replace);
		pos += replace.length();
	}
}

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	const std::string filename = argv[1];
	const std::string s1 = argv[2];
	const std::string s2 = argv[3];

	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cout << "File couldn't be opened: " << filename << std::endl;
		return 1;
	}

	std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
	inputFile.close();

	replaceAllOccurrences(content, s1, s2);

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cout << "Couldn't create a new file: " << filename + ".replace" << std::endl;
		return 1;
	}

	outputFile << content;
	outputFile.close();

	std::cout << "Replace DONE!: " << filename + ".replace" << std::endl;

	return 0;
}
