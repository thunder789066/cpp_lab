// Christina Gerstner
// clgdtf@mail.umkc.edu
// 10/08/2019
// CS201L Lab 08

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "functions.h"
using namespace std;

int main() {
	vector<double> dvd;
	vector<double> music;
	vector<double> tv;
	string source, temp_dvd, temp_tv, temp_music;
	double amount, med_dvd, med_tv, med_music; // medium val
	double ttl_dvd, ttl_tv, ttl_music;	// total val
	double mean_dvd, mean_tv, mean_music;	// mean val
	
	ifstream fin("input.txt");
	ofstream fout("output.txt");

	while (fin.good()) {
		fin >> source >> amount;
		if (source == "DVD") {
			dvd.push_back(amount);
		}
		else if (source == "TV") {
			tv.push_back(amount);
		}
		else if (source == "MUSIC") {
			music.push_back(amount);
		}
	}

	//try {

	// gets medium, mean, total val for dvd, music, and tv
		med_dvd = get_medium(dvd);
		ttl_dvd = get_total(dvd);
		mean_dvd = get_mean(dvd);
		//if (dvd.size() == 0) {
			//throw out_of_range("nan");
		//}
		
		med_tv = get_medium(tv);
		ttl_tv = get_total(tv);
		mean_tv = get_mean(tv);
		//if (tv.size() == 0) {
		//	throw out_of_range("nan");
		//}

		med_music = get_medium(music);
		ttl_music = get_total(music);
		mean_music = get_mean(music);
		//if (music.size() == 0) {
		//	throw out_of_range("nan");
		//}

		sort_alg(dvd);
		sort_alg(music);
		sort_alg(tv);
	/*}
	catch (out_of_range& excpt1) {
		temp_dvd = excpt1.what();
	}
	catch (out_of_range& excpt2) {
		temp_tv = excpt2.what();
	}
	catch (out_of_range& excpt3) {
		temp_music = excpt3.what();
	}*/

	fout << "\tTotal\tMedium\tMean" << endl;
	fout << "DVD\t" << ttl_dvd << "\t" << med_dvd << "\t" << mean_dvd << endl;
	fout << "TV\t" << ttl_tv << "\t" << med_tv << "\t" << mean_tv << endl;
	fout << "MUSIC\t" << ttl_music << "\t" << med_music << "\t" << mean_music << endl;

	// try & catch -> didnt work

	return 0;
}