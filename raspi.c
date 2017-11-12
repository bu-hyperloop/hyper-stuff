#include "raspi.h"

int main (void){
  while(!wirelessDataReciever()){}
  while(!dataReciever()){}
  while(!dataProcessing()){}
  while(!stateChange()){}
  while(!controlDispatch()){}
  while(!wirelessDataForwarding()){}
}
