#include "unittest.h"
// Paste the source of the tests.
#include "test_hmm.c"
#include "test_utils.c"
#include "test_zerone.c"
#include "test_zinm.c"

int
main(
   int argc,
   char **argv
)
{

   // Register test cases //
   const static test_case_t test_cases[] = {
      {"utils/new_histo",         test_new_histo},
      {"utils/histo_push",        test_histo_push},
      {"utils/compress_histo",    test_compress_histo},
      {"utils/tabulate",          test_tabulate},
      {"utils/indexts",           test_indexts},
      {"zinm/zinm_prob",          test_zinm_prob},
      {"zinm/eval_nb_f",          test_eval_nb_f},
      {"zinm/eval_nb_dfda",       test_eval_nb_dfda},
      {"zinm/eval_zinb_f",        test_eval_zinb_f},
      {"zinm/eval_zinb_g",        test_eval_zinb_g},
      {"zinm/eval_zinb_dfda",     test_eval_zinb_dfda},
      {"zinm/eval_zinb_dfdp",     test_eval_zinb_dfdp},
      {"zinm/eval_zinb_dgda",     test_eval_zinb_dgda},
      {"zinm/ll_zinb",            test_ll_zinb},
      {"zinm/nb_est_alpha",       test_nb_est_alpha},
      {"zinm/mle_nb",             test_mle_nb},
      {"zinm/mle_zinb",           test_mle_zinb},
      {"zinm/fail_mle_nb",        test_fail_mle_nb},
      {"zinm/fail_mle_zinb",      test_fail_mle_zinb},
      {"hmm/fwdb",                test_fwdb},
      {"hmm/fwdb (NAs)",          test_fwdb_NA},
      {"hmm/fwdb (underflow)",    test_underflow},
      {"hmm/block_fwdb",          test_block_fwdb},
      {"hmm/block_fwdb (NAs)",    test_block_fwdb_NA},
      {"hmm/viterbi",             test_viterbi},
      {"hmm/block_viterbi",       test_block_viterbi},
      {"hmm/block_viterbi (NAs)", test_block_viterbi_NA},
      {"hmm/update_trans",        test_update_trans},
      {"hmm/bw_zinm",             test_bw_zinm},
      {"zerone/read_file",        test_read_file},
      {"zerone/eval_bw_f",        test_eval_bw_f},
      {NULL, NULL}
   };

   // Run the tests.
   return run_unittest(argc, argv, test_cases);

}
