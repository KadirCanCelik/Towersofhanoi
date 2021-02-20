// functions of tower of hanoi algorithm

#include <iostream>

#include <cmath>

#include "hanoi.h"  //our library

using std::cout;

using std::cin;

using std::endl;

void tower::secim(){ // function to get  rods names and disc count
	
	
	
	int disk;   //variable for count of discs
	
	char start,temp,finish;   //rods variables
	
	cout<<"Enter characters for rod names (example = a , b , c)"<<endl;
	
	cout<<"Enter the character for the starting rod: ";
	
	cin>>start;
	
	cout<<"Enter the character for the temporary rod: ";
	
	cin>>temp;
	
	cout<<"Enter the character for target rod: ";
	
	cin>>finish;
	
	
	cout<<"Enter the count of discs:";
	cin>>disk;
	
	cout<<"NOTE: smallest disc is number 1 and "<<" largest disc is number "<<disk<<"\n"<<endl;
	
	
	hanoi_tower(disk,start,temp,finish);  // call the hanoi_tower function 
	
	
	
	
}


void tower::hanoi_tower(int disk,char baslangic, char ara,char hedef){  // algorithm for tower of hanoi
	
	
	
	
	if(disk==1){   //if disk == 1 the game is finish
	
		cout<<"Put the disc number "<<disk<<" from "<<baslangic<<" rod to "<<hedef<<" rod"<<endl;
		return;
	}
	
	hanoi_tower(disk-1,baslangic,hedef,ara);       //number of discs is reduced by 1 and the function is recalled by replacing the temp and finish rods.                                

	cout<<"Put the disc number "<<disk<<" from "<<baslangic<<" rod to "<<hedef<<" rod "<<endl;
	
	hanoi_tower(disk-1,ara,baslangic,hedef);       //number of discs is reduced by 1 and the function is recalled by replacing the temp and start rods. 
	
	
}

