#ifndef PARAM_H
#define PARAM_H

#define  NBVILLES    30
#define COTECARTE    10

/*********************************************************************/
/************ Verification contraintes sur les defines ***************/
/*********************************************************************/


#if NBVILLES>COTECARTE*COTECARTE
#error "Attention: NBVILLES>COTECARTE*COTECARTE"
#endif

#endif /* PARAM_H */
