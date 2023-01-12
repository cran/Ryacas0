// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// yacas_init_force
void yacas_init_force(std::string path);
RcppExport SEXP _Ryacas0_yacas_init_force(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    yacas_init_force(path);
    return R_NilValue;
END_RCPP
}
// yacas_evaluate
std::vector<std::string> yacas_evaluate(std::string expr);
RcppExport SEXP _Ryacas0_yacas_evaluate(SEXP exprSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type expr(exprSEXP);
    rcpp_result_gen = Rcpp::wrap(yacas_evaluate(expr));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Ryacas0_yacas_init_force", (DL_FUNC) &_Ryacas0_yacas_init_force, 1},
    {"_Ryacas0_yacas_evaluate", (DL_FUNC) &_Ryacas0_yacas_evaluate, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_Ryacas0(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
