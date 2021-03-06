#ifndef __TWOABY_H_
#define __TWOABY_H_

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
 \brief		This function is used to build and solve the addition.
 */
share* BuildFirstCircuit(e_role role, share *s_a1, share *s_b1, share *s_a2, share *s_b2, share *s_localS, share *s_localC,
		ArithmeticCircuit *ac);


#endif /* __TWOABY_H_ */
