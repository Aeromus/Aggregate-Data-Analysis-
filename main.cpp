#include <iostream>
#include <dirent.h>
#include "List.hpp"
#include "ListStats.hpp"
#include "Report.hpp"
#include "AllFilesInDirectory.hpp"



int main(void) {
	// Read in all employment lists

	Employment* final_list = AllFilesInDirectory("data");

	// Append them into one list
	
	// Compute the statistics

	// Fill out the report
	
	Report rpt;

	rpt.num_areas      = list_length(final_list);

	rpt.gross_wages    = total_annual_wages(final_list);
	rpt.min_wages      = min_annual_wages(final_list);
	rpt.max_wages      = max_annual_wages(final_list);
	rpt.stdev_wages    = stdev_annual_wages(final_list);
	//rpt.unique_wages   = 6;
	//rpt.distinct_wages = 7;

	rpt.gross_emplvl   = total_annual_emplvl(final_list);
	rpt.max_emplvl     = max_annual_emplvl(final_list);
	rpt.min_emplvl     = min_annual_emplvl(final_list);

	rpt.gross_estabs   = total_annual_estabs(final_list);
	rpt.max_estabs     = max_annual_estabs(final_list);
	rpt.min_estabs     = min_annual_estabs(final_list);

	// Print the report
	std::cout << rpt; 
}
