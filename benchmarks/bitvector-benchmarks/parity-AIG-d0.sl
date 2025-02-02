; Synthesize a part of a parity-checking circuit using only AND and NOT gates

(set-logic BV)

(define-fun parity ((a Bool) (b Bool) (c Bool) (d Bool)) Bool
  (xor (not (xor a b)) (not (xor c d))))

(synth-fun AIG ((a Bool) (b Bool) (c Bool) (d Bool)) Bool
           ((Start Bool ((and Start Start) (not Start) a b c d))))

(declare-var a Bool)
(declare-var b Bool)
(declare-var c Bool)
(declare-var d Bool)

(constraint
 (= (parity a b c d) 
    (and (AIG a b c d)
        (not (and (and (not (and a b)) (not (and (not a) (not b))))
               (and (not (and (not c) (not d))) (not (and c d))))))))


(check-synth)

; Solution:
;(define-fun AIG ((a Bool) (b Bool) (c Bool) (d Bool)) Bool
;(not
;  (and
;   (and (not (and (not a) b)) (not (and d (not c))))
;   (and (not (and (not b) a)) (not (and (not d) c)))))) 