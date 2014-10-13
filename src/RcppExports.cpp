// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// crosstype_supported
bool crosstype_supported(const String& crosstype);
RcppExport SEXP qtl2_crosstype_supported(SEXP crosstypeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP );
        bool __result = crosstype_supported(crosstype);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// count_invalid_genotypes
IntegerVector count_invalid_genotypes(const String& crosstype, const IntegerMatrix& genotypes, const bool& is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info);
RcppExport SEXP qtl2_count_invalid_genotypes(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP );
        Rcpp::traits::input_parameter< const bool& >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP );
        IntegerVector __result = count_invalid_genotypes(crosstype, genotypes, is_X_chr, is_female, cross_info);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_genoprob
NumericVector calc_genoprob(const String& crosstype, const IntegerMatrix& genotypes, const bool& is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info, const NumericVector& rec_frac, const IntegerVector& marker_index, const double& error_prob);
RcppExport SEXP qtl2_calc_genoprob(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP marker_indexSEXP, SEXP error_probSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP );
        Rcpp::traits::input_parameter< const bool& >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP );
        Rcpp::traits::input_parameter< const IntegerVector& >::type marker_index(marker_indexSEXP );
        Rcpp::traits::input_parameter< const double& >::type error_prob(error_probSEXP );
        NumericVector __result = calc_genoprob(crosstype, genotypes, is_X_chr, is_female, cross_info, rec_frac, marker_index, error_prob);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// est_map
