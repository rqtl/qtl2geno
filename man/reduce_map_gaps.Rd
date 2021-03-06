% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/reduce_map_gaps.R
\name{reduce_map_gaps}
\alias{reduce_map_gaps}
\title{Reduce the lengths of gaps in a map}
\usage{
reduce_map_gaps(map, min_gap = 50)
}
\arguments{
\item{map}{Genetic map as a list of vectors (each vector is a
chromosome and contains the marker positions).}

\item{min_gap}{Minimum gap length to return.}
}
\value{
Input map with any gaps greater than \code{min_gap} reduced to \code{min_gap}.
}
\description{
Reduce the lengths of gaps in a map
}
\examples{
iron <- read_cross2(system.file("extdata", "iron.zip", package="qtl2geno"))
rev_map <- reduce_map_gaps(iron$gmap, 30)

}
\seealso{
\code{\link[=find_map_gaps]{find_map_gaps()}}
}
