
#ifndef HVECTOR_H
#define HVECTOR_H
template <class T>
class hvector {
	T * p;
	T * last;
	T * first;

public:
	int count;
	hvector();
	void add(T toadd);
	T pop();
	T operator[](int x);

private:
	void resize_hvector();
	int size_limit = 100;
};

#endif