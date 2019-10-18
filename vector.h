
class Vec2 {

public:

	Vec2(float X, float Y) : x(X), y(Y){}

	float operator *(const Vec2 &other) const {

		return x * other.x + y * other.y;

	}

	Vec2 operator *(float other) const {

		return Vec2(other * x, other * y);

	}

	Vec2 operator +(const vec2 &other) const {

		return Vec2(other.x + x, other.y + y);

	}

	Vec2 operator -() const {

		return Vec2(-x, -y);

	}

	Vec2 operator -(const vec2 &other) const {

		return *this + -other;

	}

	float x;
	float y;

private:


};

class Vec3 {

public:

	Vec3(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

	float operator *(const Vec3 &other) const {

		return x * other.x + y * other.y + z * other.z;

	}

	Vec3 operator *(float other) const {

		return Vec3(other * x, other * y, other * z);

	}

	Vec3 operator /(const float other) const {

		return (*this) * (1/other);

	}

	Vec3 operator +(const Vec3 &other) const {

		return Vec3(other.x + x, other.y + y, other.z + z);

	}

	Vec3 operator -() const {

		return Vec3(-x, -y, -z);

	}

	Vec3 operator -(const Vec3 &other) const {

		return (*this) + -other;

	}

	void operator +=(const Vec3 &other) {

		x += other.x;
		y += other.y;
		z += other.z;

	}

	void operator -=(const Vec3 &other) {

		(*this) += -other;
	
	}

	void operator *=(const float other) {

		x *= other;
		y *= other;
		z *= other;

	}

	void operator /=(const float other) {

		(*this) *= (1/other);

	}

	float x;
	float y;
	float z;

private:

};

class vec4 {

public:
	vec4() {

	}

private:

};
