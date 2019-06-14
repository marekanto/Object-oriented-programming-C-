//
//  Tv.h
//  lab6prototype
//
//  Created by User on 11.04.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#ifndef TV H
#define TV H
class Tv {
    public :
    enum {
        Off = 0,
        On = 1,
    };
    enum {MinVal =0,MaxVal = 20};
    enum {Antenna = 1,
        Cable = 0
    };
    enum {TV = 0,
        DVD = 1
        
    };
    Tv(int s = Off,  int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
        void onoff();
        bool ison(); 
        void volup ();
        void voldown ();
        void chanup ();
        void chandown ();
        void set_mode();
        void set_input ();
        void settings () const;
        friend class Remote;
    private :
        int state ;  /*on or off */
        int volume ;  /*assumed to be digitized*/
        int maxchannel ; /* maximum number of channels*/
        int channel ; /*current channel setting*/
        int mode ; /* antenna or cable */
        int input ; // TV or DVD
};
#endif
class Remote: public Tv{
public:
    void set_chan(Tv & tv1);
    void onoff(Tv & g){g.onoff();}
    void volup(Tv & g){g.volup();}
    void voldown(Tv & g){g.voldown();}
    void chanup(Tv & g){g.chanup();}
    void chandown (Tv & g){g.chanup();}
    void set_mode(Tv & g){g.chanup();}
    void set_input (Tv & g){g.chanup();}
    void settings (Tv & g){g.chanup();}
private:
};
