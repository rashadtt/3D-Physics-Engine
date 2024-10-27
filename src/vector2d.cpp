#include "vector2d.h"

//Constructors
Vector2D::Vector2D() : x(0), y(0) {}
Vector2D::Vector2D(float x, float y) : x(x), y(y) {}

Vector2D Vector2D::operator+(const Vector2D& other) const{
	return Vector2D(x + other.x, y + other.y);
}	

Vector2D Vector2D::operator-(const Vector2D& other) const{
	return Vector2D(x - other.x, y - other.y);
}

Vector2D Vector2D::operator*(float scalar) const{
	return Vector2D(x * scalar, y * scalar);
}

// Dot Product
float Vector2D::dot(const Vector2D& other) const{
	return (x * other.x + y * other.y);
}

// Magnitude and Normalization
float Vector2D::magnitude() const{
	return sqrt (x * x + y * y);
}
Vector2D Vector2D::normalize() const{
	float magnitude = this->magnitude();
	return Vector2D(x/magnitude, y/magnitude);
}

//Angle Between
float Vector2D::angleBetween(const Vector2D& other) const{
	float dotProduct = this->dot(other);
	float thisMagnitude = this->magnitude();
	float otherMagnitude = other.magnitude();

	float cosTheta = dotProduct / (thisMagnitude * otherMagnitude);
        cosTheta = std::max(-1.0f, std::min(1.0f, cosTheta));  // Clamp to [-1, 1]

        // Calculate arccos in radians
        float angleInRadians = std::acos(cosTheta);

        // Optionally, convert radians to degrees
        float angleInDegrees = angleInRadians * (180.0f / M_PI);

	return angleInDegrees;
}


std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}
