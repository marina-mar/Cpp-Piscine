
#ifndef GAMEOBJECT_CLASS_HPP
#define GAMEOBJECT_CLASS_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

class gameObject
{
public:
    //constructors
    gameObject( void );
    gameObject(gameObject const &copy);

    //destructor
    ~gameObject( void );

    //assign
    gameObject &operator=(gameObject const &base);

    //actions
    virtual void    move(int dir_x, int dir_y) = 0;

    //prints
    void	printObject( void );

    //gets
    unsigned int    get_xPos( void );
    unsigned int    get_yPos( void );
    unsigned int    get_maxX( void );
    unsigned int    get_maxY( void );
    int             get_xSize( void );
    int             get_ySize( void );
   // Room            get_curRoom( void );
    char            get_Id( void );
    unsigned int    get_ptsToNextLvl( void );
    unsigned int    get_lvl( void );

    //sets
    void    set_xPos(unsigned int new_value);
    void    set_yPos(unsigned int new_value);
    void    set_maxX(unsigned int new_value);
    void    set_maxY(unsigned int new_value);
    void    set_xSize(int new_value);
    void    set_ySize(int new_value);
  //  void    set_curRoom(Room new_value);
    void    set_Id(char new_value);
    void    set_ptsToNextLvl(unsigned int new_value);
    void    set_lvl(unsigned int new_value);

private:
    unsigned int        _xPos;
    unsigned int        _yPos;
    unsigned int        _maxY;
    unsigned int        _maxX;
    int                 _xSize;
    int                 _ySize;
   // Room                _curRoom;
    char                _Id;
    static unsigned int _ptsToNextLvl;
    static unsigned int _lvl;
};

#endif