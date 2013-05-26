#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int rnd(int max) {
	return (rand() % max + 1);
}

int main(int argc, char* argv[]) {
	srand(time(0));
	
	struct tm rndtime;
	
	rndtime.tm_year = rnd(2100);
	rndtime.tm_mon = rnd(12);
	rndtime.tm_mday = rnd(30);
	rndtime.tm_hour = rnd(24);
	rndtime.tm_min = rnd(60);
	rndtime.tm_sec = rnd(60);
	
	cout << "Year: " << rndtime.tm_year << " Month: " << rndtime.tm_mon << " Day: " << rndtime.tm_mday << " Hour: " << rndtime.tm_hour << " Minutes: " << rndtime.tm_min << " Seconds: " << rndtime.tm_sec << endl;
	
	time_t rndtimestamp;
	rndtimestamp = mktime(&rndtime);
	cout << rndtimestamp << endl;
	
	return 0;
}
