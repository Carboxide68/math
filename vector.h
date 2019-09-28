
class vec2 {

public:

	vec2(float X, float Y) : x(X), y(Y){}

	float operator *(const vec2 &other) const {

		return x * other.x + y * other.y;

	}

	vec2 operator *(float other) const {

		return vec2(other * x, other * y);

	}

	vec2 operator +(const vec2 &other) const {

		return vec2(other.x + x, other.y + y);

	}

	vec2 operator -() const {

		return vec2(-x, -y);

	}

	vec2 operator -(const vec2 &other) const {

		return *this + -other;

	}

	float x;
	float y;

private:


};

class vec3 {

public:

	vec3(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

	float operator *(const vec3 &other) const {

		return x * other.x + y * other.y + z * other.z;

	}

	vec3 operator *(float other) const {

		return vec3(other * x, other * y, other * z);

	}

	vec3 operator /(const float other) const {

		return (*this) * (1/other);

	}

	vec3 operator +(const vec3 &other) const {

		return vec3(other.x + x, other.y + y, other.z + z);

	}

	vec3 operator -() const {

		return vec3(-x, -y, -z);

	}

	vec3 operator -(const vec3 &other) const {

		return (*this) + -other;

	}

	void operator +=(const vec3 &other) {

		x += other.x;
		y += other.y;
		z += other.z;

	}

	void operator -=(const vec3 &other) {

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