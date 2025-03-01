// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// stra_sampling_cpp
arma::uvec stra_sampling_cpp(int size, int prop);
RcppExport SEXP _surtvep_stra_sampling_cpp(SEXP sizeSEXP, SEXP propSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type prop(propSEXP);
    rcpp_result_gen = Rcpp::wrap(stra_sampling_cpp(size, prop));
    return rcpp_result_gen;
END_RCPP
}
// surtiver_fixtra_fit_penalizestop
List surtiver_fixtra_fit_penalizestop(const arma::vec& event, const IntegerVector& count_strata, const arma::mat& Z_tv, const arma::mat& B_spline, const arma::mat& theta_init, const arma::mat& Z_ti, const arma::vec& beta_ti_init, const arma::vec& lambda_spline, const arma::mat& SmoothMatrix, const arma::vec& effectsize, const std::string& SplineType, const std::string& method, const double lambda, const double& factor, const bool& parallel, const unsigned int& threads, const double& tol, const unsigned int& iter_max, const double& s, const double& t, const std::string& btr, const std::string& stop, const bool& TIC_prox, const bool& fixedstep, const bool& difflambda, const bool& ICLastOnly);
RcppExport SEXP _surtvep_surtiver_fixtra_fit_penalizestop(SEXP eventSEXP, SEXP count_strataSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP theta_initSEXP, SEXP Z_tiSEXP, SEXP beta_ti_initSEXP, SEXP lambda_splineSEXP, SEXP SmoothMatrixSEXP, SEXP effectsizeSEXP, SEXP SplineTypeSEXP, SEXP methodSEXP, SEXP lambdaSEXP, SEXP factorSEXP, SEXP parallelSEXP, SEXP threadsSEXP, SEXP tolSEXP, SEXP iter_maxSEXP, SEXP sSEXP, SEXP tSEXP, SEXP btrSEXP, SEXP stopSEXP, SEXP TIC_proxSEXP, SEXP fixedstepSEXP, SEXP difflambdaSEXP, SEXP ICLastOnlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type count_strata(count_strataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type theta_init(theta_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_ti(Z_tiSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta_ti_init(beta_ti_initSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda_spline(lambda_splineSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SmoothMatrix(SmoothMatrixSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type effectsize(effectsizeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type SplineType(SplineTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type iter_max(iter_maxSEXP);
    Rcpp::traits::input_parameter< const double& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const double& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type btr(btrSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< const bool& >::type TIC_prox(TIC_proxSEXP);
    Rcpp::traits::input_parameter< const bool& >::type fixedstep(fixedstepSEXP);
    Rcpp::traits::input_parameter< const bool& >::type difflambda(difflambdaSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ICLastOnly(ICLastOnlySEXP);
    rcpp_result_gen = Rcpp::wrap(surtiver_fixtra_fit_penalizestop(event, count_strata, Z_tv, B_spline, theta_init, Z_ti, beta_ti_init, lambda_spline, SmoothMatrix, effectsize, SplineType, method, lambda, factor, parallel, threads, tol, iter_max, s, t, btr, stop, TIC_prox, fixedstep, difflambda, ICLastOnly));
    return rcpp_result_gen;
END_RCPP
}
// surtiver_fixtra_fit_penalizestop_bresties
List surtiver_fixtra_fit_penalizestop_bresties(const arma::vec& event, const arma::vec& time, const IntegerVector& count_strata, const arma::mat& Z_tv, const arma::mat& B_spline, const arma::mat& theta_init, const arma::mat& Z_ti, const arma::vec& beta_ti_init, const arma::vec& lambda_spline, const arma::mat& SmoothMatrix, const arma::vec& effectsize, const std::string& SplineType, const std::string& method, const double& lambda, const double& factor, const bool& parallel, const unsigned int& threads, const double& tol, const unsigned int& iter_max, const double& s, const double& t, const std::string& btr, const std::string& stop, const bool& TIC_prox, const bool& fixedstep, const bool& difflambda, const bool& ICLastOnly);
RcppExport SEXP _surtvep_surtiver_fixtra_fit_penalizestop_bresties(SEXP eventSEXP, SEXP timeSEXP, SEXP count_strataSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP theta_initSEXP, SEXP Z_tiSEXP, SEXP beta_ti_initSEXP, SEXP lambda_splineSEXP, SEXP SmoothMatrixSEXP, SEXP effectsizeSEXP, SEXP SplineTypeSEXP, SEXP methodSEXP, SEXP lambdaSEXP, SEXP factorSEXP, SEXP parallelSEXP, SEXP threadsSEXP, SEXP tolSEXP, SEXP iter_maxSEXP, SEXP sSEXP, SEXP tSEXP, SEXP btrSEXP, SEXP stopSEXP, SEXP TIC_proxSEXP, SEXP fixedstepSEXP, SEXP difflambdaSEXP, SEXP ICLastOnlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type count_strata(count_strataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type theta_init(theta_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_ti(Z_tiSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta_ti_init(beta_ti_initSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda_spline(lambda_splineSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SmoothMatrix(SmoothMatrixSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type effectsize(effectsizeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type SplineType(SplineTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type iter_max(iter_maxSEXP);
    Rcpp::traits::input_parameter< const double& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const double& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type btr(btrSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< const bool& >::type TIC_prox(TIC_proxSEXP);
    Rcpp::traits::input_parameter< const bool& >::type fixedstep(fixedstepSEXP);
    Rcpp::traits::input_parameter< const bool& >::type difflambda(difflambdaSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ICLastOnly(ICLastOnlySEXP);
    rcpp_result_gen = Rcpp::wrap(surtiver_fixtra_fit_penalizestop_bresties(event, time, count_strata, Z_tv, B_spline, theta_init, Z_ti, beta_ti_init, lambda_spline, SmoothMatrix, effectsize, SplineType, method, lambda, factor, parallel, threads, tol, iter_max, s, t, btr, stop, TIC_prox, fixedstep, difflambda, ICLastOnly));
    return rcpp_result_gen;
END_RCPP
}
// LogPartialTest
List LogPartialTest(const arma::vec& event, const arma::mat& Z_tv, const arma::mat& B_spline, const arma::vec& event_test, const arma::mat& Z_tv_test, const arma::mat& B_spline_test, const List& theta_list, const bool& parallel, const unsigned int& threads, const bool TestAll);
RcppExport SEXP _surtvep_LogPartialTest(SEXP eventSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP event_testSEXP, SEXP Z_tv_testSEXP, SEXP B_spline_testSEXP, SEXP theta_listSEXP, SEXP parallelSEXP, SEXP threadsSEXP, SEXP TestAllSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type event_test(event_testSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv_test(Z_tv_testSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline_test(B_spline_testSEXP);
    Rcpp::traits::input_parameter< const List& >::type theta_list(theta_listSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type TestAll(TestAllSEXP);
    rcpp_result_gen = Rcpp::wrap(LogPartialTest(event, Z_tv, B_spline, event_test, Z_tv_test, B_spline_test, theta_list, parallel, threads, TestAll));
    return rcpp_result_gen;
END_RCPP
}
// VarianceMatrixCalculate
List VarianceMatrixCalculate(const arma::vec& event, const arma::mat& Z_tv, const arma::mat& B_spline, arma::mat& theta, double lambda_i, const arma::mat& SmoothMatrix, const std::string& SplineType, const std::string& method, const double& lambda, const double& factor, const bool& parallel, const unsigned int& threads);
RcppExport SEXP _surtvep_VarianceMatrixCalculate(SEXP eventSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP thetaSEXP, SEXP lambda_iSEXP, SEXP SmoothMatrixSEXP, SEXP SplineTypeSEXP, SEXP methodSEXP, SEXP lambdaSEXP, SEXP factorSEXP, SEXP parallelSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_i(lambda_iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SmoothMatrix(SmoothMatrixSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type SplineType(SplineTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(VarianceMatrixCalculate(event, Z_tv, B_spline, theta, lambda_i, SmoothMatrix, SplineType, method, lambda, factor, parallel, threads));
    return rcpp_result_gen;
END_RCPP
}
// VarianceMatrixCalculate_bresties
List VarianceMatrixCalculate_bresties(const arma::vec& event, const arma::vec& time, const arma::mat& Z_tv, const arma::mat& B_spline, arma::mat& theta, double lambda_i, const arma::mat& SmoothMatrix, const std::string& SplineType, const std::string& method, const double& lambda, const double& factor, const bool& parallel, const unsigned int& threads);
RcppExport SEXP _surtvep_VarianceMatrixCalculate_bresties(SEXP eventSEXP, SEXP timeSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP thetaSEXP, SEXP lambda_iSEXP, SEXP SmoothMatrixSEXP, SEXP SplineTypeSEXP, SEXP methodSEXP, SEXP lambdaSEXP, SEXP factorSEXP, SEXP parallelSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_i(lambda_iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SmoothMatrix(SmoothMatrixSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type SplineType(SplineTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(VarianceMatrixCalculate_bresties(event, time, Z_tv, B_spline, theta, lambda_i, SmoothMatrix, SplineType, method, lambda, factor, parallel, threads));
    return rcpp_result_gen;
END_RCPP
}
// surtiver_fixtra_fit_penalizestop_lambdafromlarge
List surtiver_fixtra_fit_penalizestop_lambdafromlarge(const arma::vec& event, const IntegerVector& count_strata, const arma::mat& Z_tv, const arma::mat& B_spline, const arma::mat& theta_init, const arma::mat& Z_ti, const arma::vec& beta_ti_init, const arma::vec& lambda_spline, const arma::mat& SmoothMatrix, const arma::vec& effectsize, const std::string& SplineType, const std::string& method, const double lambda, const double& factor, const bool& parallel, const unsigned int& threads, const double& tol, const unsigned int& iter_max, const double& s, const double& t, const std::string& btr, const std::string& stop, const bool& TIC_prox, const bool& fixedstep, const bool& difflambda, const bool& ICLastOnly);
RcppExport SEXP _surtvep_surtiver_fixtra_fit_penalizestop_lambdafromlarge(SEXP eventSEXP, SEXP count_strataSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP theta_initSEXP, SEXP Z_tiSEXP, SEXP beta_ti_initSEXP, SEXP lambda_splineSEXP, SEXP SmoothMatrixSEXP, SEXP effectsizeSEXP, SEXP SplineTypeSEXP, SEXP methodSEXP, SEXP lambdaSEXP, SEXP factorSEXP, SEXP parallelSEXP, SEXP threadsSEXP, SEXP tolSEXP, SEXP iter_maxSEXP, SEXP sSEXP, SEXP tSEXP, SEXP btrSEXP, SEXP stopSEXP, SEXP TIC_proxSEXP, SEXP fixedstepSEXP, SEXP difflambdaSEXP, SEXP ICLastOnlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type count_strata(count_strataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type theta_init(theta_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_ti(Z_tiSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta_ti_init(beta_ti_initSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda_spline(lambda_splineSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SmoothMatrix(SmoothMatrixSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type effectsize(effectsizeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type SplineType(SplineTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type iter_max(iter_maxSEXP);
    Rcpp::traits::input_parameter< const double& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const double& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type btr(btrSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< const bool& >::type TIC_prox(TIC_proxSEXP);
    Rcpp::traits::input_parameter< const bool& >::type fixedstep(fixedstepSEXP);
    Rcpp::traits::input_parameter< const bool& >::type difflambda(difflambdaSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ICLastOnly(ICLastOnlySEXP);
    rcpp_result_gen = Rcpp::wrap(surtiver_fixtra_fit_penalizestop_lambdafromlarge(event, count_strata, Z_tv, B_spline, theta_init, Z_ti, beta_ti_init, lambda_spline, SmoothMatrix, effectsize, SplineType, method, lambda, factor, parallel, threads, tol, iter_max, s, t, btr, stop, TIC_prox, fixedstep, difflambda, ICLastOnly));
    return rcpp_result_gen;
END_RCPP
}
// Lambda_estimate_ties2
List Lambda_estimate_ties2(int knot, arma::colvec& delta, arma::mat& z, arma::mat& b_spline, arma::mat& theta, arma::vec& tieseq);
RcppExport SEXP _surtvep_Lambda_estimate_ties2(SEXP knotSEXP, SEXP deltaSEXP, SEXP zSEXP, SEXP b_splineSEXP, SEXP thetaSEXP, SEXP tieseqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type knot(knotSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type b_spline(b_splineSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type tieseq(tieseqSEXP);
    rcpp_result_gen = Rcpp::wrap(Lambda_estimate_ties2(knot, delta, z, b_spline, theta, tieseq));
    return rcpp_result_gen;
END_RCPP
}
// ICcpp
List ICcpp(const arma::vec& event, const arma::mat& Z_tv, const arma::mat& B_spline, const IntegerVector& count_strata, arma::mat& theta, double lambda_i, const arma::mat& SmoothMatrix, const std::string& SplineType, const std::string& method, const double& lambda, const double& factor, const bool& parallel, const unsigned int& threads);
RcppExport SEXP _surtvep_ICcpp(SEXP eventSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP count_strataSEXP, SEXP thetaSEXP, SEXP lambda_iSEXP, SEXP SmoothMatrixSEXP, SEXP SplineTypeSEXP, SEXP methodSEXP, SEXP lambdaSEXP, SEXP factorSEXP, SEXP parallelSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type count_strata(count_strataSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_i(lambda_iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SmoothMatrix(SmoothMatrixSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type SplineType(SplineTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(ICcpp(event, Z_tv, B_spline, count_strata, theta, lambda_i, SmoothMatrix, SplineType, method, lambda, factor, parallel, threads));
    return rcpp_result_gen;
END_RCPP
}
// ICcpp_bresties
List ICcpp_bresties(const arma::vec& event, const arma::vec& time, const arma::mat& Z_tv, const arma::mat& B_spline, const IntegerVector& count_strata, arma::mat& theta, double lambda_i, const arma::mat& SmoothMatrix, const std::string& SplineType, const std::string& method, const double& lambda, const double& factor, const bool& parallel, const unsigned int& threads);
RcppExport SEXP _surtvep_ICcpp_bresties(SEXP eventSEXP, SEXP timeSEXP, SEXP Z_tvSEXP, SEXP B_splineSEXP, SEXP count_strataSEXP, SEXP thetaSEXP, SEXP lambda_iSEXP, SEXP SmoothMatrixSEXP, SEXP SplineTypeSEXP, SEXP methodSEXP, SEXP lambdaSEXP, SEXP factorSEXP, SEXP parallelSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_tv(Z_tvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_spline(B_splineSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type count_strata(count_strataSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_i(lambda_iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SmoothMatrix(SmoothMatrixSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type SplineType(SplineTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(ICcpp_bresties(event, time, Z_tv, B_spline, count_strata, theta, lambda_i, SmoothMatrix, SplineType, method, lambda, factor, parallel, threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_surtvep_stra_sampling_cpp", (DL_FUNC) &_surtvep_stra_sampling_cpp, 2},
    {"_surtvep_surtiver_fixtra_fit_penalizestop", (DL_FUNC) &_surtvep_surtiver_fixtra_fit_penalizestop, 26},
    {"_surtvep_surtiver_fixtra_fit_penalizestop_bresties", (DL_FUNC) &_surtvep_surtiver_fixtra_fit_penalizestop_bresties, 27},
    {"_surtvep_LogPartialTest", (DL_FUNC) &_surtvep_LogPartialTest, 10},
    {"_surtvep_VarianceMatrixCalculate", (DL_FUNC) &_surtvep_VarianceMatrixCalculate, 12},
    {"_surtvep_VarianceMatrixCalculate_bresties", (DL_FUNC) &_surtvep_VarianceMatrixCalculate_bresties, 13},
    {"_surtvep_surtiver_fixtra_fit_penalizestop_lambdafromlarge", (DL_FUNC) &_surtvep_surtiver_fixtra_fit_penalizestop_lambdafromlarge, 26},
    {"_surtvep_Lambda_estimate_ties2", (DL_FUNC) &_surtvep_Lambda_estimate_ties2, 6},
    {"_surtvep_ICcpp", (DL_FUNC) &_surtvep_ICcpp, 13},
    {"_surtvep_ICcpp_bresties", (DL_FUNC) &_surtvep_ICcpp_bresties, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_surtvep(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
