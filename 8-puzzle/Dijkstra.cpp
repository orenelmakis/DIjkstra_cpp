#include <iostream>
#include <limits>
#include <vector>
#include "Dijkstra.h"
#include <bits/stdc++.h>
// #include "../matplotlib-cpp/matplotlibcpp.h"



using namespace std;
// namespace plt = matplotlibcpp;

Dijkstra::Dijkstra(double min_x, double min_y, double max_x,double max_y
                        ,double x_width, double y_width, double resolution, double robot_size){

    this->MinX = min_x;
    this->MinY = min_y;
    this->MaxX = max_x;
    this->MaxY = max_y;
    this-> XWidth = x_width;
    this-> YWidth = y_width;
    this-> Resolution = resolution;
    this-> RobotSize = robot_size;

};

void Dijkstra::ObsMapCreation(vector<vector<double>> ObsMap)
{
    int Rows = (int)(this->YWidth/this->Resolution);
    int Columns = (int)(this->XWidth/this->Resolution);
    this->ObsMap.resize(Rows);
    for (size_t i = 0; i < Rows; i++)
        {
            this->ObsMap[i].resize(Columns);
        }
    for (size_t obs = 0; obs < ObsMap.size(); obs++)
    {
        int RowInitIndex = (int)((ObsMap[obs][1]-(ObsMap[obs][2])/2.0)/this->Resolution);
        int ColumnsInitIndex = (int)((ObsMap[obs][0]-(ObsMap[obs][2]/2.0))/this->Resolution);
        int ObsSize = (int)(ObsMap[obs][2]/this->Resolution);
        cout << "Rows index size: " << RowInitIndex << endl; 
        cout << "Columns index size: " << ColumnsInitIndex << endl;

        for (size_t i = RowInitIndex; i < RowInitIndex+ObsSize; i++)
        {
            for (size_t j = ColumnsInitIndex; j < ColumnsInitIndex+ObsSize; j++)
            {
                this->ObsMap[i][j] = true;
                
            }
            
        }
    }

    

};

double Dijkstra::Index2Pos(int index, double min_pos){
    double pos ;
    pos = index*this->Resolution + min_pos;
    return pos;

};





int main(){
    Dijkstra *dij = new Dijkstra(0,0,30,30,5,5,0.5,5);
    // cout << dij->MaxY << endl;
    vector<vector<double>> ObsMap;
    vector<double> value;
    value.push_back(2);
    value.push_back(2);
    value.push_back(2);
    ObsMap.push_back(value);
    cout << ObsMap[0][2] << endl;
    dij->ObsMapCreation(ObsMap);

    return 0;
};