#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Loan {
private:
	string ID;
	double Notional = 0.0;
	double APR = 0.0;
	double Rank = 0.0;

public:
	double getNotional() const {
		return Notional;
	}

	double getAPR() const {
		return APR;
	}

	double getRank() const {
		return Rank;
	}

	string getID() const {
		return ID;
	}
};

bool operator<(Loan& const l1, Loan& const l2) {

	return (l1.getNotional() * l1.getRank()) > (l2.getNotional() * l2.getRank());
}


int main()
{



	return 0;
}


