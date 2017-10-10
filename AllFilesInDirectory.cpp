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

			/* Create your linked-lists with 
			   build_empl_list() and append_lists()
			   */

		}
	}

	closedir(dp);
	return head;
}
