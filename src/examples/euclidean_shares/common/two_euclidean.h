#ifndef __TWOEUCLIDEAN_H_
#define __TWOEUCLIDEAN_H_

#include "../../../abycore/circuit/booleancircuits.h"
#include "../../../abycore/circuit/arithmeticcircuits.h"
#include "../../../abycore/circuit/circuit.h"
#include "../../../abycore/aby/abyparty.h"
#include <math.h>
#include <cassert>

#define VALUE_A 	"A VALUE"
#define VALUE_B 	"B VALUE"

/**
 \param		role 		role played by the program which can be server or client part.
 \param 	address 	IP Address
 \param 	seclvl 		Security level
 \param 	bitlen		Bit length of the inputs
 \param 	nthreads	Number of threads
 \param		mt_alg		The algorithm for generation of multiplication triples
 \param 	sharing		Sharing type object
 \brief		This function is used for running a testing environment for solving the
 millionaire's problem
 */
int32_t test_circuit(e_role role, const std::string& address, uint16_t port, seclvl seclvl,
		uint32_t bitlen, uint32_t nthreads, e_mt_gen_alg mt_alg, e_sharing sharing);
/**
 \param		s_a		shared object of alice.
 \param		s_b 		shared object of bob.
 \param		ac	 		arithmetic circuit object.
 \brief		This function is used to build and solve the euclidean distance using shares coming from the two parties.
 */
share* BuildFirstCircuit(e_role role, share *s_local1_S, share *s_local2_S, share *s_local1_C, share *s_local2_C,
			 share *s_secret1,share *s_secret2,
		ArithmeticCircuit *ac);


#endif /* __TWOEUCLIDEAN_H_ */
