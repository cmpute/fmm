/**
 * Fast map matching.
 *
 * ubodg_gen command line program
 *
 * @author: Can Yang
 * @version: 2020.01.31
 */

#ifndef FMM_SRC_MM_FMM_UBODT_GEN_APP_HPP_
#define FMM_SRC_MM_FMM_UBODT_GEN_APP_HPP_

#include <boost/archive/binary_oarchive.hpp>
#include "mm/fmm/ubodt_gen_app_config.hpp"
#include "network/network.hpp"
#include "network/network_graph.hpp"

namespace FMM {
namespace MM {
/**
 * ubodt_gen command line program
 */
class UBODTGenApp {
public:
  /**
   * Constructor
   * @param config Configuration data
   */
  UBODTGenApp(const UBODTGenAppConfig &config) :
    config_(config),
    network_(config_.network_config),
    ng_(network_) {
  };
  /**
   * Run the precomputation
   */
  void run() const;
private:
  const UBODTGenAppConfig &config_;
  NETWORK::Network network_;
  NETWORK::NetworkGraph ng_;

};
}
}

#endif //FMM_SRC_MM_FMM_UBODT_GEN_APP_HPP_
