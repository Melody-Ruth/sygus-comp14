; Hacker's delight 19, difficulty 1

(set-logic BV)

(define-fun hd19 ((x (BitVec 32)) (m (BitVec 32)) (k (BitVec 32))) (BitVec 32) 
  (bvxor x (bvxor (bvshl (bvand (bvxor (bvlshr x k) x) m) k) (bvand (bvxor (bvlshr x k) x) m))))

(synth-fun f ((x (BitVec 32)) (m (BitVec 32)) (k (BitVec 32))) (BitVec 32)
		   ((Start (BitVec 32) ((bvand Start Start)
								(bvsub Start Start)
								(bvxor Start Start)
								(bvor Start Start)
								(bvand Start Start)
								(bvshl Start Start)
								(bvlshr Start Start)
								(bvashr Start Start)
								(bvnot Start)
								(bvneg Start)
								x
								m
								k))))


(declare-var x (BitVec 32))
(declare-var m (BitVec 32))
(declare-var k (BitVec 32))

(constraint (= (hd19 x m k) (f x m k)))
(check-synth)

