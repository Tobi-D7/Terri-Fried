#include <renderd7.hpp>

//Spritesheet
RenderD7::Sheet tx;
//Sprites
RenderD7::Sprite egg;
RenderD7::Sprite coin;
RenderD7::Sprite lava;
RenderD7::Sprite logo;
RenderD7::Sprite platform;
RenderD7::Sprite scorebox;
RenderD7::Sprite splash_egg;

int main()
{
    RenderD7::Init::Main();
    //Load Spritesheet
    tx.Load("romfs:/gfx/tx.t3x");
    //Load Sprites
    egg.FromSheet(&tx, 0);
    coin.FromSheet(&tx, 1);
    lava.FromSheet(&tx, 2);
    logo.FromSheet(&tx, 3);
    platform.FromSheet(&tx, 4);
    scorebox.FromSheet(&tx, 5);
    splash_egg.FromSheet(&tx, 6);
    //Scale the Sprites
    egg.SetScale(0.5, 0.5);
    coin.SetScale(0.5, 0.5);
    lava.SetScale(0.5, 0.5);
    logo.SetScale(0.5, 0.5);
    platform.SetScale(0.5, 0.5);
    scorebox.egg.SetScale(0.5, 0.5);
    splash_egg.SetScale(0.5, 0.5);

    while(RenderD7::MainLoop())
    {
        if (d7_hDown & KEY_B) RenderD7::ExitApp();

        RenderD7::OnScreen(Top);
        
        egg.Draw();
        C3D_FrameEnd(0);
    }

    RenderD7::Exit::Main();
    return 0;
}
