#pragma once

/*
* Valuelike behavior even though HasPtr has a pointer member:
* Each time we copy a HasPtr object, we make a new copy of the
* underlying int object to which ptr points.
*/
class HasPtr_2 {
public:
	// no point to passing a pointer if we're going to copy it anyway
	// store pointer to a copy of the object we're given
	HasPtr_2(const int &p, int i) : ptr(new int(p)), val(i) {}
	// copy members and increment the use count
	HasPtr_2(const HasPtr_2 &orig) :
		ptr(new int(*orig.ptr)), val(orig.val) { }
	HasPtr_2& operator=(const HasPtr_2&);
	~HasPtr_2() { delete ptr; }
	// accessors must change to fetch value from Ptr object
	int get_ptr_val() const { return *ptr; }
	int get_int() const { return val; }
	// change the appropriate data member
	void set_ptr(int *p) { ptr = p; }
	void set_int(int i) { val = i; }
	// return or change the value pointed to, so ok for const objects
	int *get_ptr() const { return ptr; }
	void set_ptr_val(int p) const { *ptr = p; }
private:
	int *ptr; // points to an int
	int val;
};

HasPtr_2& HasPtr_2::operator=(const HasPtr_2 &rhs)
{
	// Note: Every HasPtr is guaranteed to point at an actual int;
	// We know that ptr cannot be a zero pointer
	*ptr = *rhs.ptr; // copy the value pointed to
	val = rhs.val; // copy the int
	return *this;
}