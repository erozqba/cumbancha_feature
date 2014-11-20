<?php
/**
 * @file
 * cumbancha_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cumbancha_feature_user_default_roles() {
  $roles = array();

  // Exported role: VIP.
  $roles['VIP'] = array(
    'name' => 'VIP',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: moderador.
  $roles['moderador'] = array(
    'name' => 'moderador',
    'weight' => 4,
  );

  return $roles;
}
