// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// stoch_col_norm_
Eigen::MatrixXd stoch_col_norm_(const Eigen::MatrixXd& W);
RcppExport SEXP diffusr_stoch_col_norm_(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type W(WSEXP);
    __result = Rcpp::wrap(stoch_col_norm_(W));
    return __result;
END_RCPP
}
// mrwr_
Eigen::VectorXd mrwr_(const Eigen::VectorXd& p0, const Eigen::MatrixXd& W, const double r);
RcppExport SEXP diffusr_mrwr_(SEXP p0SEXP, SEXP WSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    __result = Rcpp::wrap(mrwr_(p0, W, r));
    return __result;
END_RCPP
}
// neighbors_
Rcpp::List neighbors_(const Rcpp::IntegerVector& node_idxs, const Rcpp::NumericMatrix& W, const int k, const bool use_edge_weights);
RcppExport SEXP diffusr_neighbors_(SEXP node_idxsSEXP, SEXP WSEXP, SEXP kSEXP, SEXP use_edge_weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type node_idxs(node_idxsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const bool >::type use_edge_weights(use_edge_weightsSEXP);
    __result = Rcpp::wrap(neighbors_(node_idxs, W, k, use_edge_weights));
    return __result;
END_RCPP
}