NumericVector est_map(const String& crosstype, const IntegerMatrix& genotypes, const bool& is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info, const NumericVector& rec_frac, const double& error_prob, const int& max_iterations, const double& tol, const bool& verbose);
RcppExport SEXP qtl2_est_map(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP error_probSEXP, SEXP max_iterationsSEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP );
        Rcpp::traits::input_parameter< const bool& >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP );
        Rcpp::traits::input_parameter< const double& >::type error_prob(error_probSEXP );
        Rcpp::traits::input_parameter< const int& >::type max_iterations(max_iterationsSEXP );
        Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP );
        Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP );
        NumericVector __result = est_map(crosstype, genotypes, is_X_chr, is_female, cross_info, rec_frac, error_prob, max_iterations, tol, verbose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// addlog
double addlog(const double& a, const double& b);
RcppExport SEXP qtl2_addlog(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type a(aSEXP );
        Rcpp::traits::input_parameter< const double& >::type b(bSEXP );
        double __result = addlog(a, b);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fit_linreg_eigenchol
List fit_linreg_eigenchol(const NumericMatrix X, const NumericVector y);
RcppExport SEXP qtl2_fit_linreg_eigenchol(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        List __result = fit_linreg_eigenchol(X, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_rss_eigenchol
double calc_rss_eigenchol(const NumericMatrix X, const NumericVector y);
RcppExport SEXP qtl2_calc_rss_eigenchol(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        double __result = calc_rss_eigenchol(X, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fit_linreg_eigenqr
List fit_linreg_eigenqr(const NumericMatrix X, const NumericVector y);
RcppExport SEXP qtl2_fit_linreg_eigenqr(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        List __result = fit_linreg_eigenqr(X, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_rss_eigenqr
double calc_rss_eigenqr(const NumericMatrix X, const NumericVector y);
RcppExport SEXP qtl2_calc_rss_eigenqr(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        double __result = calc_rss_eigenqr(X, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_mvrss_eigenchol
NumericVector calc_mvrss_eigenchol(const NumericMatrix X, const NumericMatrix Y);
RcppExport SEXP qtl2_calc_mvrss_eigenchol(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const NumericMatrix >::type Y(YSEXP );
        NumericVector __result = calc_mvrss_eigenchol(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_mvrss_eigenqr
NumericVector calc_mvrss_eigenqr(const NumericMatrix X, const NumericMatrix Y);
RcppExport SEXP qtl2_calc_mvrss_eigenqr(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const NumericMatrix >::type Y(YSEXP );
        NumericVector __result = calc_mvrss_eigenqr(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_rss_lapack
NumericVector calc_rss_lapack(const NumericMatrix X, const NumericMatrix Y, const bool skip_dgels = false, const double tol = 1e-10);
RcppExport SEXP qtl2_calc_rss_lapack(SEXP XSEXP, SEXP YSEXP, SEXP skip_dgelsSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const NumericMatrix >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const bool >::type skip_dgels(skip_dgelsSEXP );
        Rcpp::traits::input_parameter< const double >::type tol(tolSEXP );
        NumericVector __result = calc_rss_lapack(X, Y, skip_dgels, tol);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// random_int
IntegerVector random_int(const int n, const int low, const int high);
RcppExport SEXP qtl2_random_int(SEXP nSEXP, SEXP lowSEXP, SEXP highSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type n(nSEXP );
        Rcpp::traits::input_parameter< const int >::type low(lowSEXP );
        Rcpp::traits::input_parameter< const int >::type high(highSEXP );
        IntegerVector __result = random_int(n, low, high);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_permutation
IntegerVector get_permutation(const int n);
RcppExport SEXP qtl2_get_permutation(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type n(nSEXP );
        IntegerVector __result = get_permutation(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// permute_nvector
NumericMatrix permute_nvector(const int n, const NumericVector x);
RcppExport SEXP qtl2_permute_nvector(SEXP nSEXP, SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type n(nSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP );
        NumericMatrix __result = permute_nvector(n, x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// permute_ivector
IntegerMatrix permute_ivector(const int n, const IntegerVector x);
RcppExport SEXP qtl2_permute_ivector(SEXP nSEXP, SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type n(nSEXP );
        Rcpp::traits::input_parameter< const IntegerVector >::type x(xSEXP );
        IntegerMatrix __result = permute_ivector(n, x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_init
double test_init(String crosstype, int true_gen, bool is_X_chr, bool is_female, IntegerVector cross_info);
RcppExport SEXP qtl2_test_init(SEXP crosstypeSEXP, SEXP true_genSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< int >::type true_gen(true_genSEXP );
        Rcpp::traits::input_parameter< bool >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< bool >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type cross_info(cross_infoSEXP );
        double __result = test_init(crosstype, true_gen, is_X_chr, is_female, cross_info);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_emit
double test_emit(String crosstype, int obs_gen, int true_gen, double error_prob, bool is_X_chr, bool is_female, IntegerVector cross_info);
RcppExport SEXP qtl2_test_emit(SEXP crosstypeSEXP, SEXP obs_genSEXP, SEXP true_genSEXP, SEXP error_probSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< int >::type obs_gen(obs_genSEXP );
        Rcpp::traits::input_parameter< int >::type true_gen(true_genSEXP );
        Rcpp::traits::input_parameter< double >::type error_prob(error_probSEXP );
        Rcpp::traits::input_parameter< bool >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< bool >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type cross_info(cross_infoSEXP );
        double __result = test_emit(crosstype, obs_gen, true_gen, error_prob, is_X_chr, is_female, cross_info);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_step
double test_step(String crosstype, int gen_left, int gen_right, double rec_frac, bool is_X_chr, bool is_female, IntegerVector cross_info);
RcppExport SEXP qtl2_test_step(SEXP crosstypeSEXP, SEXP gen_leftSEXP, SEXP gen_rightSEXP, SEXP rec_fracSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< int >::type gen_left(gen_leftSEXP );
        Rcpp::traits::input_parameter< int >::type gen_right(gen_rightSEXP );
        Rcpp::traits::input_parameter< double >::type rec_frac(rec_fracSEXP );
        Rcpp::traits::input_parameter< bool >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< bool >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type cross_info(cross_infoSEXP );
        double __result = test_step(crosstype, gen_left, gen_right, rec_frac, is_X_chr, is_female, cross_info);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_check_geno
bool test_check_geno(String crosstype, int gen, bool is_observed_value, bool is_X_chr, bool is_female, IntegerVector cross_info);
RcppExport SEXP qtl2_test_check_geno(SEXP crosstypeSEXP, SEXP genSEXP, SEXP is_observed_valueSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< int >::type gen(genSEXP );
        Rcpp::traits::input_parameter< bool >::type is_observed_value(is_observed_valueSEXP );
        Rcpp::traits::input_parameter< bool >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< bool >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type cross_info(cross_infoSEXP );
        bool __result = test_check_geno(crosstype, gen, is_observed_value, is_X_chr, is_female, cross_info);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_possible_gen
IntegerVector test_possible_gen(String crosstype, bool is_X_chr, bool is_female, IntegerVector cross_info);
RcppExport SEXP qtl2_test_possible_gen(SEXP crosstypeSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< bool >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< bool >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type cross_info(cross_infoSEXP );
        IntegerVector __result = test_possible_gen(crosstype, is_X_chr, is_female, cross_info);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_ngen
int test_ngen(String crosstype, bool is_X_chr);
RcppExport SEXP qtl2_test_ngen(SEXP crosstypeSEXP, SEXP is_X_chrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< bool >::type is_X_chr(is_X_chrSEXP );
        int __result = test_ngen(crosstype, is_X_chr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_nrec
double test_nrec(String crosstype, int gen_left, int gen_right, bool is_X_chr, bool is_female, IntegerVector cross_info);
RcppExport SEXP qtl2_test_nrec(SEXP crosstypeSEXP, SEXP gen_leftSEXP, SEXP gen_rightSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type crosstype(crosstypeSEXP );
        Rcpp::traits::input_parameter< int >::type gen_left(gen_leftSEXP );
        Rcpp::traits::input_parameter< int >::type gen_right(gen_rightSEXP );
        Rcpp::traits::input_parameter< bool >::type is_X_chr(is_X_chrSEXP );
        Rcpp::traits::input_parameter< bool >::type is_female(is_femaleSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type cross_info(cross_infoSEXP );
        double __result = test_nrec(crosstype, gen_left, gen_right, is_X_chr, is_female, cross_info);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
