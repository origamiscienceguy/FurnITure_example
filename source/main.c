#include <tonc.h>
#include "audio_engine_external.h"

int main(void)
{
	irq_init(isr_master);
	irq_enable(II_VCOUNT);
	irq_enable(II_TIMER1);
	irq_add(II_VCOUNT, audioVcountISR);
	irq_add(II_TIMER1, audioTimer1ISR);

	audioInitialize();
	
	playNewSound(_musMainMenu);
	
	while(1);
}
