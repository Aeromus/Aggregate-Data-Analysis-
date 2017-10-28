#include <iostream>
#include <dirent.h>
#include "List.hpp"
#include "ListStats.hpp"
#include "Report.hpp"
#include "AllFilesInDirectory.hpp"
#include "ListSort.hpp"



int main(void) {
	// Read in all employment lists

	Employment* final_list = AllFilesInDirectory("data");

	// Append them into one list
	

	
	
	// Compute the statistics
std::cout << list_length(final_list) <<std::endl;
	// Fill out the report
	
	Report rpt;

	rpt.num_areas      = list_length(final_list);

	rpt.gross_wages    = total_annual_wages(final_list);
	rpt.min_wages      = min_annual_wages(final_list);
	rpt.max_wages      = max_annual_wages(final_list);
	rpt.stdev_wages    = stdev_annual_wages(final_list);
	//SORT THE LIST HERE
	final_list         =  listsort_employment_by_total_annual_wages(final_list);
	rpt.unique_wages   = unique_annual_wages(final_list);
	rpt.distinct_wages = distinct_annual_wages(final_list);


	rpt.gross_emplvl   = total_annual_emplvl(final_list);
	rpt.max_emplvl     = max_annual_emplvl(final_list);
	rpt.min_emplvl     = min_annual_emplvl(final_list);
	//SORT LIST HERE
	final_list		   = listsort_employment_by_annual_avg_emplvl(final_list);
	rpt.unique_emplvl  = unique_avg_emplvl(final_list);
	rpt.distinct_emplvl= distinct_avg_emp_lvl(final_list);

	rpt.gross_estabs   = total_annual_estabs(final_list);
	rpt.max_estabs     = max_annual_estabs(final_list);
	rpt.min_estabs     = min_annual_estabs(final_list);
	//SORT LIST HERE
	final_list         = listsort_employment_by_annual_avg_estabs(final_list);
	rpt.unique_estabs  = unique_avg_estabs(final_list);
	rpt.distinct_estabs= distinct_avg_estabs(final_list);
	// Print the report	
	std::cout << rpt; 
	
	

	cleanup_list(final_list);
	
}
