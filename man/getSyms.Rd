% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Sym2.R
\name{getSyms}
\alias{getSyms}
\title{List \code{Sym()} objects}
\usage{
getSyms(all.names = FALSE)
}
\arguments{
\item{all.names}{a logical value. If \code{TRUE}, all object names are returned. If \code{FALSE}, names which begin with a \code{.} are omitted.}
}
\description{
Lists all \code{Sym()} objects in the global environment (\code{.GlobalEnv})
}
\examples{
getSyms()
xs <- Sym("x")
getSyms()

}
