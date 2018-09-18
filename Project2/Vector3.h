#pragma once
#ifndef _VECTOR3_H_
#define _VECTOR3_H_




template <class T> 
class Vec3 {
	T x;
	T y;
	T z;
   
public:
    
        // CONSTRUCTORS //

    
        
        Vec3(const T& vx, const T& vy, const T& vz): x(vx),
		y (vy),
		z (vz) {}

        // Copy constructor
        Vec3(const Vec3& V) : x(V.x), y (V.y), z(V.z) {
        }

		Vec3() {}

        // OPERATORS //
        
		//new vector with the values added//
        Vec3 operator+(const Vec3& v2)const {
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
        Vec3 operator-(const Vec3& v2)const {
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

		void operator=( Vec3& v2) {

			x = v2.x;
			y = v2.y;
			z = v2.z;
		}
		
		
		//compare vectors//

		bool operator==(const Vec3 v2) const {
			return (x == v2.x &&
					y == v2.y &&
					z == v2.z) 
		
		}

      

       
        // Module //
        double Module() {
            
			return sqrt(x ^ 2 + y ^ 2 + z ^ 2);
        }



        //zero //
        Vec3& set_zero() {
           
			this->x = 0;
			this->y = 0;
			this->z = 0;

			return *this;
        }

        //set the vector at zero //
		bool is_zero()const {

			return (this->x == 0 &&
				this->y == 0 &&
				this->z == 0)
		}

		float distance_to(Vec3* V2) const {
			float dist;

			float dx = V2->x - x;
			float dy = V2->y - y;
			float dz = V2->z - z; ç

				distance = sqrt(dx ^ 2 + dy ^ 2 + dz ^ 2);
			return abs(distance);
		}

        // normalize de vector //
        Vec3& normalize() {
           
			double ñe = Module();
            
			this->x = this->x / ñe;
			this->y = this->y / ñe;
			this->z = this->z / ñe;

			return *this;
        }
        
};









#endif