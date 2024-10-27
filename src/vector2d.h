#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <cmath>

class Vector2D {
public:
	// Member variables
	float x, y;
	
	// Constructors
	Vector2D();
	Vector2D(float x, float y);

	// Basic Operations
	Vector2D operator+(const Vector2D& other) const;
	Vector2D operator-(const Vector2D& other) const;
	Vector2D operator*(float scalar) const;

	// Dot Product
	float dot(const Vector2D& other) const;

	// Magnitude and Normalization
	float magnitude() const;
	Vector2D normalize() const;

	//Angle Between
	float angleBetween(const Vector2D& other) const;

	// Friend function for output
	friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);
};


#endif
