#include "Audio.h"

Audio::Audio(AudioType audioType)
{
	this->audioType = audioType;
}

void Audio::load(const char* filePath)
{
	if (audioType == AudioType::SoundEffect)
	{
		sfxBuffer.loadFromFile(filePath);
		sfx.setBuffer(sfxBuffer);
	}
	else
	{
		music.openFromFile(filePath);
	}
}

void Audio::play()
{
	if (audioType == AudioType::SoundEffect)
	{
		sfx.play();
	}
	else
	{
		music.play();
	}
}
