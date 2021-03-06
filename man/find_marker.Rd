% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/find_marker.R
\name{find_marker}
\alias{find_marker}
\title{Find markers by chromosome position}
\usage{
find_marker(map, chr, pos, interval = NULL)
}
\arguments{
\item{map}{A map object: a list (corresponding to chromosomes) of vectors of marker positions.}

\item{chr}{A vector of chromosomes}

\item{pos}{A vector of positions}

\item{interval}{A pair of positions (provide either \code{pos} or \code{interval} but not both)}
}
\value{
A vector of marker names, either closest to the positions
specified by \code{pos}, or within the interval defined by
\code{interval}.
}
\description{
Find markers closest to specified set of positions, or within a specified interval.
}
\details{
If \code{pos} is provided, \code{interval} should not be, and vice versa.

If \code{pos} is provided, then \code{chr} and \code{pos} should
either be the same length, or one of them should have length 1 (to
be expanded to the length of the other).

If \code{interval} is provided, then \code{chr} should have length 1.
}
\examples{
iron <- read_cross2(system.file("extdata", "iron.zip", package="qtl2geno"))

# find markers by their genetic map positions
find_marker(iron$gmap, c(8, 11), c(37.7, 56.9))

# find markers by their physical map positions (two markers on chr 7)
find_marker(iron$pmap, 7, c(44.2, 108.9))

# find markers in an interval
find_marker(iron$pmap, 16, interval=c(35, 80))
}
