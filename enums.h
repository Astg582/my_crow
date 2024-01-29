#include <iostream>

enum type_s {
	val,
	op,
	k_w,
        lit
};

enum type_key {
	numb,
	ft,
	xt,
	bo,
	none,
	any
};

enum condition {
	if0,
	else0
};

enum loops {
	while0,
	for0
};

enum to_go {
	break0,
	continue0
};

namespace {
	enum class all_key {
		numb,
		ft,
		xt,
		bo,
		none,
		any,
		if,
		else,
		while,
		for,
		break,
      		continue
	};
}

enum operators {
	s_m = '+',
	s_b = '-',
	eq_al = '=',
	d_v = '/',
	m_l = '*',
	a_d = '&',
	o_r = '|',
	n_t = '!',
	x_r = '^'
};
