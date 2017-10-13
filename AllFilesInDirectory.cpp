#include <dirent.h>
#include <string>

#include "List.hpp"
#include "Employment.hpp"

Employment* AllFilesInDirectory(std::string path) {
	struct dirent *entry;
	DIR *dp;

	// Open the directory containing the data
	dp = opendir(path.c_str());
	if (dp == NULL) {
		perror("opendir");
		return (Employment *)NULL;
	}

	std::string base(path);
	base += "/";
	Employment* head = (Employment *)NULL;
	while ((entry = readdir(dp))) {
		if (entry->d_name[0] != '.') {
			std::string filename = base + (std::string) entry->d_name;

		if (head ==NULL)
			head = build_empl_list(filename);
			
		else{
			Employment * temp_list = build_empl_list(filename);
			append_lists(head, temp_list);
			}
		}
	}

	closedir(dp);
	return head;
}
