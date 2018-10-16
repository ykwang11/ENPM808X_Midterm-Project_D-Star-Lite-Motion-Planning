/**
 * @file Cell.cpp
 * @author Yu-Kai Wang
 * @copyright MIT License
 *
 * @brief D* Lite Path Planning
 *
 * @section Description
 *
 * This class holds the status of each node in the map.
 * g-values: estamated distances to the goal.
 * rhs-values: one step lookahead values based on the g-values.
 *
 */

#include "Cell.h"

/**
 * @brief Constructor.
 * @param number for the inital g-value and rhs-value
 * @return none
 */
Cell::Cell(const double &initial_num) {
    g = initial_num;
    rhs = initial_num;
    status = " ";
}

/**
 * @brief Get current g-value.
 * @param none
 * @return g-value
 */
double Cell::CurrentG() const { return g; }

/**
 * @brief Get current rhs-value.
 * @param none
 * @return rhs-value
 */
double Cell::CurrentRhs() const { return rhs; }

/**
 * @brief Get current status: obstacle, unknown obstacle, goal, or start point.
 * @param none
 * @return mark that represent the status
 */
std::string Cell::CurrentStatus() const { return status; }

/**
 * @brief Set new g-value.
 * @param new g-value
 * @return none
 */
void Cell::UpdateG(const double &new_g) { g = new_g; }

/**
 * @brief Set new rhs-value.
 * @param new rhs-value
 * @return none
 */
void Cell::UpdateRhs(const double &new_rhs) { rhs = new_rhs; }

/**
 * @brief Set new status.
 * @param mark represent new status
 * @return none
 */
void Cell::UpdateStatus(const std::string &new_status) { status = new_status; }
