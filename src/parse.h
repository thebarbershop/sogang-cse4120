/****************************************************/
/* File: util.c                                     */
/* Syntax analyzer implementation                   */
/* for the C- compiler                              */
/* Eom Taegyung                                     */
/****************************************************/

#ifndef __PARSE_H__
#define __PARSE_H__

#include "globals.h"

/* Function newStmtNode creates a new statement
 * node for syntax tree construction
 */
TreeNode *newStmtNode(StmtKind);

/* Function newExpNode creates a new expression 
 * node for syntax tree construction
 */
TreeNode *newExpNode(ExpKind);

/* Function newDeclNode creates a new declaration 
 * node for syntax tree construction
 */
TreeNode *newDeclNode(DeclKind);

/* Function newTypeNode creates a new type
 * node for syntax tree construction
 */
TreeNode *newTypeNode(TypeKind);

/* Function newParamNode creates a new parameter
 * node for syntax tree construction
 */
TreeNode *newParamNode(ParamKind);

TreeNode *parse(void);

#endif /* __PARSE_H__ */