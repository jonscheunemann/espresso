/*
 * Copyright (C) 2010-2022 The ESPResSo project
 * Copyright (C) 2002,2003,2004,2005,2006,2007,2008,2009,2010
 *   Max-Planck-Institute for Polymer Research, Theory Group
 *
 * This file is part of ESPResSo.
 *
 * ESPResSo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ESPResSo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef POLYMER_H
#define POLYMER_H
/** \file
 *
 *  This file contains everything needed to create a start-up
 *  configuration of polymer chains which may respect already
 *  existing particles and/or constraints.
 *
 *  Implementation in polymer.cpp.
 */

#include "PartCfg.hpp"

#include <utils/Vector.hpp>

#include <vector>

/** Determines valid polymer positions and returns them.
 *  @param  partCfg           particle collection
 *  @param  n_polymers        how many polymers to create
 *  @param  beads_per_chain   monomers per chain
 *  @param  bond_length       length of the bonds between two monomers
 *  @param  start_positions   starting positions of each polymers
 *  @param  min_distance      minimum distance between all particles
 *  @param  max_tries         how often a monomer/polymer should be reset if
 *                            current position collides with a previous particle
 *  @param  use_bond_angle    whether to use the @p bond_angle argument
 *  @param  bond_angle        desired bond-angle to be fixed
 *  @param  respect_constraints  whether to respect constraints
 *  @param  seed              seed for RNG
 */
std::vector<std::vector<Utils::Vector3d>>
draw_polymer_positions(PartCfg &partCfg, int n_polymers, int beads_per_chain,
                       double bond_length,
                       std::vector<Utils::Vector3d> const &start_positions,
                       double min_distance, int max_tries, int use_bond_angle,
                       double bond_angle, int respect_constraints, int seed);

#endif
