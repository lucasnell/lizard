# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

make_chol_decomp_cpp <- function(vcv_cube) {
    .Call(`_armmr_make_chol_decomp_cpp`, vcv_cube)
}

#' Multiple populations simulated using AR1 process.
#'
#' Input and output N values are logged.
#' All input matrices other than `X` and `vcv_cube` should have rows associated
#' with a given species and columns associated with a given location.
#' See descriptions for `X` and `vcv_cube`.
#'
#' @param X Matrix of environmental variable.
#'     It should have rows associated with a given time point and
#'     columns associated with a given location.
#' @param N0_mat Matrix of starting population abundances (`log(# individuals)`)
#'     by species and location.
#' @param b0_mat Matrix of \eqn{\beta_0} (the population-abundance intercept) values
#'     by species and location.
#' @param b1_mat Matrix of \eqn{\beta_1} (the effect of \eqn{X} on \eqn{N}) values
#'     by species and location.
#' @param rho_mat Matrix of growth rates by species and location.
#' @param vcv_cube Cube representing variance-covariance matrices for process error
#'     among species, one matrix for each location.
#'     It should have rows and columns associated with a given species,
#'     and slices associated with a given location.
#' @param obs_sigma Vector of standard deviations of observation error for each species.
#' @param n_threads Number of cores to use. Defaults to 1.
#'
#'
#'
#' @return A 3-dimensional array.
#' The output will have rows associated with a given time point,
#' columns associated with a given species, and
#' slices associated with a given location.
#'
#'
#'
#'
#' @export
#'
#' @examples
#' n_spp <- 3
#' max_t <- 10
#' n_locs <- 2
#' X <- matrix(rlnorm(max_t * n_locs), max_t, n_locs)
#' N0 <- matrix(log(10), n_spp, n_locs)
#' b0 <- matrix(log(100), n_spp, n_locs)
#' b1 <- matrix(0.1, n_spp, n_locs)
#' rho <- matrix(0.2, n_spp, n_locs)
#' vcv <- diag(n_spp)
#' vcv[lower.tri(vcv)] <- vcv[upper.tri(vcv)] <- 0.1
#' vcv <- replicate(n_locs, vcv, simplify = FALSE)
#' obs <- rep(0.1, n_spp)
#' sim_pops_ar(X, N0, b0, b1, rho, vcv, obs)
#'
sim_pops_ar <- function(X, N0_mat, b0_mat, b1_mat, rho_mat, vcv_cube, obs_sigma, n_threads = 1L) {
    .Call(`_armmr_sim_pops_ar`, X, N0_mat, b0_mat, b1_mat, rho_mat, vcv_cube, obs_sigma, n_threads)
}

hpdi <- function(input, prob = 0.95) {
    .Call(`_armmr_hpdi`, input, prob)
}

