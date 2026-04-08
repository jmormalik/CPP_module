#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "argv not 4!" << std::endl;
		return (1);
	}
	std::ifstream ifs;
	std::ofstream ofs;
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string fileName = av[1];
	std::string con;
	int	s1_len = s1.length();
	int s2_len = s1.length();
	
	if (fileName.length() == 0 || s1_len == 0 || s2_len == 0)
	{
		std::cout << "argv error" << std::endl;
		return (1);
	}
	ifs.open(fileName.c_str());
	if (ifs.fail())
	{
		std::cout << "file open failed" << std::endl;
		return (1);
	}
	std::string outFile = fileName + ".replace";;
	ofs.open(outFile.c_str());
	if (ofs.fail())
	{
		std::cout << "file open failed" << std::endl;
		return (1);
	}
	while (1)
	{
		std::getline(ifs, con);
		size_t pos = 0;
		while (1)
		{
			pos = con.find(s1, pos);
			if (pos == std::string::npos)
				break;
			con.erase(pos, s1_len);
			con.insert(pos, s2);
			pos += s2_len;
		}
		ofs << con;
		if (ifs.eof())
			break;
		ofs << std::endl;
	}
	return 0;
}