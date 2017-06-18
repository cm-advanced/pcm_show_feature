<?php
/**
 * @file
 * pcm_show_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pcm_show_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cm_show content'.
  $permissions['create cm_show content'] = array(
    'name' => 'create cm_show content',
    'roles' => array(
      'Series Renewed' => 'Series Renewed',
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_cablecast_show_id'.
  $permissions['create field_cablecast_show_id'] = array(
    'name' => 'create field_cablecast_show_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_filler_start_date'.
  $permissions['create field_filler_start_date'] = array(
    'name' => 'create field_filler_start_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_is_placeholder'.
  $permissions['create field_is_placeholder'] = array(
    'name' => 'create field_is_placeholder',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_premier_date'.
  $permissions['create field_premier_date'] = array(
    'name' => 'create field_premier_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_runtime'.
  $permissions['create field_runtime'] = array(
    'name' => 'create field_runtime',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_airings_view'.
  $permissions['create field_show_airings_view'] = array(
    'name' => 'create field_show_airings_view',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_is_special'.
  $permissions['create field_show_is_special'] = array(
    'name' => 'create field_show_is_special',
    'roles' => array(
      'CiviAdmin' => 'CiviAdmin',
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_placeholder_season'.
  $permissions['create field_show_placeholder_season'] = array(
    'name' => 'create field_show_placeholder_season',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_schedule_start_date'.
  $permissions['create field_show_schedule_start_date'] = array(
    'name' => 'create field_show_schedule_start_date',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_scheduling'.
  $permissions['create field_show_scheduling'] = array(
    'name' => 'create field_show_scheduling',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_start_time'.
  $permissions['create field_start_time'] = array(
    'name' => 'create field_start_time',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_where_produced'.
  $permissions['create field_where_produced'] = array(
    'name' => 'create field_where_produced',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create og_group_ref'.
  $permissions['create og_group_ref'] = array(
    'name' => 'create og_group_ref',
    'roles' => array(
      'CiviAdmin' => 'CiviAdmin',
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any cm_show content'.
  $permissions['delete any cm_show content'] = array(
    'name' => 'delete any cm_show content',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cm_show content'.
  $permissions['delete own cm_show content'] = array(
    'name' => 'delete own cm_show content',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cm_show content'.
  $permissions['edit any cm_show content'] = array(
    'name' => 'edit any cm_show content',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_cablecast_show_id'.
  $permissions['edit field_cablecast_show_id'] = array(
    'name' => 'edit field_cablecast_show_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_filler_start_date'.
  $permissions['edit field_filler_start_date'] = array(
    'name' => 'edit field_filler_start_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_is_placeholder'.
  $permissions['edit field_is_placeholder'] = array(
    'name' => 'edit field_is_placeholder',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_premier_date'.
  $permissions['edit field_premier_date'] = array(
    'name' => 'edit field_premier_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_runtime'.
  $permissions['edit field_runtime'] = array(
    'name' => 'edit field_runtime',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_airings_view'.
  $permissions['edit field_show_airings_view'] = array(
    'name' => 'edit field_show_airings_view',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_is_special'.
  $permissions['edit field_show_is_special'] = array(
    'name' => 'edit field_show_is_special',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_placeholder_season'.
  $permissions['edit field_show_placeholder_season'] = array(
    'name' => 'edit field_show_placeholder_season',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_schedule_start_date'.
  $permissions['edit field_show_schedule_start_date'] = array(
    'name' => 'edit field_show_schedule_start_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_scheduling'.
  $permissions['edit field_show_scheduling'] = array(
    'name' => 'edit field_show_scheduling',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_start_time'.
  $permissions['edit field_start_time'] = array(
    'name' => 'edit field_start_time',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_where_produced'.
  $permissions['edit field_where_produced'] = array(
    'name' => 'edit field_where_produced',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit og_group_ref'.
  $permissions['edit og_group_ref'] = array(
    'name' => 'edit og_group_ref',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own cm_show content'.
  $permissions['edit own cm_show content'] = array(
    'name' => 'edit own cm_show content',
    'roles' => array(
      'Series Renewed' => 'Series Renewed',
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_cablecast_show_id'.
  $permissions['edit own field_cablecast_show_id'] = array(
    'name' => 'edit own field_cablecast_show_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_filler_start_date'.
  $permissions['edit own field_filler_start_date'] = array(
    'name' => 'edit own field_filler_start_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_is_placeholder'.
  $permissions['edit own field_is_placeholder'] = array(
    'name' => 'edit own field_is_placeholder',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_premier_date'.
  $permissions['edit own field_premier_date'] = array(
    'name' => 'edit own field_premier_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_runtime'.
  $permissions['edit own field_runtime'] = array(
    'name' => 'edit own field_runtime',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_airings_view'.
  $permissions['edit own field_show_airings_view'] = array(
    'name' => 'edit own field_show_airings_view',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_is_special'.
  $permissions['edit own field_show_is_special'] = array(
    'name' => 'edit own field_show_is_special',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_placeholder_season'.
  $permissions['edit own field_show_placeholder_season'] = array(
    'name' => 'edit own field_show_placeholder_season',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_schedule_start_date'.
  $permissions['edit own field_show_schedule_start_date'] = array(
    'name' => 'edit own field_show_schedule_start_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_scheduling'.
  $permissions['edit own field_show_scheduling'] = array(
    'name' => 'edit own field_show_scheduling',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_start_time'.
  $permissions['edit own field_start_time'] = array(
    'name' => 'edit own field_start_time',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_where_produced'.
  $permissions['edit own field_where_produced'] = array(
    'name' => 'edit own field_where_produced',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own og_group_ref'.
  $permissions['edit own og_group_ref'] = array(
    'name' => 'edit own og_group_ref',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'producer' => 'producer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cablecast_show_id'.
  $permissions['view field_cablecast_show_id'] = array(
    'name' => 'view field_cablecast_show_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'producer' => 'producer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_filler_start_date'.
  $permissions['view field_filler_start_date'] = array(
    'name' => 'view field_filler_start_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_is_placeholder'.
  $permissions['view field_is_placeholder'] = array(
    'name' => 'view field_is_placeholder',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_premier_date'.
  $permissions['view field_premier_date'] = array(
    'name' => 'view field_premier_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_runtime'.
  $permissions['view field_runtime'] = array(
    'name' => 'view field_runtime',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_airings_view'.
  $permissions['view field_show_airings_view'] = array(
    'name' => 'view field_show_airings_view',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_is_special'.
  $permissions['view field_show_is_special'] = array(
    'name' => 'view field_show_is_special',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_placeholder_season'.
  $permissions['view field_show_placeholder_season'] = array(
    'name' => 'view field_show_placeholder_season',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_schedule_start_date'.
  $permissions['view field_show_schedule_start_date'] = array(
    'name' => 'view field_show_schedule_start_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_scheduling'.
  $permissions['view field_show_scheduling'] = array(
    'name' => 'view field_show_scheduling',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_start_time'.
  $permissions['view field_start_time'] = array(
    'name' => 'view field_start_time',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_where_produced'.
  $permissions['view field_where_produced'] = array(
    'name' => 'view field_where_produced',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view og_group_ref'.
  $permissions['view og_group_ref'] = array(
    'name' => 'view og_group_ref',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'producer' => 'producer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cablecast_show_id'.
  $permissions['view own field_cablecast_show_id'] = array(
    'name' => 'view own field_cablecast_show_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'producer' => 'producer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_filler_start_date'.
  $permissions['view own field_filler_start_date'] = array(
    'name' => 'view own field_filler_start_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_is_placeholder'.
  $permissions['view own field_is_placeholder'] = array(
    'name' => 'view own field_is_placeholder',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_premier_date'.
  $permissions['view own field_premier_date'] = array(
    'name' => 'view own field_premier_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'authenticated user' => 'authenticated user',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_runtime'.
  $permissions['view own field_runtime'] = array(
    'name' => 'view own field_runtime',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_airings_view'.
  $permissions['view own field_show_airings_view'] = array(
    'name' => 'view own field_show_airings_view',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_is_special'.
  $permissions['view own field_show_is_special'] = array(
    'name' => 'view own field_show_is_special',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_placeholder_season'.
  $permissions['view own field_show_placeholder_season'] = array(
    'name' => 'view own field_show_placeholder_season',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_schedule_start_date'.
  $permissions['view own field_show_schedule_start_date'] = array(
    'name' => 'view own field_show_schedule_start_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_scheduling'.
  $permissions['view own field_show_scheduling'] = array(
    'name' => 'view own field_show_scheduling',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_start_time'.
  $permissions['view own field_start_time'] = array(
    'name' => 'view own field_start_time',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_where_produced'.
  $permissions['view own field_where_produced'] = array(
    'name' => 'view own field_where_produced',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own og_group_ref'.
  $permissions['view own og_group_ref'] = array(
    'name' => 'view own og_group_ref',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'producer' => 'producer',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
