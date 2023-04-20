; constant function

(set-logic LIA)

(synth-fun constant ((x Int)) Int
    ((Start Int (x
                 0
                 1
                 (+ Start Start)
                 (- Start Start)
                 ))
          ))

(declare-var x Int)
(declare-var y Int)

(constraint (= (constant x) (constant y)))


(check-synth)

; 0, 1, (- x x) are valid solutions