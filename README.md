## Quickstart

> _"I want to play a song. Where do I begin?"_


1) Setup devkitPro and Tonc

2) Place your song into the resources/sounds folder.

3) Run the python script conv_audio.py found in the scripts folder.

4) Open audio/source/audio_assets_enum.c and find the enumeration that
   coresponds to your song

5) In main.c, replace _musMainMenu with the enumeration for your song.

6) Run make.


> _"It's not working, what is going wrong?"_

There are a few issues that might be happening.
Try everything in this list first before asking me for help.

-Make sure that sample compression is turned off. In OpenMPT, this is done
 by setting the advanced setting ITCompressionMono to 0.

-Make sure that all samples have a unique name. Samples with identical names
 will be treated as duplicates in order to save space.

-Make sure that instruments are used, not just samples. In OpenMPT, you can convert
 samples to instruments by going to the instruments tab, clicking "insert new
 instrument" and it will prompt you to convert all samples to instruments.