#include "bladerfDriver.h"
#include <iostream>
#include <global.h>
#include <thread>
using namespace std;
int main()
{
// ___________________________Unit Test BladeRF Driver_________________________________________
     // struct bladerf *bladerfDev = bladerfDriver::setBoard();
     // if (bladerfDev == NULL)
     //      return -1;
     // struct bladerfDriver::bladerf_data *bladerfData = new bladerfDriver::bladerf_data;
     // bladerfData->idx = 0;
     // bladerfData->num_buffers = 2;
     // bladerfData->samples_per_buffer = LEN_BUF_IN_SAMPLE;
     // struct bladerf_stream *bladerfStream;
     // bladerfStream = bladerfDriver::configureStream(bladerfDev, bladerfStream, bladerfData);
     // // bladerf_stream(bladerfStream,BLADERF_RX_X1);
     // std::thread streaming(bladerf_stream, bladerfStream, BLADERF_RX_X1);
     // bladerf_deinit_stream(bladerfStream);
     // bladerf_close(bladerfDev);
     // return 0;
     // ___________________________Unit Test Data Buffer_________________________________________
     dataBuffer rxbuf;
     
}