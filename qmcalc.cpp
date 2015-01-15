/*-
 * Copyright 2014 Diomidis Spinellis
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#include <cstring>
#include <ostream>

#include "CMetricsCalculator.h"

/* Calculate and print C metrics for the standard input */
int
main(int argc, char *argv[])
{
	CMetricsCalculator cm;

	cm.calculate_metrics();
	std::cout << cm.get_metrics();
	if (argc != 2 || strcmp(argv[1], "-n"))
		std::cout << std::endl;
	return 0;
}
