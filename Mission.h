/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe entreprise
 *
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>


 /*! \class Mission
    * \brief classe representant une entreprise. 2 attributs prives
    *
    * Cette classe a une finalite pedagogique :
    * \li : Rappel du C++
    * \li : commentaire avec Doxygen
    * \li : git, github
    */
class Mission
{

private:

    std::string nbPersonne;

        
    std::string descriptifMission;

    std::string nbHeure;





protected:



public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();
    Mission(const Mission& entre);
    Mission& operator = (const Mission& entre);

    Mission(std::string nom);
    void setnbPersonne(std::string deux);
    std::string getnbPersonne();







   

};

#endif