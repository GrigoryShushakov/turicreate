/* Copyright © 2017 Apple Inc. All rights reserved.
 *
 * Use of this source code is governed by a BSD-3-clause license that can
 * be found in the LICENSE.txt file or at https://opensource.org/licenses/BSD-3-Clause
 */
#ifndef CPPIPC_SERVER_CONSOLE_CANCEL_HANDLER_UNIX_HPP
#define CPPIPC_SERVER_CONSOLE_CANCEL_HANDLER_UNIX_HPP

#include <csignal>
#include <cppipc/client/console_cancel_handler.hpp>

namespace cppipc {

class console_cancel_handler_unix : public console_cancel_handler {
 public:
  typedef console_cancel_handler super;
  bool set_handler();
  bool unset_handler();
  void raise_cancel();
  console_cancel_handler_unix();

 private:

  struct sigaction m_sigint_act;
  struct sigaction m_prev_sigint_act;
};

} // namespace cppipc

#endif //CPPIPC_SERVER_CONSOLE_CANCEL_HANDLER_UNIX_HPP
