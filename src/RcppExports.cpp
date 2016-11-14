// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// checkBits
bool checkBits();
RcppExport SEXP largeVis_checkBits() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(checkBits());
    return rcpp_result_gen;
END_RCPP
}
// checkOpenMP
bool checkOpenMP();
RcppExport SEXP largeVis_checkOpenMP() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(checkOpenMP());
    return rcpp_result_gen;
END_RCPP
}
// dbscan_cpp
IntegerVector dbscan_cpp(const arma::sp_mat& edges, const arma::imat& neighbors, double eps, int minPts, bool verbose);
RcppExport SEXP largeVis_dbscan_cpp(SEXP edgesSEXP, SEXP neighborsSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< const arma::imat& >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(dbscan_cpp(edges, neighbors, eps, minPts, verbose));
    return rcpp_result_gen;
END_RCPP
}
// searchTrees
arma::imat searchTrees(const int& threshold, const int& n_trees, const int& K, const int& maxIter, const arma::mat& data, const std::string& distMethod, Rcpp::Nullable< NumericVector > seed, Rcpp::Nullable< NumericVector > threads, bool verbose);
RcppExport SEXP largeVis_searchTrees(SEXP thresholdSEXP, SEXP n_treesSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP dataSEXP, SEXP distMethodSEXP, SEXP seedSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< NumericVector > >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< NumericVector > >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(searchTrees(threshold, n_trees, K, maxIter, data, distMethod, seed, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fastDistance
arma::vec fastDistance(const IntegerVector is, const IntegerVector js, const arma::mat& data, const std::string& distMethod, Rcpp::Nullable<Rcpp::NumericVector> threads, bool verbose);
RcppExport SEXP largeVis_fastDistance(SEXP isSEXP, SEXP jsSEXP, SEXP dataSEXP, SEXP distMethodSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type is(isSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type js(jsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDistance(is, js, data, distMethod, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fastCDistance
arma::vec fastCDistance(const arma::ivec& is, const arma::ivec& js, const arma::uvec& i_locations, const arma::uvec& p_locations, const arma::vec& x, const std::string& distMethod, Rcpp::Nullable<Rcpp::NumericVector> threads, bool verbose);
RcppExport SEXP largeVis_fastCDistance(SEXP isSEXP, SEXP jsSEXP, SEXP i_locationsSEXP, SEXP p_locationsSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::ivec& >::type is(isSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type js(jsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i_locations(i_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type p_locations(p_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(fastCDistance(is, js, i_locations, p_locations, x, distMethod, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fastSDistance
arma::vec fastSDistance(const arma::ivec& is, const arma::ivec& js, const arma::uvec& i_locations, const arma::uvec& j_locations, const arma::vec& x, const std::string& distMethod, Rcpp::Nullable<Rcpp::NumericVector> threads, bool verbose);
RcppExport SEXP largeVis_fastSDistance(SEXP isSEXP, SEXP jsSEXP, SEXP i_locationsSEXP, SEXP j_locationsSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::ivec& >::type is(isSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type js(jsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i_locations(i_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type j_locations(j_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(fastSDistance(is, js, i_locations, j_locations, x, distMethod, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// referenceWij
arma::sp_mat referenceWij(const arma::ivec& i, const arma::ivec& j, arma::vec& d, Rcpp::Nullable<Rcpp::NumericVector> threads, double perplexity);
RcppExport SEXP largeVis_referenceWij(SEXP iSEXP, SEXP jSEXP, SEXP dSEXP, SEXP threadsSEXP, SEXP perplexitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::ivec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type j(jSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity(perplexitySEXP);
    rcpp_result_gen = Rcpp::wrap(referenceWij(i, j, d, threads, perplexity));
    return rcpp_result_gen;
END_RCPP
}
// hdbscanc
List hdbscanc(const arma::sp_mat& edges, const IntegerMatrix& neighbors, const int& K, const int& minPts, Rcpp::Nullable<Rcpp::NumericVector> threads, const bool& verbose);
RcppExport SEXP largeVis_hdbscanc(SEXP edgesSEXP, SEXP neighborsSEXP, SEXP KSEXP, SEXP minPtsSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(hdbscanc(edges, neighbors, K, minPts, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// sgd
arma::mat sgd(arma::mat& coords, arma::ivec& targets_i, arma::ivec& sources_j, arma::ivec& ps, arma::vec& weights, const double& gamma, const double& rho, const long long& n_samples, const int& M, const double& alpha, const Rcpp::Nullable<Rcpp::NumericVector> momentum, const bool& useDegree, const Rcpp::Nullable<Rcpp::NumericVector> seed, const Rcpp::Nullable<Rcpp::NumericVector> threads, const bool verbose);
RcppExport SEXP largeVis_sgd(SEXP coordsSEXP, SEXP targets_iSEXP, SEXP sources_jSEXP, SEXP psSEXP, SEXP weightsSEXP, SEXP gammaSEXP, SEXP rhoSEXP, SEXP n_samplesSEXP, SEXP MSEXP, SEXP alphaSEXP, SEXP momentumSEXP, SEXP useDegreeSEXP, SEXP seedSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type targets_i(targets_iSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type sources_j(sources_jSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type ps(psSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const double& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double& >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const long long& >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector> >::type momentum(momentumSEXP);
    Rcpp::traits::input_parameter< const bool& >::type useDegree(useDegreeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(sgd(coords, targets_i, sources_j, ps, weights, gamma, rho, n_samples, M, alpha, momentum, useDegree, seed, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// optics_cpp
List optics_cpp(const arma::sp_mat& edges, const arma::imat& neighbors, const double& eps, const int& minPts, const bool& useQueue, const bool& verbose);
RcppExport SEXP largeVis_optics_cpp(SEXP edgesSEXP, SEXP neighborsSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP useQueueSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< const arma::imat& >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< const double& >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const int& >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type useQueue(useQueueSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(optics_cpp(edges, neighbors, eps, minPts, useQueue, verbose));
    return rcpp_result_gen;
END_RCPP
}
// searchTreesCSparse
arma::imat searchTreesCSparse(const int& threshold, const int& n_trees, const int& K, const int& maxIter, const arma::uvec& i, const arma::uvec& p, const arma::vec& x, const std::string& distMethod, Rcpp::Nullable< Rcpp::NumericVector> seed, Rcpp::Nullable< Rcpp::NumericVector> threads, bool verbose);
RcppExport SEXP largeVis_searchTreesCSparse(SEXP thresholdSEXP, SEXP n_treesSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP iSEXP, SEXP pSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP seedSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< Rcpp::NumericVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< Rcpp::NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(searchTreesCSparse(threshold, n_trees, K, maxIter, i, p, x, distMethod, seed, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// searchTreesTSparse
arma::imat searchTreesTSparse(const int& threshold, const int& n_trees, const int& K, const int& maxIter, const arma::uvec& i, const arma::uvec& j, const arma::vec& x, const std::string& distMethod, Rcpp::Nullable< NumericVector> seed, Rcpp::Nullable< NumericVector> threads, bool verbose);
RcppExport SEXP largeVis_searchTreesTSparse(SEXP thresholdSEXP, SEXP n_treesSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP iSEXP, SEXP jSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP seedSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type j(jSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< NumericVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< NumericVector> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(searchTreesTSparse(threshold, n_trees, K, maxIter, i, j, x, distMethod, seed, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
