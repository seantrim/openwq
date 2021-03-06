

// Copyright 2020, Diogo Costa, diogo.pinhodacosta@canada.ca
// This file is part of OpenWQ model.

// This program, openWQ, is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) aNCOLS later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#ifndef OpenWQ_watertranspH_INCLUDED
#define OpenWQ_watertranspH_INCLUDED

#include <armadillo>
#include <string>
#include <algorithm>
#include "exprtk.hpp"
#include <cstdio>
//#include "utility.h"
//#include "ADE_solver.h"

#include "OpenWQ_global.h"
//#include "OpenWQ_initiate.h"
//#include "OpenWQ_print.h"

class OpenWQ_watertransp{

    public:

    //void ChemCompExchange(
    //    OpenWQ_json& JSONfile, 
    //    OpenWQ_vars& OpenWQ_vars, 
    //    int source, 
    //    std::string kinetics, 
    //    std::vector<std::string> parameter_names, 
    //    std::vector<double> parameter_values,
    //    std::array<double,7> & linedata, 
    //    int & index_chem);


    void Adv(
        OpenWQ_json& OpenWQ_json,
        OpenWQ_vars& OpenWQ_vars,
        const int source,
        const int ix_s, 
        const int iy_s,
        const int iz_s,
        const int recipient,
        const int ix_r,
        const int iy_r,
        const int iz_r,
        const double wflux_s2r,
        const double wmass_recipient);

    //void AdvDisp(
    //    OpenWQ_json& OpenWQ_json,
    //    OpenWQ_vars& OpenWQ_vars);

};

#endif