#include <string>
#ifndef __FinancialSamples__BondCalculator__
#define __FinancialSamples__BondCalculator__

class BondCalculator {
public:
	BondCalculator(const std::string institution, int numPeriods, double principle, double couponValue);
	BondCalculator(const BondCalculator& v);
	~BondCalculator();

	BondCalculator& operator=(const BondCalculator& v);

	double interestRate();
private: std::string m_institution;
	   double m_principal;
	   double m_coupon;
	   int m_numPeriods;


};
#endif /*#ifndef __FinancialSamples__BondCalculator__)*/
