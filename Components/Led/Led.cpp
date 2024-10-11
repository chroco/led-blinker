// ======================================================================
// \title  Led.cpp
// \author chroco
// \brief  cpp file for Led component implementation class
// ======================================================================

#include "Components/Led/Led.hpp"
#include "FpConfig.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  Led ::
    Led(const char* const compName) :
      LedComponentBase(compName)
  {

  }

  Led ::
    ~Led()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void Led ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
