/* 
 * File:   imcio.h
 * Author: ruehle
 *
 * Created on September 14, 2009, 5:31 PM
 */

#ifndef _IMCIO_H
#define	_IMCIO_H

#include <string>
#include <list>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/symmetric.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <tools/rangeparser.h>

namespace ub = boost::numeric::ublas;
using namespace std;

void imcio_write_dS(string file, ub::vector<double> &r, ub::vector<double> &dS);
void imcio_write_matrix(string file, ub::symmetric_matrix<double> gmc);
void imcio_write_index(string file, vector<string> &names, vector<RangeParser> &ranges);

void imcio_read_dS(string file, ub::vector<double> &r, ub::vector<double> &dS);
void imcio_read_matrix(string file, ub::symmetric_matrix<double> gmc);
void imcio_read_index(string file, vector<string> &names, vector<RangeParser> &ranges);

#endif	/* _IMCIO_H */
