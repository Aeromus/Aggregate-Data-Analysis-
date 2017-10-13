#include <iostream>
#include <dirent.h>
#include "List.hpp"
#include "ListStats.hpp"
#include "Report.hpp"



int main(void) {
	// Read in all employment lists

Employment* dir_to_empl_list(std::string path) {
	struct dirent *entry;DIR *dp;
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
			/* Create your linked-lists with   build_empl_list() and append_lists()   */
		}
	}
	closedir(dp);
	return head;
}
	// Append them into one list

	// Compute the statistics

	// Fill out the report
	Report rpt;

	rpt.num_areas      = 1;

	rpt.gross_wages    = 2;
	rpt.min_wages      = 3;
	rpt.max_wages      = 4;
	rpt.stdev_wages    = 5;
	rpt.unique_wages   = 6;
	rpt.distinct_wages = 7;

	rpt.gross_emplvl   = 8;
	rpt.max_emplvl     = 9;
	rpt.min_emplvl     = 10;

	rpt.gross_estabs   = 11;
	rpt.max_estabs     = 12;
	rpt.min_estabs     = 13;

	// Print the report
	std::cout << rpt;
}
