#include <tonc.h>
#include "audio_engine_external.h"

int main(void)
{
	irq_init(isr_master);
	irq_add(II_VCOUNT, audioVcountISR);
	irq_add(II_TIMER1, audioTimer1ISR);
	irq_add(II_VBLANK, NULL);

	audioInitialize();
	
	playNewSound(_musMainMenu);
	
	while(1){
		VBlankIntrWait();
		processAudio();
	}
}
