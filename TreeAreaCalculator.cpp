//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L1-4.exe                                          * 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose	        : This program takes the length of a field, the	    * 
//*	                  diameter of a fully grown tree and the distance   * 
//*	                  between each tree, and outputs the total number   *
//*                   of trees available to plant in the given area     *
//*                   and the total amount of space the trees take up   *
//*                                                                     * 
//* Inputs          : User enters the length of their yard in feet.     *
//                    User enters the radius of a fully grown tree in   *
//                    inches.                                           * 
//                    User enters the distance between the trees in     *
//                    feet.                                             *
//*                                                                     * 
//* Outputs         : The number of total trees that can be planted and *
//                    the total area of space occupied by trees is      *
//                    displayed.                                        * 
//*                                                                     * 
//* Calls           : No internal or external calls                     * 
//*                                                                     * 
//* Structure       : BEGIN                                             * 
//*                        Straight line code no sub-processes          * 
//*                   STOP                                              * 
//*                        End of Program                               * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Collaboration   : Got help from Prof. Urrutia with the math         *
//                    equation.                                         *
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//* 09/06/23      acantu 000.000.000 Initial release of program         * 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

int main() {

    double fieldLength, treeRadius, treeDistance, singleTreeArea, singleTreeSize, totalArea;
    int treeNum;

    cout << fixed << setprecision(2);

    cout << "Anthony Cantu \t L1-4 \t L1-4.exe" << endl;

    cout << "Enter the length of the yard in feet: ";
    cin >> fieldLength;

    cout << endl; //Line Break

    cout << "Enter the radius in inches of the fully grown tree: ";
    cin >> treeRadius;

    cout << endl; //Line Break

    cout << "Enter the distance in feet between fully grown trees: ";
    cin >> treeDistance;

    cout << endl; //Line Break

    // PIr^2 | r = Convert tree radius to feet
    singleTreeArea = PI * pow((treeRadius / 12), 2); //How much space a single tree takes up.
    
    //Find tree size
    singleTreeSize = (treeRadius * 2) / 12;

    //Field length devided by tree size + tree distance
    treeNum = fieldLength / (singleTreeSize + treeDistance); //Number of trees available to plant given the space.

    //Space a single tree takes up multiplied by number of trees available to plant
    totalArea = singleTreeArea * treeNum; //Total amount of space the trees take up.

    cout << endl; //Line Break

    cout << "The number of trees that can be planted: " << treeNum << endl;
    cout << "Total area occupied by the trees: " << totalArea;

    cout << endl; //Line Break

    char q;
    cout << "\nPress any key to Exit.";
    cin.ignore(2, '\n');
    cin.get(q);
    return 0;
}
