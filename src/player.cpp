#include <portal-cli/player.h>

#include <SFML/Audio.hpp>

#include <chrono>
#include <thread>


namespace PortalCli
{
    void Player::PlaySound()
    {
        sf::SoundBuffer buffer("/home/nyx/code/portal-cli/lines/portal-one-lines/glados/GLaDOS_00_part1_entry-1.wav");
        sf::Sound sound(buffer);
        sound.play();
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));


    }
}

