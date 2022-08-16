// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// intersections
List intersections(List nodes);
RcppExport SEXP _HiTMapper_intersections(SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(intersections(nodes));
    return rcpp_result_gen;
END_RCPP
}
// som
List som(arma::mat& data, int nx, int ny, int C, double lr);
RcppExport SEXP _HiTMapper_som(SEXP dataSEXP, SEXP nxSEXP, SEXP nySEXP, SEXP CSEXP, SEXP lrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type nx(nxSEXP);
    Rcpp::traits::input_parameter< int >::type ny(nySEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type lr(lrSEXP);
    rcpp_result_gen = Rcpp::wrap(som(data, nx, ny, C, lr));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HiTMapper_intersections", (DL_FUNC) &_HiTMapper_intersections, 1},
    {"_HiTMapper_som", (DL_FUNC) &_HiTMapper_som, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_HiTMapper(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
