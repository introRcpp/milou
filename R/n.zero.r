#' Compter les zéros
#'
#' @param x un vecteur de type 'integer'
#'
#' @details Cette fonction démontre l'utilisation d'une boucle C++11
#' pour compter les zéros dans un vecteur.
#' 
#' @return le nombre de 0 dans x
#' @export
#'
#' @examples
#' a <- sample(0:99, 1e6, TRUE )
#' n.zero(a)
#' 

n.zero <- function(x) {
  if( typeof(x) != "integer" )
    stop("Cette fonction compte les zéros dans les vecteurs d'entiers")
  .Call(`_milou_count_zeroes`, x)
}