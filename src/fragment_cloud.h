#pragma once
#ifndef CATA_SRC_FRAGMENT_CLOUD_H
#define CATA_SRC_FRAGMENT_CLOUD_H

enum class quadrant;

float shrapnel_calc( const float &intensity,
                     const float &last_obstacle,
                     const int &distance );
bool shrapnel_check( const float &obstacle, const float &intensity );
void update_fragment_cloud( float &output, const float &new_intensity, quadrant );
float accumulate_fragment_cloud( const float &cumulative_obstacle,
                                 const float &current_obstacle,
                                 const int &distance );

#endif // CATA_SRC_FRAGMENT_CLOUD_H
