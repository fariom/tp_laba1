#include "Base.h"

class Base {
public:
	Base();
	Base(int price);
	Base(Base* orig);
	~Base();
	////////////////////////////////
	virtual void print() = 0;
	virtual void setProduct() = 0;

	void setPrice(int new_price) {
		price = new_price;
	};
	int getPrice() {
		return price;
	};
private:
	int price;
};