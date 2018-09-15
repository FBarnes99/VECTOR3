#pragma once
#ifndef _VECTOR3_H_
#define _VECTOR3_H_

#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;


template <class T> 
class Vec3 {
	T x;
	T y;
	T z;
   
public:
    
        // CONSTRUCTORS //

    
        
        Vec3(T vx, T vy, T vz) {
            x = vx;
            y = vy;
            z = vz;
        }

        // Copy constructor
        Vec3(const Vec3& V) {
            x = V.x;
            y = V.y;
            z = V.z;
        }

		Vec3() {

			x = 0;
			y = 0;
			z = 0;

		}

        // OPERATORS //
        
		//new vector with the values added//
        Vec3 operator+(const Vec3& v2) {
            return Vec3(x + v2.x, y + v2.y, z + v2.z);
        }
		//same vector with the values added//
        Vec3& operator+=(const Vec3& v2) {
            x += v2.x;
            y += v2.y;
            z += v2.z;
            return *this;
        }  
		
		//new vector with the values subtratced//
        Vec3 operator-(const Vec3 v2) {
            return Vec3(x - v2.x, y - v2.y, z - v2.z);
        }
		
		//same vector with the values subtratced//
        Vec3& operator-=(const Vec3 &v2) {
            x -= v2.x;
            y -= v2.y;
            z -= v2.z;
            return *this;
        }

		//assign vector//

		Vec3 operator=( Vec3& v2) {

			v2.x = this->x;
			v2.y = this->y;
			v2.z = this->z;
		}
		
		
		//compare vectors//

		bool operator==(const Vec3 v2) {
			if (x == v2.x&&
				y == v2.y&&
				z == v2.z) {
				return true;

			}
			return false ;
		}

      

       
        // Distance //
        float distance_to() {
            
			return sqrt(this->x ^ 2 + this->y ^ 2 + this->z ^ 2);
        }



        //zero //
        Vec3& set_zero() {
           
			this->x = 0;
			this->y = 0;
			this->z = 0;

			return *this;
        }

        //set the vector at zero //
		bool is_zero() {
			
			if (this->x == 0 &&
				this->y == 0 &&
				this->z == 0) {

				return true;
			}

			return false;
		}

        // normalize de vector //
        Vec3& normalize() {
           
			float ñe = distance_to();
            
			this->x = this->x / ñe;
			this->y = this->y / ñe;
			this->z = this->z / ñe;

			return *this;
        }
        
};









#endif