// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "armmr_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// make_chol_decomp_cpp
std::vector<MatrixXd> make_chol_decomp_cpp(const List& vcv_cube);
RcppExport SEXP _armmr_make_chol_decomp_cpp(SEXP vcv_cubeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type vcv_cube(vcv_cubeSEXP);
    rcpp_result_gen = Rcpp::wrap(make_chol_decomp_cpp(vcv_cube));
    return rcpp_result_gen;
END_RCPP
}
// sim_pops_ar
std::vector<MatrixXd> sim_pops_ar(const Map<MatrixXd> X, const Map<MatrixXd> N0_mat, const Map<MatrixXd> b0_mat, const Map<MatrixXd> b1_mat, const Map<MatrixXd> rho_mat, const List& vcv_cube, const Map<VectorXd> obs_sigma, const uint32& n_threads);
RcppExport SEXP _armmr_sim_pops_ar(SEXP XSEXP, SEXP N0_matSEXP, SEXP b0_matSEXP, SEXP b1_matSEXP, SEXP rho_matSEXP, SEXP vcv_cubeSEXP, SEXP obs_sigmaSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Map<MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Map<MatrixXd> >::type N0_mat(N0_matSEXP);
    Rcpp::traits::input_parameter< const Map<MatrixXd> >::type b0_mat(b0_matSEXP);
    Rcpp::traits::input_parameter< const Map<MatrixXd> >::type b1_mat(b1_matSEXP);
    Rcpp::traits::input_parameter< const Map<MatrixXd> >::type rho_mat(rho_matSEXP);
    Rcpp::traits::input_parameter< const List& >::type vcv_cube(vcv_cubeSEXP);
    Rcpp::traits::input_parameter< const Map<VectorXd> >::type obs_sigma(obs_sigmaSEXP);
    Rcpp::traits::input_parameter< const uint32& >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_pops_ar(X, N0_mat, b0_mat, b1_mat, rho_mat, vcv_cube, obs_sigma, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// hpdi
NumericVector hpdi(NumericVector input, const double& prob);
RcppExport SEXP _armmr_hpdi(SEXP inputSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< const double& >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(hpdi(input, prob));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_stan_fit4armm_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_b_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_beta_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_catlogit_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_hlnp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_hnb_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_hp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_lnb_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_lnp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_nb_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_p_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_reps_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_zilnp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_zinb_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4armm_ss_zip_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4mm_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_armmr_make_chol_decomp_cpp", (DL_FUNC) &_armmr_make_chol_decomp_cpp, 1},
    {"_armmr_sim_pops_ar", (DL_FUNC) &_armmr_sim_pops_ar, 8},
    {"_armmr_hpdi", (DL_FUNC) &_armmr_hpdi, 2},
    {"_rcpp_module_boot_stan_fit4armm_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_b_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_b_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_beta_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_beta_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_catlogit_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_catlogit_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_hlnp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_hlnp_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_hnb_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_hnb_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_hp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_hp_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_lnb_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_lnb_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_lnp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_lnp_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_nb_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_nb_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_p_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_p_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_reps_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_reps_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_zilnp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_zilnp_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_zinb_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_zinb_mod, 0},
    {"_rcpp_module_boot_stan_fit4armm_ss_zip_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4armm_ss_zip_mod, 0},
    {"_rcpp_module_boot_stan_fit4mm_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4mm_mod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_armmr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
