#include <libsnark/relations/variable.hpp>
#include <libsnark/zk_proof_systems/ppzksnark/r1cs_gg_ppzksnark/r1cs_gg_ppzksnark.hpp>
#include <libsnark/zk_proof_systems/ppzksnark/r1cs_bg_ppzksnark/r1cs_bg_ppzksnark.hpp>
#include <libsnark/zk_proof_systems/ppzksnark/r1cs_se_ppzksnark/r1cs_se_ppzksnark.hpp>
#include <libsnark/relations/constraint_satisfaction_problems/r1cs/r1cs.hpp>
#include <libsnark/gadgetlib1/pb_variable.hpp>
#include <libsnark/gadgetlib1/protoboard.hpp>
#include <libff/algebra/curves/bn128/bn128_pp.hpp>
#include <libff/algebra/curves/mnt753/mnt6753/mnt6753_pp.hpp>
#include <libff/algebra/curves/mnt753/mnt4753/mnt4753_pp.hpp>
#include <libff/algebra/curves/mnt753/mnt6753/mnt6753_init.hpp>
#include <libff/common/rng.hpp>
#include <libff/algebra/fields/bigint.hpp>
#include <libff/algebra/scalar_multiplication/wnaf.hpp>
#include <gmp.h>
#include <openssl/md5.h>
#include <libsnark/gadgetlib1/gadgets/hashes/sha256/sha256_gadget.hpp>

typedef libff::mnt6753_pp ppT;
typedef libff::mnt4753_pp other_curve_ppT;
typedef libff::Fr<ppT> FieldT;

typedef other_curve_ppT::G1_type other_curve_G1;
typedef other_curve_ppT::G2_type other_curve_G2;
typedef other_curve_ppT::Fqe_type other_curve_Fqe;

#define CURVE_PREFIX(name) camlsnark_mnt6753_ ## name

#define R_LIMBS libff::mnt6753_r_limbs

#define Q_LIMBS libff::mnt6753_q_limbs
