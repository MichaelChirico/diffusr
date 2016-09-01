// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/diffusr.h"
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// stoch_col_norm_
Eigen::MatrixXd stoch_col_norm_(const Eigen::MatrixXd& W);
static SEXP diffusr_stoch_col_norm__try(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type W(WSEXP);
    __result = Rcpp::wrap(stoch_col_norm_(W));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP diffusr_stoch_col_norm_(SEXP WSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(diffusr_stoch_col_norm__try(WSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// mrwr_
Eigen::VectorXd mrwr_(const Eigen::VectorXd& p0, const Eigen::MatrixXd& W, const double r);
static SEXP diffusr_mrwr__try(SEXP p0SEXP, SEXP WSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    __result = Rcpp::wrap(mrwr_(p0, W, r));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP diffusr_mrwr_(SEXP p0SEXP, SEXP WSEXP, SEXP rSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(diffusr_mrwr__try(p0SEXP, WSEXP, rSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// neighbors_
Rcpp::List neighbors_(const Rcpp::IntegerVector& node_idxs, const Rcpp::NumericMatrix& W, const int k, const bool use_edge_weights);
static SEXP diffusr_neighbors__try(SEXP node_idxsSEXP, SEXP WSEXP, SEXP kSEXP, SEXP use_edge_weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type node_idxs(node_idxsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const bool >::type use_edge_weights(use_edge_weightsSEXP);
    __result = Rcpp::wrap(neighbors_(node_idxs, W, k, use_edge_weights));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP diffusr_neighbors_(SEXP node_idxsSEXP, SEXP WSEXP, SEXP kSEXP, SEXP use_edge_weightsSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(diffusr_neighbors__try(node_idxsSEXP, WSEXP, kSEXP, use_edge_weightsSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}

// validate (ensure exported C++ functions exist before calling them)
static int diffusr_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Eigen::MatrixXd(*.stoch_col_norm_cpp)(const Eigen::MatrixXd&)");
        signatures.insert("Eigen::VectorXd(*.mrwr_cpp)(const Eigen::VectorXd&,const Eigen::MatrixXd&,const double)");
        signatures.insert("Rcpp::List(*.neighbors_cpp)(const Rcpp::IntegerVector&,const Rcpp::NumericMatrix&,const int,const bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP diffusr_RcppExport_registerCCallable() { 
    R_RegisterCCallable("diffusr", "diffusr_.stoch_col_norm_cpp", (DL_FUNC)diffusr_stoch_col_norm__try);
    R_RegisterCCallable("diffusr", "diffusr_.mrwr_cpp", (DL_FUNC)diffusr_mrwr__try);
    R_RegisterCCallable("diffusr", "diffusr_.neighbors_cpp", (DL_FUNC)diffusr_neighbors__try);
    R_RegisterCCallable("diffusr", "diffusr_RcppExport_validate", (DL_FUNC)diffusr_RcppExport_validate);
    return R_NilValue;
}
