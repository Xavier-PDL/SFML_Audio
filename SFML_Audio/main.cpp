/**
 * \file main.cpp
 *
 * Audio Engine for Our CoronaGame
 * We have  different functions to be played when we want to inculcate them into our
 * main game.
 *
 * \author Daniyal Kabir Dar
 */






//enum AudioType
//{
//	SoundEffect,
//	BackgroundMusic
//};
//
//class Audio 
//{
//	AudioType audioType;
//	sf::Music music;
//	sf::Sound sfx;	
//public:
//	Audio(AudioType audioType);
//	void load(const char* filePath);
//	//void BackMusic();
//	//void SpraySound();
//	//void DieSound();
//
//
//};

// Member functions definitions

//auto Audio::BackMusic()->void {
//	sf::Music music;
//
//	music.openFromFile("audio/frogs-io.ogg");   // name of audio file available locally for background going to play constantly
//	music.setVolume(50);
//
//	music.play();
//
//
//
//}
//
//
//
//// just play the spray sound
//auto Audio::SpraySound() -> void {
//
//	sf::Sound spraymusic;
//
//	spraymusic.openFromFile("audio/frogs-io.ogg");   // play the audio file that has the spray sound
//	spraymusic.setVolume(70);     /// sound should be more than background volume
//
//	spraymusic.play();    // how to set timer to stop?  
//
//}
//
//auto Audio::DieSound() -> void {
//
//
//	sf::Music diemusic;
//
//	//change audio/frogs-io.ogg to whatever file we are using for the dying sound
//
//	diemusic.openFromFile("audio/frogs-io.ogg");   // play the audio file that has the spray sound
//	diemusic.setVolume(70);     /// sound should be more than background volume
//
//	diemusic.play();    // how to set timer to stop?  
}



int main()
{

	Audio s;
	s.BackMusic();
	s.DieSound();
	s.SpraySound();

	sf::Clock clock;
	while (window.isOpen())
	{
		sf::Time dt = clock.restart();
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			music.stop();
		}

		window.clear(sf::Color::White);
		window.display();

	}
}