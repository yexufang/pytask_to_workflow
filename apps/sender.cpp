#include "workflow/TLVMessage.h"
#include "workflow/WFTaskFactory.h"
#include "workflow/Workflow.h"
#include <arpa/inet.h>

#include "workflow/DnsUtil.h"
#include "workflow/WFDnsClient.h"
#include "workflow/WFFacilities.h"

#include <iostream>

int main(int argc, char *argv[]) {

  std::cout << "Hello, World!" << std::endl;
  WFServer<protocol::TLVRequest, protocol::TLVResponse>(
      [](WFNetworkTask<protocol::TLVRequest, TLVResponse> *task) {
        *(task->get_resp()) = std::move(*task->get_resq());
      });
  return 0;
}