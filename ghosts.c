/**************************************************/
/*******************  GHOSTS.C  *******************/
/**************************************************/

#include "ghosts.h"

#define DEBUG_GHOSTS

/** flag for double sided ghost frame. */
int double_sided = 0;

void ghost_init()
{
#ifdef DEBUG_GHOSTS
  if(this_node<2) fprintf(stderr,"%d: ghost_init:\n",this_node); 
#endif
}

void exchange_part()
{
#ifdef DEBUG_GHOSTS
  if(this_node<2) fprintf(stderr,"%d: exchange_part:\n",this_node); 
#endif
}

void exchange_ghost()
{
#ifdef DEBUG_GHOSTS
  if(this_node<2) fprintf(stderr,"%d: exchange_ghost:\n",this_node); 
#endif
}

void exchange_ghost_pos()
{
#ifdef DEBUG_GHOSTS
  if(this_node<2) fprintf(stderr,"%d: exchange_ghost_pos:\n",this_node); 
#endif

}

void exchange_ghost_forces()
{
#ifdef DEBUG_GHOSTS
  if(this_node<2) fprintf(stderr,"%d: exchange_ghost_forces:\n",this_node); 
#endif

}

void ghost_exit()
{
#ifdef DEBUG_GHOSTS
  if(this_node<2) fprintf(stderr,"%d: ghost_exit:\n",this_node); 
#endif
}
