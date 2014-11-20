<?php
/**
 * @file
 * cumbancha_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cumbancha_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Use PHP input for field settings (dangerous - grant with care)'.
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'cck',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access drupalchat'.
  $permissions['access drupalchat'] = array(
    'name' => 'access drupalchat',
    'roles' => array(
      'VIP' => 'VIP',
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'drupalchat',
  );

  // Exported permission: 'access drupalchat all logs'.
  $permissions['access drupalchat all logs'] = array(
    'name' => 'access drupalchat all logs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'drupalchat',
  );

  // Exported permission: 'access drupalchat own logs'.
  $permissions['access drupalchat own logs'] = array(
    'name' => 'access drupalchat own logs',
    'roles' => array(
      'VIP' => 'VIP',
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'drupalchat',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer circuito registration'.
  $permissions['administer circuito registration'] = array(
    'name' => 'administer circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer comment notify'.
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer drupalchat'.
  $permissions['administer drupalchat'] = array(
    'name' => 'administer drupalchat',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'drupalchat',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer invitations'.
  $permissions['administer invitations'] = array(
    'name' => 'administer invitations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'administer invite types'.
  $permissions['administer invite types'] = array(
    'name' => 'administer invite types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer own circuito registration'.
  $permissions['administer own circuito registration'] = array(
    'name' => 'administer own circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer recommender'.
  $permissions['administer recommender'] = array(
    'name' => 'administer recommender',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recommender',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create actividad content'.
  $permissions['create actividad content'] = array(
    'name' => 'create actividad content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create any invite entities'.
  $permissions['create any invite entities'] = array(
    'name' => 'create any invite entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'create artista content'.
  $permissions['create artista content'] = array(
    'name' => 'create artista content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create circuito content'.
  $permissions['create circuito content'] = array(
    'name' => 'create circuito content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create circuito registration'.
  $permissions['create circuito registration'] = array(
    'name' => 'create circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create circuito registration other anonymous'.
  $permissions['create circuito registration other anonymous'] = array(
    'name' => 'create circuito registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create circuito registration other users'.
  $permissions['create circuito registration other users'] = array(
    'name' => 'create circuito registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create establecimiento content'.
  $permissions['create establecimiento content'] = array(
    'name' => 'create establecimiento content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create grupo_artistico content'.
  $permissions['create grupo_artistico content'] = array(
    'name' => 'create grupo_artistico content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create invite_by_email entity'.
  $permissions['create invite_by_email entity'] = array(
    'name' => 'create invite_by_email entity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create presentacion content'.
  $permissions['create presentacion content'] = array(
    'name' => 'create presentacion content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any actividad content'.
  $permissions['delete any actividad content'] = array(
    'name' => 'delete any actividad content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any artista content'.
  $permissions['delete any artista content'] = array(
    'name' => 'delete any artista content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any circuito content'.
  $permissions['delete any circuito content'] = array(
    'name' => 'delete any circuito content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any circuito registration'.
  $permissions['delete any circuito registration'] = array(
    'name' => 'delete any circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any establecimiento content'.
  $permissions['delete any establecimiento content'] = array(
    'name' => 'delete any establecimiento content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any grupo_artistico content'.
  $permissions['delete any grupo_artistico content'] = array(
    'name' => 'delete any grupo_artistico content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any presentacion content'.
  $permissions['delete any presentacion content'] = array(
    'name' => 'delete any presentacion content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own actividad content'.
  $permissions['delete own actividad content'] = array(
    'name' => 'delete own actividad content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own artista content'.
  $permissions['delete own artista content'] = array(
    'name' => 'delete own artista content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own circuito content'.
  $permissions['delete own circuito content'] = array(
    'name' => 'delete own circuito content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own circuito registration'.
  $permissions['delete own circuito registration'] = array(
    'name' => 'delete own circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own establecimiento content'.
  $permissions['delete own establecimiento content'] = array(
    'name' => 'delete own establecimiento content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own grupo_artistico content'.
  $permissions['delete own grupo_artistico content'] = array(
    'name' => 'delete own grupo_artistico content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own presentacion content'.
  $permissions['delete own presentacion content'] = array(
    'name' => 'delete own presentacion content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in actividades_al_aire_libre'.
  $permissions['delete terms in actividades_al_aire_libre'] = array(
    'name' => 'delete terms in actividades_al_aire_libre',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in agrupaci_n_art_stica'.
  $permissions['delete terms in agrupaci_n_art_stica'] = array(
    'name' => 'delete terms in agrupaci_n_art_stica',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in agrupaciones_artisticas'.
  $permissions['delete terms in agrupaciones_artisticas'] = array(
    'name' => 'delete terms in agrupaciones_artisticas',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in baile'.
  $permissions['delete terms in baile'] = array(
    'name' => 'delete terms in baile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in calle'.
  $permissions['delete terms in calle'] = array(
    'name' => 'delete terms in calle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cocina'.
  $permissions['delete terms in cocina'] = array(
    'name' => 'delete terms in cocina',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in d_as_de_la_semana'.
  $permissions['delete terms in d_as_de_la_semana'] = array(
    'name' => 'delete terms in d_as_de_la_semana',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in deporte'.
  $permissions['delete terms in deporte'] = array(
    'name' => 'delete terms in deporte',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in edad'.
  $permissions['delete terms in edad'] = array(
    'name' => 'delete terms in edad',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in espectaculos'.
  $permissions['delete terms in espectaculos'] = array(
    'name' => 'delete terms in espectaculos',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in lugar'.
  $permissions['delete terms in lugar'] = array(
    'name' => 'delete terms in lugar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in municipio'.
  $permissions['delete terms in municipio'] = array(
    'name' => 'delete terms in municipio',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in musica'.
  $permissions['delete terms in musica'] = array(
    'name' => 'delete terms in musica',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ocupacion'.
  $permissions['delete terms in ocupacion'] = array(
    'name' => 'delete terms in ocupacion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in orientacion_sexual'.
  $permissions['delete terms in orientacion_sexual'] = array(
    'name' => 'delete terms in orientacion_sexual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in otros_intereses'.
  $permissions['delete terms in otros_intereses'] = array(
    'name' => 'delete terms in otros_intereses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in palabras_clave'.
  $permissions['delete terms in palabras_clave'] = array(
    'name' => 'delete terms in palabras_clave',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in reparto'.
  $permissions['delete terms in reparto'] = array(
    'name' => 'delete terms in reparto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sexo'.
  $permissions['delete terms in sexo'] = array(
    'name' => 'delete terms in sexo',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tematicas'.
  $permissions['delete terms in tematicas'] = array(
    'name' => 'delete terms in tematicas',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tipo_de_establecimiento'.
  $permissions['delete terms in tipo_de_establecimiento'] = array(
    'name' => 'delete terms in tipo_de_establecimiento',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tribus_urbanas'.
  $permissions['delete terms in tribus_urbanas'] = array(
    'name' => 'delete terms in tribus_urbanas',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any actividad content'.
  $permissions['edit any actividad content'] = array(
    'name' => 'edit any actividad content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any artista content'.
  $permissions['edit any artista content'] = array(
    'name' => 'edit any artista content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any circuito content'.
  $permissions['edit any circuito content'] = array(
    'name' => 'edit any circuito content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any establecimiento content'.
  $permissions['edit any establecimiento content'] = array(
    'name' => 'edit any establecimiento content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any grupo_artistico content'.
  $permissions['edit any grupo_artistico content'] = array(
    'name' => 'edit any grupo_artistico content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any invite entities'.
  $permissions['edit any invite entities'] = array(
    'name' => 'edit any invite entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any presentacion content'.
  $permissions['edit any presentacion content'] = array(
    'name' => 'edit any presentacion content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit circuito registration state'.
  $permissions['edit circuito registration state'] = array(
    'name' => 'edit circuito registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own actividad content'.
  $permissions['edit own actividad content'] = array(
    'name' => 'edit own actividad content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own artista content'.
  $permissions['edit own artista content'] = array(
    'name' => 'edit own artista content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own circuito content'.
  $permissions['edit own circuito content'] = array(
    'name' => 'edit own circuito content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own establecimiento content'.
  $permissions['edit own establecimiento content'] = array(
    'name' => 'edit own establecimiento content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own grupo_artistico content'.
  $permissions['edit own grupo_artistico content'] = array(
    'name' => 'edit own grupo_artistico content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own invite entities'.
  $permissions['edit own invite entities'] = array(
    'name' => 'edit own invite entities',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own presentacion content'.
  $permissions['edit own presentacion content'] = array(
    'name' => 'edit own presentacion content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in actividades_al_aire_libre'.
  $permissions['edit terms in actividades_al_aire_libre'] = array(
    'name' => 'edit terms in actividades_al_aire_libre',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in agrupaci_n_art_stica'.
  $permissions['edit terms in agrupaci_n_art_stica'] = array(
    'name' => 'edit terms in agrupaci_n_art_stica',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in agrupaciones_artisticas'.
  $permissions['edit terms in agrupaciones_artisticas'] = array(
    'name' => 'edit terms in agrupaciones_artisticas',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in baile'.
  $permissions['edit terms in baile'] = array(
    'name' => 'edit terms in baile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in calle'.
  $permissions['edit terms in calle'] = array(
    'name' => 'edit terms in calle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cocina'.
  $permissions['edit terms in cocina'] = array(
    'name' => 'edit terms in cocina',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in d_as_de_la_semana'.
  $permissions['edit terms in d_as_de_la_semana'] = array(
    'name' => 'edit terms in d_as_de_la_semana',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in deporte'.
  $permissions['edit terms in deporte'] = array(
    'name' => 'edit terms in deporte',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in edad'.
  $permissions['edit terms in edad'] = array(
    'name' => 'edit terms in edad',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in espectaculos'.
  $permissions['edit terms in espectaculos'] = array(
    'name' => 'edit terms in espectaculos',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in lugar'.
  $permissions['edit terms in lugar'] = array(
    'name' => 'edit terms in lugar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in municipio'.
  $permissions['edit terms in municipio'] = array(
    'name' => 'edit terms in municipio',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in musica'.
  $permissions['edit terms in musica'] = array(
    'name' => 'edit terms in musica',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ocupacion'.
  $permissions['edit terms in ocupacion'] = array(
    'name' => 'edit terms in ocupacion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in orientacion_sexual'.
  $permissions['edit terms in orientacion_sexual'] = array(
    'name' => 'edit terms in orientacion_sexual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in otros_intereses'.
  $permissions['edit terms in otros_intereses'] = array(
    'name' => 'edit terms in otros_intereses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in palabras_clave'.
  $permissions['edit terms in palabras_clave'] = array(
    'name' => 'edit terms in palabras_clave',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in reparto'.
  $permissions['edit terms in reparto'] = array(
    'name' => 'edit terms in reparto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sexo'.
  $permissions['edit terms in sexo'] = array(
    'name' => 'edit terms in sexo',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tematicas'.
  $permissions['edit terms in tematicas'] = array(
    'name' => 'edit terms in tematicas',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tipo_de_establecimiento'.
  $permissions['edit terms in tipo_de_establecimiento'] = array(
    'name' => 'edit terms in tipo_de_establecimiento',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tribus_urbanas'.
  $permissions['edit terms in tribus_urbanas'] = array(
    'name' => 'edit terms in tribus_urbanas',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export taxonomy by csv'.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'flag bookmarks'.
  $permissions['flag bookmarks'] = array(
    'name' => 'flag bookmarks',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag recomendado'.
  $permissions['flag recomendado'] = array(
    'name' => 'flag recomendado',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import taxonomy by csv'.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to comments'.
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unflag bookmarks'.
  $permissions['unflag bookmarks'] = array(
    'name' => 'unflag bookmarks',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag recomendado'.
  $permissions['unflag recomendado'] = array(
    'name' => 'unflag recomendado',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'update any circuito registration'.
  $permissions['update any circuito registration'] = array(
    'name' => 'update any circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own circuito registration'.
  $permissions['update own circuito registration'] = array(
    'name' => 'update own circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any invite entities'.
  $permissions['view any invite entities'] = array(
    'name' => 'view any invite entities',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'view circuito registration'.
  $permissions['view circuito registration'] = array(
    'name' => 'view circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own circuito registration'.
  $permissions['view own circuito registration'] = array(
    'name' => 'view own circuito registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'moderador' => 'moderador',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'withdraw own accepted invitations'.
  $permissions['withdraw own accepted invitations'] = array(
    'name' => 'withdraw own accepted invitations',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'withdraw own invitations'.
  $permissions['withdraw own invitations'] = array(
    'name' => 'withdraw own invitations',
    'roles' => array(
      'administrator' => 'administrator',
      'moderador' => 'moderador',
    ),
    'module' => 'invite',
  );

  return $permissions;
}
