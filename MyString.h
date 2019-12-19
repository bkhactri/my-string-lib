#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;
class MyString
{
private:
	char* _p;
	size_t _length;
	size_t _capacity;

public: //Constructor and destroyer and operator =
	static const size_t npos = -1;
	MyString();
	MyString(const MyString& str);
	MyString(const MyString& str, size_t pos, size_t npos);
	MyString(const char* s);
	MyString(const char* str, size_t n);
	MyString(size_t n, char c);
	~MyString();
	MyString& operator=(const MyString& s);
	MyString& operator=(const char* s);
	MyString& operator=(char c);


public: //Capacity:
	size_t size() const;
	size_t length() const;
	size_t max_size() const;
	void resize(size_t n);
	void resize(size_t n, char c);
	size_t capacity() const;
	void reserve(size_t n = 0);
	void clear();
	bool empty() const;
	void shrink_to_fit();


public: //Element access
	char& operator[](size_t pos);
	const char& operator[](size_t pos) const;

	char& at(size_t pos);
	const char& at(size_t pos) const;
	char& back();
	const char& back() const;
	char& front();
	const char& front() const;


public: //Modifiers
	MyString& operator+= (const MyString& str);
	MyString& operator+= (const char* s);
	MyString& operator+= (char c);

	MyString& append(const MyString& str);
	MyString& append(const MyString& str, size_t subpos, size_t sublen);
	MyString& append(const char* s);
	MyString& append(const char* s, size_t n);
	MyString& append(size_t n, char c);

	void push_back(char c);

	MyString& assign(const MyString& str);
	MyString& assign(const MyString& str, size_t subpos, size_t sublen);
	MyString& assign(const char* s);
	MyString& assign(const char* s, size_t n);
	MyString& assign(size_t n, char c);

	MyString& insert(size_t pos, const MyString& str);
	MyString& insert(size_t pos, const MyString& str, size_t subpos, size_t sublen);
	MyString& insert(size_t pos, const char* s);
	MyString& insert(size_t pos, const char* s, size_t n);
	MyString& insert(size_t pos, size_t n, char c);

	MyString& erase(size_t pos = 0, size_t len = npos);

	MyString& replace(size_t pos, size_t len, const MyString& str);
	MyString& replace(size_t pos, size_t len, const MyString& str, size_t subpos, size_t sublen);
	MyString& replace(size_t pos, size_t len, const char* s);
	MyString& replace(size_t pos, size_t len, const char* s, size_t n);
	MyString& replace(size_t pos, size_t len, size_t n, char c);

	void swap(MyString& str);

	void pop_back();


public: //String operations
	const char* c_str() const;
	const char* data() const;

	allocator<char>get_allocator() const;

	size_t copy(char* s, size_t len, size_t pos = 0) const;

	size_t find(const MyString& str, size_t pos = 0) const;
	size_t find(const char* s, size_t pos = 0) const;
	size_t find(const char* s, size_t pos, size_t n) const;
	size_t find(char c, size_t pos = 0) const;

	size_t rfind(const MyString& str, size_t pos = npos) const;
	size_t rfind(const char* s, size_t pos = npos) const;
	size_t rfind(const char* s, size_t pos, size_t n) const;
	size_t rfind(char c, size_t pos = npos) const;


	MyString substr(size_t pos = 0, size_t len = npos) const;

	int compare(const MyString& str) const;
	int compare(size_t pos, size_t len, const MyString& str) const;
	int compare(size_t pos, size_t len, const MyString& str, size_t subpos, size_t sublen) const;
	int compare(const char* s) const;
	int compare(size_t pos, size_t len, const char* s) const;
	int compare(size_t pos, size_t len, const char* s, size_t n) const;
	


public: //Non-member function overloads
	friend MyString operator+ (const MyString& lhs, const MyString& rhs);
	friend MyString operator+ (const MyString& lhs, const char* rhs);
	friend MyString operator+ (const char* lhs, const MyString& rhs);
	friend MyString operator+ (const MyString& lhs, char rhs);
	friend MyString operator+ (char lhs, const MyString& rhs);

	friend bool operator== (const MyString& lhs, const MyString& rhs);
	friend bool operator== (const char* lhs, const MyString& rhs);
	friend bool operator== (const MyString& lhs, const char* rhs);
	friend bool operator!= (const MyString& lhs, const MyString& rhs);
	friend bool operator!= (const char* lhs, const MyString& rhs);
	friend bool operator!= (const MyString& lhs, const char* rhs);
	friend bool operator<  (const MyString& lhs, const MyString& rhs);
	friend bool operator<  (const char* lhs, const MyString& rhs);
	friend bool operator<  (const MyString& lhs, const char* rhs);
	friend bool operator<=  (const MyString& lhs, const MyString& rhs);
	friend bool operator<=  (const char* lhs, const MyString& rhs);
	friend bool operator<=  (const MyString& lhs, const char* rhs);
	friend bool operator>  (const MyString& lhs, const MyString& rhs);
	friend bool operator>  (const char* lhs, const MyString& rhs);
	friend bool operator>  (const MyString& lhs, const char* rhs);
	friend bool operator>=  (const MyString& lhs, const MyString& rhs);
	friend bool operator>=  (const char* lhs, const MyString& rhs);
	friend bool operator>=  (const MyString& lhs, const char* rhs);

	friend void swap(MyString& x, MyString& y);

	friend istream& operator>>(istream& is, MyString& str);
	friend ostream& operator<<(ostream& os, const  MyString& str);

	friend istream& getline(istream& is, MyString& str, char delim);
	friend istream& getline(istream& is, MyString& str);
};

