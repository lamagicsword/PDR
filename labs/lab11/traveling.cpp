//Yujian Li(yl7kd) traveling.cpp 04/26/16 Section 102

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

#include "middleearth.h"
 
float computeDistance (MiddleEarth &me, string start, vector<string> dests);
void printRoute (string start, vector<string> dests);

int main (int argc, char **argv) {
    // check the number of parameters
    if ( argc != 6 ) {
        cout << "Usage: " << argv[0] << " <world_height> <world_width> "
             << "<num_cities> <random_seed> <cities_to_visit>" << endl;
        exit(0);
    }
    // we'll assume the parameters are all well-formed
    int width, height, num_cities, rand_seed, cities_to_visit;
    sscanf (argv[1], "%d", &width);
    sscanf (argv[2], "%d", &height);
    sscanf (argv[3], "%d", &num_cities);
    sscanf (argv[4], "%d", &rand_seed);
    sscanf (argv[5], "%d", &cities_to_visit);
    // Create the world, and select your itinerary
    MiddleEarth me(width, height, num_cities, rand_seed);
    vector<string> dests = me.getItinerary(cities_to_visit);
	vector<string> temp = dests;
    // YOUR CODE HERE
    // me.print();
	string start = dests[0];
	dests.erase(dests.begin());
	sort(dests.begin(), dests.end());
	float dis1 = computeDistance(me,start,dests);
	while(next_permutation(dests.begin(),dests.end())){
		float com = computeDistance(me,start,dests);
		if(dis1>com){
			dis1 = com;
		   	//dests = temp;
			temp = dests;
		}
	}
	cout<<"Minimum path has distance "<<dis1<<": ";
	printRoute(start, temp);
	cout<<endl;
	//me.printTable();
    return 0;
}

// This method will compute the full distance of the cycle that starts
// at the 'start' parameter, goes to each of the cities in the dests
// vector IN ORDER, and ends back at the 'start' parameter.
/**
 * @brief compute the round trip distance from the start city of a vector
 *
 * Using Middleearth object, a start city string, and a vector of strings that lists the city
 * the function shall return a float the represent the distance it take to travel from the 
 * starting point through these cities and comes back.
 * @param &me a MiddleEarth object
 * @param start the start city 
 * @param dests a vector that contains the cities traveled.
 */
float computeDistance (MiddleEarth &me, string start, vector<string> dests) {
    // YOUR CODE HERE
	float dis = 0;
	dis+=me.getDistance(start,dests[0]);
	for(int i = 0; i<dests.size()-1;i++){
		dis+=me.getDistance(dests[i],dests[i+1]);
	}
	dis+=me.getDistance(dests[dests.size()-1],start);
	return dis;
}

// This method will print the entire route, starting and ending at the
// 'start' parameter.  The output should be of the form:
// Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebor
/**
 *@brief it shall print the total route 
 *Given a string parameter as the starting point of the trip and a vector that
 *includes all the cities on its way back to the starting point. It will loop 
 *through the vector and prints out its route.
 *@param start the starting point city
 *@param dests a vector full of cities that it travelled. 
 */

void printRoute (string start, vector<string> dests) {
    // YOUR CODE HERE			
	cout<<start<<" -> ";
	for(int i=0;i<dests.size();i++){
		cout<<dests[i]<<" -> ";
	}
	cout<<start<<endl;
}
