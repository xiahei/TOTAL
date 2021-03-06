(define (subsets s)
  (if (null? s) (list (list ))
    (let ((rest (subsets (cdr s))))
      (append rest (map (lambda (x) (cons (car s) x)))))
    ))
