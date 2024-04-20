#include<iostream>

#include<cmath>

#include<vector>

 

double areaSwitchCase(int ch, std::vector<double> a) {

  double area = 0.0;

 

  switch(ch){

 

        case 1: {

          double pi = M_PI;

          area = pi * (a[0] * a[0]);

          break;

        }

 

        case 2: {

          area = a[0] * a[1];

          break;

        }

        default:

          std::cout<< "Incvalid choice\n";

        }

        return area;

}