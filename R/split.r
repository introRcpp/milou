#' Fonction split
#'
#' @param x un vecteur d'entiers ou de doubles
#' @param pivot (facultatif) un pivot
#' 
#' @details si `pivot` est absent, 
#' un élement de `x` pris au hasard sera utilisé
#' 
#' @return une liste avec composantes `lo` et `hi` 
#' @export
#'
#' @examples
#' x <- runif(20)
#' split(x, 0.5)
#' 
#' x <- sample.int(100, 20)
#' split(x, 50)
#' split(x)

split <- function(x, pivot) {
  if(is.integer(x))
    if(missing(pivot))
      .Call("_milou_random_split_int", x)
    else
      .Call("_milou_splitR_int", x, pivot)
  else if(is.double(x))
    if(missing(pivot))
      .Call("_milou_random_split_double", x)
    else
      .Call("_milou_splitR_double", x, pivot)
  else
    stop("Mauvais type de x")
}