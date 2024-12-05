#include "Span.hpp"

Span::Span(unsigned int n): m_size(n){}

Span::Span(Span const& other):m_size(other.m_size), m_nb(other.m_nb)
{}

Span& Span::operator=(Span const &rhs)
{
	this->m_size = rhs.m_size;
	this->m_nb = rhs.m_nb;
	return(*this);
}

void Span::addNumber(int n)
{
	if(m_nb.size() >= m_size)
		throw SpanFullException();
	else
		m_nb.push_back(n);
}

unsigned int Span::shortestSpan() const
{
	if(m_nb.size() == 0)
		throw SpanEmptyException();
	else if(m_nb.size() == 1)
		throw SpanOneException();
	std::vector<int> tab = m_nb;
	std::sort(tab.begin(), tab.end());
	int shortest = std::numeric_limits<int>::max();
	size_t i = 1;
	while( ++i < m_nb.size())
	{
		int diff = tab[i] - tab[i - 1];
		if(diff < shortest)
			shortest = diff;
	}
	return(shortest);
}

unsigned int Span::longestSpan() const
{
	if(m_nb.size() == 0)
		throw SpanEmptyException();
	else if(m_nb.size() == 1)
		throw SpanOneException();
	int minValue = *std::min_element(m_nb.begin(), m_nb.end());
	int maxValue = *std::max_element(m_nb.begin(), m_nb.end());
	return(maxValue - minValue);
}

void Span::addNumberBis(unsigned int n)
{
	if(m_nb.size() >= m_size)
		throw SpanFullException();
    if (n + m_nb.size() > m_size)
        throw SpanFullException();
    for (unsigned int i = 0; i < n; i++)
        m_nb.push_back(i + 1); 
}

std::ostream& operator<<(std::ostream& os, const Span& sp) {
    os << "[ ";
    for (size_t i = 0; i < sp.m_nb.size(); i++) {
        os << sp.m_nb[i];
        if (i != sp.m_nb.size() - 1) {
            os << ", ";
        }
    }
    os << " ]";
    return os;
}